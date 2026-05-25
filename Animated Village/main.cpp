#include <stdio.h>
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
# define PI 3.14159265358979323846

// Global variables for animation and day/night mode
int dayMode = 1; // 1 = day, 0 = night
float boatPos = 0.0f;
float cloudPos = 0.0f;
float treeSway = 0.0f;
float boatSpeed = 0.5f; // Normal boat speed
float fanAngle = 0.0f;  // Fan rotation angle

void init(void)
{
    // Initially set to day background color
    glClearColor(0.0, 0.9, 0.9, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 800, 0, 700);
}

// Circle Function (Reusable for each leaf or other shapes)
// All vertices are specified using glVertex2d()
void drawCircle(GLdouble x, GLdouble y, GLdouble radius)
{
    int triangleAmount = 300; // Number of triangles for smoothness
    GLdouble twicePi = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // Center of the circle
    for (int i = 0; i <= triangleAmount; i++) {
        glVertex2d(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

// Keyboard callback: press 'd' for day and 'n' for night.
void keyboard(unsigned char key, int x, int y) {
    if (key == 'd' || key == 'D')
        dayMode = 1;
    else if (key == 'n' || key == 'N')
        dayMode = 0;
    glutPostRedisplay();
}

// Mouse callback: Press left mouse button to speed up the boat.
void mouse(int button, int state, int x, int y) {
    if(button == GLUT_LEFT_BUTTON) {
        if(state == GLUT_DOWN)
            boatSpeed = 5.0f;  // Fast boat speed
        else if(state == GLUT_UP)
            boatSpeed = 0.5f;  // Return to normal speed
    }
}

// Timer function for animation updates
void timer(int value) {
    // Update boat horizontal position (wrap around if off-screen)
    boatPos += boatSpeed;
    if (boatPos > 1000)
        boatPos = -1000;

    // Update cloud horizontal position (wrap around if off-screen)
    cloudPos += 0.2f;
    if (cloudPos > 200)
        cloudPos = -400;

    // Update tree sway (oscillates with time)
    treeSway = 5.0f * sin(glutGet(GLUT_ELAPSED_TIME) / 500.0);

    // Update fan rotation angle
    fanAngle += 2.0f;
    if(fanAngle > 360.0f)
        fanAngle -= 360.0f;

    glutPostRedisplay();
    glutTimerFunc(20, timer, 0);
}

void display(void)
{
    // Set background color based on day/night mode.
    if(dayMode)
        glClearColor(0.0, 0.9, 0.9, 0.0);
    else
        glClearColor(0.0, 0.0, 0.1, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // ---------- Sun/Moon ----------
    if(dayMode) {
        GLdouble x = 175.0, y = 560.0, radius = 25.0;
        int triangleAmount = 300;
        GLdouble twicePi = 2.0 * PI;
        glColor3f(1.0f, 0.84f, 0.0f); // Yellow sun
        glBegin(GL_TRIANGLE_FAN);
        glVertex2d(x, y);
        for (int i = 0; i <= triangleAmount; i++) {
            glVertex2d(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
        glEnd();
    } else {
        GLdouble x = 175.0, y = 560.0, radius = 25.0;
        int triangleAmount = 300;
        GLdouble twicePi = 2.0 * PI;
        // Main moon circle
        glColor3f(1.0f, 1.0f, 1.0f); // White moon
        glBegin(GL_TRIANGLE_FAN);
        glVertex2d(x, y);
        for (int i = 0; i <= triangleAmount; i++) {
            glVertex2d(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
        glEnd();
        // Crescent effect
        glColor3f(0.0f, 0.0f, 0.1f);
        glBegin(GL_TRIANGLE_FAN);
        glVertex2d(x+8, y+5);
        for (int i = 0; i <= triangleAmount; i++) {
            glVertex2d(
                x+8 + (radius * cos(i * twicePi / triangleAmount)),
                y+5 + (radius * sin(i * twicePi / triangleAmount))
            );
        }
        glEnd();
    }
    // --------------------------------

    // Ground
    glColor3ub(0, 255, 0);
    glBegin(GL_QUADS);
    glVertex2d(0, 0);
    glVertex2d(800, 0);
    glVertex2d(800, 300);
    glVertex2d(0, 300);
    glEnd();

    // ----------------------------
    // 1st Tree beside jhao - trunk and animated leaves
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(620.0, 300.0);
    glVertex2d(620.0, 360.0);
    glVertex2d(630.0, 360.0);
    glVertex2d(630.0, 300.0);
    glEnd();
    glPushMatrix();
      glTranslated(treeSway, 0, 0);
      glColor3ub(0, 128, 0);
      {
          GLdouble r = 30.0;
          drawCircle(610.0, 360.0, r);
          drawCircle(628.0, 400.0, 30.0);
          drawCircle(645.0, 360.0, r);
      }
    glPopMatrix();
    // ----------------------------

    // Second Tree beside jhao - trunk and animated leaves
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(700.0, 300.0);
    glVertex2d(700.0, 360.0);
    glVertex2d(710.0, 360.0);
    glVertex2d(710.0, 300.0);
    glEnd();
    glPushMatrix();
      glTranslated(treeSway, 0, 0);
      glColor3ub(0, 128, 0);
      {
          GLdouble r = 30.0;
          drawCircle(690.0, 360.0, r);
          drawCircle(708.0, 390.0, 30.0);
          drawCircle(725.0, 360.0, r);
      }
    glPopMatrix();

    // Third Tree - trunk and animated leaves
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(760.0, 300.0);
    glVertex2d(760.0, 380.0);
    glVertex2d(770.0, 380.0);
    glVertex2d(770.0, 300.0);
    glEnd();
    glPushMatrix();
      glTranslated(treeSway, 0, 0);
      glColor3ub(0, 100, 0);
      {
          GLdouble r = 40.0;
          drawCircle(750.0, 380.0, r);
          drawCircle(765.0, 430.0, 35.0);
          drawCircle(780.0, 380.0, r);
      }
    glPopMatrix();

    // Animate the leaves drawn between trees (these groups were static before)
    glPushMatrix();
      glTranslated(treeSway, 0, 0);
      // 1st Leaves Between Trees
      glColor3ub(34, 139, 34);
      drawCircle(480.0, 310.0, 25.0);
      drawCircle(500.0, 340.0, 20.0);
      drawCircle(520.0, 310.0, 25.0);
      // 2nd Leaves Between Trees - Right Side
      glColor3ub(34, 139, 34);
      drawCircle(530.0, 310.0, 25.0);
      drawCircle(550.0, 340.0, 20.0);
      drawCircle(570.0, 310.0, 25.0);
    glPopMatrix();

    // River
    glColor3ub(100, 149, 237);
    glBegin(GL_QUADS);
    glVertex2d(0, 200);
    glVertex2d(0, 300);
    glVertex2d(800, 300);
    glVertex2d(800, 200);
    glEnd();

    // Hills
    glColor3ub(40, 181, 6);
    glBegin(GL_TRIANGLES);
    glVertex2d(-20, 300);
    glVertex2d(200, 300);
    glVertex2d(100, 450);
    glEnd();

    // 1st hill inner triangle
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(-20, 300);
    glVertex2d(50, 300);
    glVertex2d(100, 450);
    glEnd();

    // 2nd hill
    glColor3ub(40, 181, 6);
    glBegin(GL_TRIANGLES);
    glVertex2d(150, 300);
    glVertex2d(350, 300);
    glVertex2d(250, 450);
    glEnd();

    // 2nd hill inner triangle
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(150, 300);
    glVertex2d(200, 300);
    glVertex2d(250, 450);
    glEnd();

    // 3rd hill
    glColor3ub(40, 181, 6);
    glBegin(GL_TRIANGLES);
    glVertex2d(300, 300);
    glVertex2d(520, 300);
    glVertex2d(400, 450);
    glEnd();

    // 3rd hill inner triangle
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(300, 300);
    glVertex2d(350, 300);
    glVertex2d(400, 450);
    glEnd();

    // Hill right-side tree trunk
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(530, 300);
    glVertex2d(530, 370);
    glVertex2d(540, 370);
    glVertex2d(540, 300);
    glEnd();

    // 1st tree inner triangles
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(510, 360);
    glVertex2d(560, 360);
    glVertex2d(535, 500);
    glEnd();

    // 2nd tree trunk
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(590, 300);
    glVertex2d(590, 370);
    glVertex2d(600, 370);
    glVertex2d(600, 300);
    glEnd();

    // 2nd tree upper triangle
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(570, 410);
    glVertex2d(620, 410);
    glVertex2d(595, 480);
    glEnd();

    // 2nd tree lower triangle
    glColor3ub(30, 135, 5);
    glBegin(GL_TRIANGLES);
    glVertex2d(570, 370);
    glVertex2d(620, 370);
    glVertex2d(595, 430);
    glEnd();

    // ----------------------------
    // Boat (animated horizontal movement)
    glPushMatrix();
      glTranslated(boatPos, 0, 0);
      glColor3ub(0, 0, 0);
      glBegin(GL_QUADS);
      glVertex2d(325, 220);
      glVertex2d(400, 220);
      glVertex2d(425, 250);
      glVertex2d(300, 250);
      glEnd();

      glColor3ub(205, 133, 63);
      glBegin(GL_QUADS);
      glVertex2d(325, 250);
      glVertex2d(400, 250);
      glVertex2d(390, 280);
      glVertex2d(335, 280);
      glEnd();

      glColor3ub(160, 82, 45);
      glBegin(GL_QUADS);
      glVertex2d(360, 280);
      glVertex2d(370, 280);
      glVertex2d(370, 310);
      glVertex2d(360, 310);
      glEnd();

      glColor3ub(127, 23, 156);
      glBegin(GL_QUADS);
      glVertex2d(335, 290);
      glVertex2d(390, 290);
      glVertex2d(390, 375);
      glVertex2d(335, 375);
      glEnd();
    glPopMatrix();
    // ----------------------------

    // Clouds (animated horizontal movement)
    glPushMatrix();
      glTranslated(cloudPos, 0, 0);
      glColor3ub(255, 255, 255);
      drawCircle(460, 660, 20);
      drawCircle(445, 660, 15);
      drawCircle(475, 660, 15);
      drawCircle(390, 620, 20);
      drawCircle(405, 620, 15);
      drawCircle(375, 620, 15);
      drawCircle(455,560,15);
      drawCircle(470,560,20);
      drawCircle(485,560,15);
      drawCircle(255,560,15);
      drawCircle(270,560,20);
      drawCircle(285,560,15);

    glPopMatrix();

    // Tree at (50,150) - trunk and animated leaves
    glColor3ub(139, 69, 19);
    glBegin(GL_QUADS);
    glVertex2d(50, 150);
    glVertex2d(70, 150);
    glVertex2d(70, 300);
    glVertex2d(50, 300);
    glEnd();
    glPushMatrix();
      glTranslated(treeSway, 0, 0);
      glColor3ub(0, 128, 0);
      {
          GLdouble r = 40.0;
          drawCircle(50.0, 325.0, r);
          drawCircle(70.0, 325.0, r);
          drawCircle(45.0, 355.0, r);
          drawCircle(75.0, 355.0, r);
          drawCircle(60.0, 385.0, r);
      }
    glPopMatrix();

    // 2nd House
    glColor3ub(210, 105, 30);
    glBegin(GL_QUADS);
    glVertex2d(100, 220);
    glVertex2d(200, 220);
    glVertex2d(175, 270);
    glVertex2d(130, 270);
    glEnd();

    glColor3ub(244, 164, 96);
    glBegin(GL_QUADS);
    glVertex2d(100, 170);
    glVertex2d(185, 170);
    glVertex2d(185, 220);
    glVertex2d(100, 220);
    glEnd();

    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(100, 170);
    glVertex2d(190, 170);
    glVertex2d(190, 160);
    glVertex2d(100, 160);
    glEnd();

    // 2nd house door
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(140, 170);
    glVertex2d(165, 170);
    glVertex2d(165, 200);
    glVertex2d(140, 200);
    glEnd();

    // 1st House
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(0, 220);
    glVertex2d(135, 220);
    glVertex2d(110, 270);
    glVertex2d(25, 270);
    glEnd();

    glColor3ub(255, 222, 173);
    glBegin(GL_TRIANGLES);
    glVertex2d(10, 220);
    glVertex2d(50, 220);
    glVertex2d(25, 255);
    glEnd();

    glColor3ub(255, 222, 173);
    glBegin(GL_QUADS);
    glVertex2d(10, 150);
    glVertex2d(50, 150);
    glVertex2d(50, 220);
    glVertex2d(10, 220);
    glEnd();

    glColor3ub(222, 184, 135);
    glBegin(GL_QUADS);
    glVertex2d(50, 150);
    glVertex2d(125, 150);
    glVertex2d(125, 220);
    glVertex2d(50, 220);
    glEnd();

    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(10, 150);
    glVertex2d(125, 150);
    glVertex2d(125, 140);
    glVertex2d(10, 140);
    glEnd();

    // 1st house door and window
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(75, 150);
    glVertex2d(95, 150);
    glVertex2d(95, 195);
    glVertex2d(75, 195);
    glEnd();

    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
    glVertex2d(20, 200);
    glVertex2d(35, 200);
    glVertex2d(35, 175);
    glVertex2d(20, 175);
    glEnd();

    // ---------- Fan Stand and Rotating Fan Blades ----------
    glColor3ub(160, 82, 45);
    glBegin(GL_QUADS);
      glVertex2d(210, 160);
      glVertex2d(225, 160);
      glVertex2d(220, 280);
      glVertex2d(215, 280);
    glEnd();

    glColor3ub(0, 0, 0);
    {
        GLdouble rFan = 5.0;
        drawCircle(217.5, 280.0, rFan);
    }

    glPushMatrix();
      glTranslated(217.5, 280.0, 0);
      glRotated(fanAngle, 0, 0, 1);
      glColor3ub(176, 3, 35);
      glBegin(GL_TRIANGLES);
         glVertex2d(-0.5, 0.0);
         glVertex2d(22.5, 80.0);
         glVertex2d(-0.5, 80.0);
      glEnd();
      glBegin(GL_TRIANGLES);
         glVertex2d(-0.5, 0.0);
         glVertex2d(-23.5, -80.0);
         glVertex2d(-0.5, -80.0);
      glEnd();
      glBegin(GL_TRIANGLES);
         glVertex2d(-0.5, 0.0);
         glVertex2d(-52.5, 0.0);
         glVertex2d(-52.5, -40.0);
      glEnd();
      glBegin(GL_TRIANGLES);
         glVertex2d(-0.5, 0.0);
         glVertex2d(47.5, 0.0);
         glVertex2d(47.5, -40.0);
      glEnd();
    glPopMatrix();
    // ---------- End Fan ----------

    // ////////////////////////////////// School ////////////////////////////////
    glColor3ub(244, 138, 68);
    glBegin(GL_QUADS);
    glVertex2d(350, 0);
    glVertex2d(560, 0);
    glVertex2d(560, 250);
    glVertex2d(350, 250);
    glEnd();

    glColor3ub(176, 105, 52);
    glBegin(GL_QUADS);
    glVertex2d(350, 0);
    glVertex2d(350, 250);
    glVertex2d(340, 270);
    glVertex2d(340, 30);
    glEnd();

    glColor3ub(128, 76, 38);
    glBegin(GL_QUADS);
    glVertex2d(350, 250);
    glVertex2d(560, 250);
    glVertex2d(560, 270);
    glVertex2d(340, 270);
    glEnd();

    glColor3ub(128, 76, 38);
    for (int i = 0; i < 42; i++) {
        int x = i * 5;
        glBegin(GL_QUADS);
        glVertex2d(340 + x, 270);
        glVertex2d(342 + x, 270);
        glVertex2d(342 + x, 280);
        glVertex2d(340 + x, 280);
        glEnd();
    }

    glColor3ub(100, 56, 38);
    for (int i = 0; i < 42; i++) {
        int x = i * 5;
        glBegin(GL_QUADS);
        glVertex2d(350 + x, 250);
        glVertex2d(352 + x, 250);
        glVertex2d(352 + x, 263);
        glVertex2d(350 + x, 263);
        glEnd();
    }

    glColor3ub(128, 76, 38);
    glBegin(GL_QUADS);
    glVertex2d(350, 250);
    glVertex2d(353, 250);
    glVertex2d(353, 0);
    glVertex2d(350, 0);
    glEnd();

    glColor3ub(237, 204, 125);
    for(int i=0; i<= 4; i++){
        int x = i*50;
        glBegin(GL_QUADS);
        glVertex2d(353 + x, 250);
        glVertex2d(360 + x, 250);
        glVertex2d(360 + x, 0);
        glVertex2d(353 + x, 0);
        glEnd();
    }

    glColor3ub(237, 204, 125);
    for(int i = 0; i<=4; i++){
        int y = i*100;
        glBegin(GL_QUADS);
        glVertex2d(354, 250 - y);
        glVertex2d(500, 250 - y);
        glVertex2d(500, 238 - y);
        glVertex2d(354, 238 - y);
        glEnd();
    }

    glColor3ub(48, 45, 77);
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i <= 4; i++) {
            int y = i * 100;
            int x = j * 50;
            glBegin(GL_QUADS);
            glVertex2d(370 + x, 190 - y);
            glVertex2d(390 + x, 190 - y);
            glVertex2d(390 + x, 230 - y);
            glVertex2d(370 + x, 230 - y);
            glEnd();
        }
    }

    // ---------- School Flag (Static) ----------
    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex2d(565, 0);
    glVertex2d(570, 0);
    glVertex2d(570, 285);
    glVertex2d(565, 285);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2d(570, 220);
    glVertex2d(630, 220);
    glVertex2d(630, 285);
    glVertex2d(570, 285);
    glEnd();

    glColor3ub(255, 27, 27);
    {
        GLdouble r = 13.0;
        drawCircle(595.0, 255.0, r);
    }
    // ---------- End School Flag (Static) ----------

    glColor3ub(50, 50, 59);
    glBegin(GL_QUADS);
    glVertex2d(418, 0 );
    glVertex2d(448, 0 );
    glVertex2d(448, 60);
    glVertex2d(418, 60);
    glEnd();

    glColor3ub(63, 72, 204);
    glRasterPos2d(420, 240);
    for (int i = 0; i < 6; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, "SCHOOL"[i]);
    }

    glutSwapBuffers();

    //////////////////////////////////////////////////////////////////////////////////////////////////////////

    // (Additional static drawing of the tube wall part and a static copy of the school flag follow,
    // which remain unchanged.)
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2d(120, 120);
    glVertex2d(80, 80);
    glVertex2d(140, 80);
    glVertex2d(160, 120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143, 188, 143);
    glVertex2d(125, 115);
    glVertex2d(105, 95);
    glVertex2d(135, 95);
    glVertex2d(150, 115);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2d(80, 70);
    glVertex2d(80, 80);
    glVertex2d(140, 80);
    glVertex2d(140, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2d(160, 120);
    glVertex2d(160, 100);
    glVertex2d(140, 70);
    glVertex2d(140, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(184, 134, 11);
    glVertex2d(125, 140);
    glVertex2d(125, 80);
    glVertex2d(130, 78);
    glVertex2d(135, 80);
    glVertex2d(135, 140);
    glVertex2d(130, 142);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 0);
    glVertex2d(125, 140);
    glVertex2d(130, 135);
    glVertex2d(135, 140);
    glVertex2d(130, 142);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex2d(128, 140);
    glVertex2d(128, 155);
    glVertex2d(132, 155);
    glVertex2d(132, 140);
    glEnd();

    glEnd();

    // Static school flag copy
    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex2d(565, 0);
    glVertex2d(570, 0);
    glVertex2d(570, 285);
    glVertex2d(565, 285);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2d(570, 220);
    glVertex2d(630, 220);
    glVertex2d(630, 285);
    glVertex2d(570, 285);
    glEnd();

    glColor3ub(255, 27, 27);
    {
        GLdouble r = 13.0;
        drawCircle(595.0, 255.0, r);
    }

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Village Scenery");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard); // Register keyboard callback
    glutMouseFunc(mouse);       // Register mouse callback for fast boat movement
    glutTimerFunc(0, timer, 0);   // Register timer callback for animation
    glutMainLoop();
    return 0;
}
