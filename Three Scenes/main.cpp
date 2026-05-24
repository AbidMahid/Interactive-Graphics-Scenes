#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
# define PI 3.14159265358979323846
using namespace std;

int currentScene =1;

float plane1=0;
float plane2=0;
float plane3=0;
float plane4=0;

bool isDay = true;
bool isNight = false;

//////////nayem//////
GLfloat xposition = 50.0f;  // Initial X-axis position (starts from the right)
GLfloat yposition = 0.0f;   // Initial Y-axis position (centered vertically)
GLfloat xspeed = 8.50f;       // Speed for X-axis
GLfloat xspeedy = 0.60f;      // Speed for Y-axis (negative for decreasing)
GLfloat xpositionScaleX = 1.0f;       // Initial scaling factor for X-axis
GLfloat xpositionScaleY = 1.0f;       // Initial scaling factor for Y-axis
GLfloat scaleSpeedy = 0.004f;   // Speed for scaling
//////////////////////////////abid-slide-1
void building1()
{
//for Building 1//1
glBegin(GL_POLYGON);
glColor3f(0.50,0.902,1);
glVertex2f(20, 0);//E
glVertex2f(20, 265);//F
glVertex2f(240,265);//G
glVertex2f(240,0);//H
glEnd();

//for Building 1 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(70,245);//
glVertex2f(120,245);//L
glVertex2f(120,200);//H
glVertex2f(70,200);//G
glEnd();

//for Building 1 window
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(70,65);//
glVertex2f(120,65);//L
glVertex2f(120,30);//H
glVertex2f(70,30);//G
glEnd();

}

void building2()
{

//for Building 2a //2
glBegin(GL_POLYGON);
glColor3f(0,0.769,0.961);
glVertex2f(175, 265);//I
glVertex2f(175,500);//J
glVertex2f(330,500);//K
glVertex2f(325,265);//
glEnd();

//for Building 2b
glBegin(GL_POLYGON);
glColor3f(0,0.769,0.961);
glVertex2f(325,265);//
glVertex2f(325, 0);//I
glVertex2f(240,0);//J
glVertex2f(240,265);//K
glEnd();

//for Building 2 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(205,470);//
glVertex2f(295,470);//L
glVertex2f(295,420);//H
glVertex2f(205,420);//G
glEnd();

//for Building 2 window 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(205,380);//
glVertex2f(295,380);//L
glVertex2f(295,325);//H
glVertex2f(205,325);//G
glEnd();

}

void building3()
{
//for Building 3 //3
glBegin(GL_POLYGON);
glColor3f(0.125,0.529,0.631);
glVertex2f(325,0);//
glVertex2f(475,0);//L
glVertex2f(475,255);//H
glVertex2f(325,255);//G
glEnd();

//for Building 3 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(365,210);//
glVertex2f(430,210);//L
glVertex2f(430,130);//H
glVertex2f(365,130);//G
glEnd();

}

void building4()
{
//for Building 4a //4
glBegin(GL_POLYGON);
glColor3f(0.302,0.502,0.373);
glVertex2f(415, 255);//
glVertex2f(415,570);//L
glVertex2f(600,570);//H
glVertex2f(600,255);//G
glEnd();

//for Building 4b /
glBegin(GL_POLYGON);
glColor3f(0.302,0.502,0.373);
glVertex2f(600, 255);//
glVertex2f(600,0);//L
glVertex2f(475,0);//H
glVertex2f(475,255);//G
glEnd();

//for Building 4 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(450,520);//
glVertex2f(500,520);//L
glVertex2f(500,465);//H
glVertex2f(450,465);//G
glEnd();

//for Building 4 window 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(500,425);//
glVertex2f(560,425);//L
glVertex2f(560,365);//H
glVertex2f(500,365);//G
glEnd();

//for Building 4 window 3
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(450,335);//
glVertex2f(520,335);//L
glVertex2f(520,275);//H
glVertex2f(450,275);//G
glEnd();

//for Building 4 window 4
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(510,210);//
glVertex2f(580,210);//L
glVertex2f(580,130);//H
glVertex2f(510,130);//G
glEnd();

}

void building5()
{
//for Building 5 //5
glBegin(GL_POLYGON);
glColor3f(0.455,0.529,0.243);
glVertex2f(600,0);//
glVertex2f(600,375);//L
glVertex2f(800,470);//H
glVertex2f(800,0);//G
glEnd();

//for Building 5 window
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(660,350);//
glVertex2f(745,350);//L
glVertex2f(745,300);//H
glVertex2f(660,300);//G
glEnd();

//for Building 5 window 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(655,215);//
glVertex2f(750,215);//L
glVertex2f(750,125);//H
glVertex2f(655,125);//G
glEnd();

}

void building6()
{
//for Building 6 //6
glBegin(GL_POLYGON);
glColor3f(0.647,0.89,0.871);
glVertex2f(800,0);//
glVertex2f(800,250);//L
glVertex2f(950,250);//H
glVertex2f(950,0);//G
glEnd();

//for Building 6 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(835,190);//
glVertex2f(920,190);//L
glVertex2f(920,125);//H
glVertex2f(835,125);//G
glEnd();

}

void building7()
{
//for Building 7a //7
glBegin(GL_POLYGON);
glColor3f(0.506,0.275,0.51);
glVertex2f(950,0);//
glVertex2f(950,250);//L
glVertex2f(1050,270);//H
glVertex2f(1050,0);//G
glEnd();

//for Building 7b
glBegin(GL_POLYGON);
glColor3f(0.529,0.529,0.529);
glVertex2f(1050,0);//
glVertex2f(1050,270);//L
glVertex2f(1170,265);//H
glVertex2f(1170,0);//G
glEnd();

//for Building 7 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(970,215);//
glVertex2f(1030,215);//L
glVertex2f(1030,170);//H
glVertex2f(970,170);//G
glEnd();

//for Building 7 window 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(975,110);//
glVertex2f(1035,110);//L
glVertex2f(1035,50);//H
glVertex2f(975,50);//G
glEnd();

//for Building 8 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1080,235);//
glVertex2f(1140,235);//L
glVertex2f(1140,170);//H
glVertex2f(1080,170);//G
glEnd();

//for Building 8 window 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1090,85);//
glVertex2f(1150,85);//L
glVertex2f(1150,35);//H
glVertex2f(1090,35);//G
glEnd();

}

void building8()
{
//for Building 8 //8
glBegin(GL_POLYGON);
glColor3f(0.471,0.576,0.722);
glVertex2f(1170,0);//
glVertex2f(1170,545);//L
glVertex2f(1260,545);//H
glVertex2f(1260,0);//G
glEnd();

//for Building 9 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1190,505);//
glVertex2f(1230,505);//L
glVertex2f(1230,430);//H
glVertex2f(1190,430);//G
glEnd();

//for Building 9 window 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1190,375);//
glVertex2f(1230,375);//L
glVertex2f(1230,280);//H
glVertex2f(1190,280);//G
glEnd();

//for Building 9 window 3
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1190,240);//
glVertex2f(1230,240);//L
glVertex2f(1230,140);//H
glVertex2f(1190,140);//G
glEnd();

}

void building9()
{
//for Building 9 //9
glBegin(GL_POLYGON);
glColor3f(0.631,0.412,0.412);
glVertex2f(1260,0);//
glVertex2f(1260,445);//L
glVertex2f(1455,440);//H
glVertex2f(1455,0);//G
glEnd();

//for Building 10 window 1
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1290,400);//
glVertex2f(1350,400);//L
glVertex2f(1350,315);//H
glVertex2f(1290,315);//G
glEnd();

//for Building 10 window 2
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1350,280);//
glVertex2f(1420,280);//L
glVertex2f(1420,190);//H
glVertex2f(1350,190);//G
glEnd();

//for Building 10 window 3
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1290,155);//
glVertex2f(1350,155);//L
glVertex2f(1350,45);//H
glVertex2f(1290,45);//G
glEnd();
}

void metrospan()
{
//for metro span //10
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(0,170);//
glVertex2f(0,135);//L
glVertex2f(1500,135);//H
glVertex2f(1500,170);//G
glEnd();

//for metro Pier 1
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(170,0);
glVertex2f(135,0);//
glVertex2f(135,135);//L
glVertex2f(170,135);//H
glEnd();

//for metro Pier 2
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(470,0);
glVertex2f(420,0);//
glVertex2f(420,135);//L
glVertex2f(470,135);//H
glEnd();

//for metro Pier 3
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(770,0);
glVertex2f(720,0);//
glVertex2f(720,135);//L
glVertex2f(770,135);//H
glEnd();

//for metro Pier 4
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(1070,0);
glVertex2f(1020,0);//
glVertex2f(1020,135);//L
glVertex2f(1070,135);//H
glEnd();

//for metro Pier 5
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(1370,0);
glVertex2f(1320,0);//
glVertex2f(1320,135);//L
glVertex2f(1370,135);//H
glEnd();

}

void metro() //11
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane1, 0, 0);


//for metrorail body
glBegin(GL_POLYGON);
glColor3f(0.271,1,0.227);
glVertex2f(0,170);//
glVertex2f(0,270);//L
glVertex2f(600,270);//H
glVertex2f(600,170);//G
glEnd();

//for metrorail nose
glBegin(GL_POLYGON);
glColor3f(0.271,1,0.227);
glVertex2f(600,270);//H
glVertex2f(775,200);//H
glVertex2f(775,170);//G
glVertex2f(600,170);//G
glEnd();

//for metrorail red line
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2f(0,190);//H
glVertex2f(600,190);//H
glVertex2f(600,180);//G
glVertex2f(0,180);//G
glEnd();

//for metrorail window 1
glBegin(GL_POLYGON);
glColor3f(0.69,0.478,0.588);
glVertex2f(100,220);//H
glVertex2f(100,250);//H
glVertex2f(150,250);//G
glVertex2f(150,220);//G
glEnd();

//for metrorail window 2
glBegin(GL_POLYGON);
glColor3f(0.69,0.478,0.588);
glVertex2f(250,220);//H
glVertex2f(250,250);//H
glVertex2f(300,250);//G
glVertex2f(300,220);//G
glEnd();

//for metrorail window 3
glBegin(GL_POLYGON);
glColor3f(0.69,0.478,0.588);
glVertex2f(400,220);//H
glVertex2f(400,250);//H
glVertex2f(450,250);//G
glVertex2f(450,220);//G
glEnd();

//for metrorail nose window
glBegin(GL_POLYGON);
glColor3f(0.69,0.478,0.588);
glVertex2f(600,270);//H
glVertex2f(700,230);//H
//glVertex2f(750,170);//G
glVertex2f(600,230);//G
glEnd();

//for metrorail gate 1
glBegin(GL_POLYGON);
glColor3f(0.706,0.663,0.741);
glVertex2f(25,250);//H
glVertex2f(75,250);//H
glVertex2f(75,170);//G
glVertex2f(25,170);//G
glEnd();

//for metrorail gate 2
glBegin(GL_POLYGON);
glColor3f(0.706,0.663,0.741);
glVertex2f(500,250);//H
glVertex2f(550,250);//H
glVertex2f(550,170);//G
glVertex2f(500,170);//G
glEnd();

glPopMatrix();
}

void change2(int value)
{
   plane1+= 0.2;


    if(plane1 > 1500)
    {
        plane1 = -1500;
    }

        glutPostRedisplay();
        glutTimerFunc(1, change2, 0);
}


void road()
{
//for road //12
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(0,0);//
glVertex2f(0,15);//L
glVertex2f(1500,15);//H
glVertex2f(1500,0);//G
glEnd();
}

void car1() //13
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane1, 0, 0);



//for car 1
glBegin(GL_POLYGON);
glBegin(GL_POLYGON);
if (isDay) {
       glColor3f(1, 0, 0);
    } else if (isNight) {
       glColor3f(1.0f, 0.984f, 0.0f);
    }glVertex2f(1220, 80);//
glVertex2f(1250, 80);//L
glVertex2f(1250,35);//H
glVertex2f(1220,35);//G
glEnd();

//for car 2
glBegin(GL_POLYGON);
glBegin(GL_POLYGON);
if (isDay) {
       glColor3f(1, 0, 0);
    } else if (isNight) {
       glColor3f(1.0f, 0.984f, 0.0f);
    }glVertex2f(1250, 110);//
glVertex2f(1350, 110);//L
glVertex2f(1350,35);//H
glVertex2f(1250,35);//G
glEnd();

//for car 3
glBegin(GL_POLYGON);
glBegin(GL_POLYGON);
if (isDay) {
       glColor3f(1, 0, 0);
    } else if (isNight) {
       glColor3f(1.0f, 0.984f, 0.0f);
    }glVertex2f(1350, 80);//
glVertex2f(1380, 80);//L
glVertex2f(1380, 35);//H
glVertex2f(1350, 35);//G
glEnd();

//for car 1 window
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(1275, 100);//
glVertex2f(1325, 100);//L
glVertex2f(1325,80);//H
glVertex2f(1275,80);//G
glEnd();

int i;

GLfloat x=1350.0f; GLfloat y=30.0f; GLfloat radius =15.0f;
int triangleAmount = 100; //# of lines used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount)) );
}
glEnd();

int j;

	GLfloat x1=1250.0f; GLfloat y1=30.0f; GLfloat radius1 =15.0f;
	int triangleAmount1 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f( x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                        y1 + (radius1 * sin(j * twicePi1 / triangleAmount1)) );
		}

    glEnd();
    glPopMatrix();
}

void change1(int value)
{
   plane1+= 0.2;


    if(plane1 > 1500)
    {
        plane1 = -1500;
    }

        glutPostRedisplay();
        glutTimerFunc(1, change1, 0);
}


void car2() //14
{
     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane1, 0, 0);

//for 2nd car
glBegin(GL_POLYGON);
if (isDay) {
       glColor3f(1, 0, 0);
    } else if (isNight) {
       glColor3f(1.0f, 0.984f, 0.0f);
    }
glVertex2f(320, 35);
glVertex2f(320, 80);//L
glVertex2f(480, 80);//H
glVertex2f(480, 35);//G
glEnd();

//for 2nd car
glBegin(GL_POLYGON);
if (isDay) {
       glColor3f(1, 0, 0);
    } else if (isNight) {
       glColor3f(1.0f, 0.984f, 0.0f);
    }glVertex2f(350, 80);//H
glVertex2f(350, 110);//G
glVertex2f(450, 110);//
glVertex2f(450, 80);//L
glEnd();

//for car window
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(375, 100);//
glVertex2f(425, 100);//L
glVertex2f(425,80);//H
glVertex2f(375,80);//G
glEnd();

// for 2nd car wheel 1
int k;

GLfloat x2=350.0f; GLfloat y2=30.0f; GLfloat radius2 =15.0f;
int triangleAmount2 = 100; //# of lines used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi2 = 2.0f * PI;

glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x2, y2); // center of circle
	for(k = 0; k <= triangleAmount2;k++) {
		glVertex2f( x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
                    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2)) );
}
glEnd();

// for 2nd car wheel 2
int l;

	GLfloat x3=450.0f; GLfloat y3=30.0f; GLfloat radius3 =15.0f;
	int triangleAmount3 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(l = 0; l <= triangleAmount3;l++) {
			glVertex2f( x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
                        y3 + (radius3 * sin(l * twicePi3 / triangleAmount3)) );
		}

    glEnd();
    glPopMatrix();
}

void change3(int value)
{
   plane1+= 0.02;


    if(plane1 > 1500)
    {
        plane1 = -1500;
    }

        glutPostRedisplay();
        glutTimerFunc(1, change3, 0);
}

void cloud() //15
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane1, 0, 0);


    int m;

GLfloat x4=350.0f; GLfloat y4=650.0f; GLfloat radius4 =100.0f;
int triangleAmount4 = 100; //# of lines used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi4 = 2.0f * PI;

glColor3f(0.0f, 0.996f, 0.671f);
glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x4, y4); // center of circle
	for(m = 0; m <= triangleAmount4;m++) {
		glVertex2f( x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
                    y4 + (radius4 * sin(m * twicePi4 / triangleAmount4)) );
}
glEnd();

// for 2nd car wheel 2
int n;

	GLfloat x5=450.0f; GLfloat y5=650.0f; GLfloat radius5 =75.0f;
	int triangleAmount5 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glColor3f(0.0f, 0.996f, 0.671f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(n = 0; n <= triangleAmount5;n++) {
			glVertex2f( x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
                        y5 + (radius5 * sin(n * twicePi5 / triangleAmount5)) );
		}

    glEnd();

    int o;

	GLfloat x6=250.0f; GLfloat y6=650.0f; GLfloat radius6 =70.0f;
	int triangleAmount6 = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glColor3f(0.0f, 0.996f, 0.671f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(o = 0; o <= triangleAmount6;o++) {
			glVertex2f( x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
                        y6 + (radius6 * sin(o * twicePi6 / triangleAmount6)) );
		}

    glEnd();
    glPopMatrix();
}
void change4(int value)
{
   plane1+= 0.02;


    if(plane1 > 1500)
    {
        plane1 = -1500;
    }

        glutPostRedisplay();
        glutTimerFunc(1, change3, 0);
}

void display1()
{
glClear(GL_COLOR_BUFFER_BIT);

if (isDay) {
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color // Day background
    } else if (isNight) {
        glClearColor(0.05f, 0.05f, 0.2f, 1.0f); // Night background
    }

building1();
building2();
building3();
building4();
building5();
building6();
building7();
building8();
building9();
metrospan();
metro();
road();
car1();
car2();
cloud();

glutSwapBuffers();

}
////////////////////////////////////////efaz-slide-2
void river(){
    glBegin(GL_QUADS);
    glColor3ub(0,102,204); // Road color
    glVertex2f(0, 1500);  // Top-left corner
    glVertex2f(1500,147); // Top-right corner
    glVertex2f(1500,0); // Bottom-right corner
    glVertex2f(0, 0);  // Bottom-left corner
    glEnd();
}

void sky(){

    if (isDay) {
        glColor3ub(102,178,255); // Set background color // Day background
    } else if (isNight) {
        glColor3ub(64,64,64); // Night background
    }
 //glColor3ub(102,178,255); // Sky blue color
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 800.0f);  // Top-left corner
    glVertex2f(1500.0f, 800.0f); // Top-right corner
    glVertex2f(1500.0f, 400.0f); // Bottom-right corner
    glVertex2f(0,400);  // Bottom-left corner
    glEnd();
}

void ground(){
    glBegin(GL_QUADS);
    glColor3ub(50,205,50); // Sky blue color
    glVertex2f(0,400);  // Top-left corner
    glVertex2f(1500,400); // Top-right corner
    glVertex2f(1500,150); // Bottom-right corner
    glVertex2f(0,150);  // Bottom-left corner
    glEnd();
}

void buildingE(){
    glBegin(GL_QUADS);
    glColor3ub(204,0,0); // Road color
    glVertex2f(150.37f,480.90f);  // Top-left corner
    glVertex2f(150.37f,176.83f); // Top-right corner
    glVertex2f(450.69f,173.08f); // Bottom-right corner
    glVertex2f(448.19f,479.65f);
    glVertex2f(492.0f,479.6f);
    glVertex2f(492.0f,176.8f);  // Bottom-left corner
    glEnd();

     //building 1 window
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // Road color
    glVertex2f(180.0f,437.0f);  // Top-left corner
    glVertex2f(240.0f,437.0f); // Top-right corner
    glVertex2f(240.0f,390.0f); // Bottom-right corner
    glVertex2f(178.0f,388.0f);
     //window2
    glVertex2f(360.0f,432.0f);  // Top-left corner
    glVertex2f(422.0f,432.0f); // Top-right corner
    glVertex2f(422.0f,386.f); // Bottom-right corner
    glVertex2f(358.0f,383.0f);
     //window3
     glVertex2f(180,337);  // Top-left corner
    glVertex2f(239,337); // Top-right corner
    glVertex2f(237,287); // Bottom-right corner
    glVertex2f(180,287);
    //window4
    glVertex2f(360,334.5);  // Top-left corner
    glVertex2f(416,340); // Top-right corner
    glVertex2f(418,285); // Bottom-right corner
    glVertex2f(360,287);
    //door
    glVertex2f(254.5,268);  // Top-left corner
    glVertex2f(344,268); // Top-right corner
    glVertex2f(345,174); // Bottom-right corner
    glVertex2f(254.5,175.5);
    glEnd();

}

void tree1(){

    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,51);
    glVertex2f(1043,536);
    glVertex2f(1135,362);
    glVertex2f(973,362);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,51);
    glVertex2f(1049,413);
    glVertex2f(1130,310);
    glVertex2f(967,310);
    glEnd();

    //teee trunk1
    //polygon1//
    glBegin(GL_POLYGON);

    glColor3ub(102,51,0);
    glVertex2f(1031,310);
    glVertex2f(1052,310);
    glVertex2f(1052,173);
    glVertex2f(1031,173);

    glEnd();
}

void tree2(){

glBegin(GL_TRIANGLES);
    glColor3ub(0,102,51);
    glVertex2f(1275,563);
    glVertex2f(1342,370);
    glVertex2f(1204,370);
    glEnd();

    //teee trunk2
    //polygon1//
    glBegin(GL_POLYGON);

    glColor3ub(102,51,0);
    glVertex2f(1260,370);
    glVertex2f(1262,298);
    glVertex2f(1286,297);
    glVertex2f(1288,370);
    glEnd();
}
void tree3(){

    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,51);
    glVertex2f(54,538);
    glVertex2f(139,360);
    glVertex2f(1.38,357);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,51);
    glVertex2f(54,414);
    glVertex2f(145,300);
    glVertex2f(0,300);
    glEnd();

    //teee trunk3
    //polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(57,300);
    glVertex2f(78,300);
    glVertex2f(78,176);
    glVertex2f(57,176);
    glEnd();

}

void tree4(){

    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,51);
    glVertex2f(550,543);
    glVertex2f(652,372);
    glVertex2f(458,368);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,51);
    glVertex2f(547,431);
    glVertex2f(653,317);
    glVertex2f(454,318);
    glEnd();

    //teee trunk4
    //polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(545,318);
    glVertex2f(565,318);
    glVertex2f(565,176);
    glVertex2f(545,176);
    glEnd();

}

void buildingE2(){

    glBegin(GL_QUADS);
    glColor3ub(102,0,51); // Road color
    glVertex2f(660,492);  // Top-left corner
    glVertex2f(950,492); // Top-right corner
    glVertex2f(950,173); // Bottom-right corner
    glVertex2f(660,173);
    glEnd();

    //building-2 window 1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // Road color
    glVertex2f(680,465);  // Top-left corner
    glVertex2f(775,465); // Top-right corner
    glVertex2f(775,430); // Bottom-right corner
    glVertex2f(680,430);

    //building-2 window 2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // Road color
    glVertex2f(820,465);  // Top-left corner
    glVertex2f(913,465); // Top-right corner
    glVertex2f(913,430); // Bottom-right corner
    glVertex2f(820,430);

    //building-2 window 3
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // Road color
    glVertex2f(680,370);  // Top-left corner
    glVertex2f(775,370); // Top-right corner
    glVertex2f(775,330); // Bottom-right corner
    glVertex2f(680,330);

    //building-2 window 4
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // Road color
    glVertex2f(815,370);  // Top-left corner
    glVertex2f(913,370); // Top-right corner
    glVertex2f(913,330); // Bottom-right corner
    glVertex2f(815,330);

    //building-2 window 5
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // Road color
    glVertex2f(680,275);  // Top-left corner
    glVertex2f(775,275); // Top-right corner
    glVertex2f(775,230); // Bottom-right corner
    glVertex2f(680,230);

    //building-2 window 6
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // Road color
    glVertex2f(815,275);  // Top-left corner
    glVertex2f(913,275); // Top-right corner
    glVertex2f(913,230); // Bottom-right corner
    glVertex2f(815,230);
    glEnd();
}

void buildingE3(){
    glColor3ub(255,178,102); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1164,492);  // Top-left corner
    glVertex2f(1445,492); // Top-right corner
    glVertex2f(1445,179); // Bottom-right corner
    glVertex2f(1164,179);
    glEnd();

    //building-3 window 1
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1185,465);  // Top-left corner
    glVertex2f(1245,465); // Top-right corner
    glVertex2f(1245,417); // Bottom-right corner
    glVertex2f(1185,417);

    //building-3 window 2
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1280,465);  // Top-left corner
    glVertex2f(1337,465); // Top-right corner
    glVertex2f(1337,417); // Bottom-right corner
    glVertex2f(1280,417);

    //building-3 window 3
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1365,465);  // Top-left corner
    glVertex2f(1422,465); // Top-right corner
    glVertex2f(1422,417); // Bottom-right corner
    glVertex2f(1365,417);

    //building-3 window 4
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1185,375);  // Top-left corner
    glVertex2f(1245,375); // Top-right corner
    glVertex2f(1245,326); // Bottom-right corner
    glVertex2f(1185,326);

    //building-3 window 5
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1280,375);  // Top-left corner
    glVertex2f(1337,375); // Top-right corner
    glVertex2f(1337,326); // Bottom-right corner
    glVertex2f(1280,326);

    //building-3 window 6
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1360,375);  // Top-left corner
    glVertex2f(1422,375); // Top-right corner
    glVertex2f(1422,326); // Bottom-right corner
    glVertex2f(1360,326);

    //building-3 window 7
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1185,275);  // Top-left corner
    glVertex2f(1244,275); // Top-right corner
    glVertex2f(1244,225); // Bottom-right corner
    glVertex2f(1185,225);

    //building-3 window 8
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1280,275);  // Top-left corner
    glVertex2f(1337,275); // Top-right corner
    glVertex2f(1337,225); // Bottom-right corner
    glVertex2f(1280,225);

    //building-3 window 9
    glColor3ub(255,51,51); // Road color
    glBegin(GL_QUADS);
    glVertex2f(1360,275);  // Top-left corner
    glVertex2f(1422,275); // Top-right corner
    glVertex2f(1422,225); // Bottom-right corner
    glVertex2f(1360,225);
    glEnd();

}
void sun(){

    int i;

GLfloat x=1200.0f; GLfloat y=650.0f; GLfloat radius =40.0f;
int triangleAmount = 100; //# of lines used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

if (isDay) {
        glColor3ub(255, 255, 0); // Set background color // Day background
    } else if (isNight) {
        glColor3ub(255, 255, 255); // Night background
    }
glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount)) );
}
glEnd();

}

void aeroplane(){


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane2, 0, 0);

    glBegin(GL_QUADS);
    glColor3ub(255,255,255); // Road color
    glVertex2f(620,697);  // Top-left corner
    glVertex2f(890,697); // Top-right corner
    glVertex2f(890,635); // Bottom-right corner
    glVertex2f(620,635);

    glColor3ub(0,0,204); // Road color
    glBegin(GL_QUADS);
    glVertex2f(660,754);  // Top-left corner
    glVertex2f(674,754); // Top-right corner
    glVertex2f(701,697); // Bottom-right corner
    glVertex2f(661,697);

    glColor3ub(0,0,204); // Road color
    glBegin(GL_QUADS);
    glVertex2f(793,754);  // Top-left corner
    glVertex2f(825,754); // Top-right corner
    glVertex2f(865,697); // Bottom-right corner
    glVertex2f(832,697);

    glColor3ub(0,0,204); // Road color
    glBegin(GL_QUADS);
    glVertex2f(796,635);  // Top-left corner
    glVertex2f(838,635); // Top-right corner
    glVertex2f(829,565); // Bottom-right corner
    glVertex2f(816,565);
    glEnd();

    // Aeroplane window
    glColor3ub(204,0,0); //  color
    glBegin(GL_QUADS);
    glVertex2f(628,683);  // Top-left corner
    glVertex2f(666,683); // Top-right corner
    glVertex2f(666,649); // Bottom-right corner
    glVertex2f(628,649);

    glColor3ub(204,0,102); //  color
    glBegin(GL_QUADS);
    glVertex2f(693,683);  // Top-left corner
    glVertex2f(730,683); // Top-right corner
    glVertex2f(730,649); // Bottom-right corner
    glVertex2f(693,649);

    glColor3ub(204,0,0); //  color
    glBegin(GL_QUADS);
    glVertex2f(764,683);  // Top-left corner
    glVertex2f(801,683); // Top-right corner
    glVertex2f(801,649); // Bottom-right corner
    glVertex2f(764,649);

    glColor3ub(204,0,102); //  color
    glBegin(GL_QUADS);
    glVertex2f(839,683);  // Top-left corner
    glVertex2f(872,683); // Top-right corner
    glVertex2f(872,649); // Bottom-right corner
    glVertex2f(839,649);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(890,697);
    glVertex2f(994,668);
    glVertex2f(890,635);
    glEnd();
    glPopMatrix();
}

void change6(int value)
{
   plane2+= 0.2;
    if(plane2 > 1500)
    {
        plane2 = -1500;
    }
        glutPostRedisplay();
        glutTimerFunc(1, change6, 0);
}
void boat(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane1, 0, 0);

    glColor3ub(153,0,0); // Road color
    glBegin(GL_QUADS);
    glVertex2f(860,104);  // Top-left corner
    glVertex2f(1240,104); // Top-right corner
    glVertex2f(1192,51); // Bottom-right corner
    glVertex2f(921,49);
    glEnd();

    glColor3ub(255,255,102); // Road color
    glBegin(GL_QUADS);
    glVertex2f(970,163);  // Top-left corner
    glVertex2f(1135,162); // Top-right corner
    glVertex2f(1176,105); // Bottom-right corner
    glVertex2f(923,105);
    glEnd();
    glPopMatrix();

}
void change5(int value)
{
   plane1+= 0.2;
    if(plane1 > 1500)
    {
        plane1 = -1500;
    }
        glutPostRedisplay();
        glutTimerFunc(1, change5, 0);
}
void cloud1(){

glPushMatrix();
    glColor3ub(255,255,255);
    glTranslatef (52,682,0);
    glScalef(30,30,1);
    glutSolidSphere(1.0, 50, 50);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef (96,682,0);
    glScalef(40,40,1);
    glutSolidSphere(1.0, 50, 50);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef (139,685,0);
    glScalef(40,40,1);
    glutSolidSphere(1.0, 50, 50);
    glPopMatrix();


     glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef (183,685,0);
    glScalef(30,30,1);
    glutSolidSphere(1.0, 50, 50);
    glPopMatrix();

}

void cloud2(){

   glPushMatrix();
    glColor3ub(255,255,255); // Yellow color for the sun
    glTranslatef (314,641,0); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (353,641,0); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (395,642,0); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (434,641,0); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

}

void cloud3(){
glPushMatrix();

    glColor3ub(255,255,255); // Yellow color for the sun
    glTranslatef (1276,694,0); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (1328,698,0); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (1380,697,0); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

}
void display2()
{
glClear(GL_COLOR_BUFFER_BIT);

if (isDay) {
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color // Day background
    } else if (isNight) {
        glClearColor(0.05f, 0.05f, 0.2f, 1.0f); // Night background
    }

river();
sky();
ground();
buildingE();
tree1();
tree2();
tree3();
tree4();
buildingE2();
buildingE3();

sun();
aeroplane();
boat();
cloud1();
cloud2();
cloud3();

glutSwapBuffers();

}
///////////////////////////////////nayeem-slide-3
void skyN(){

////akash part
 glBegin(GL_QUADS);

if (isDay) {
        glColor3ub(153,204,255); // Set background color // Day background
    } else if (isNight) {
        glColor3ub(128,128,128); // Night background
    }
   // glColor3ub(153,204,255);
    glVertex2f(0,800) ;
    glVertex2f (1500,800);
    glVertex2f(1500,500);
    glVertex2f (0,500);
    glEnd();
//end akash part//////////////
}

void riverN(){

 // nodi
    glColor3ub(102,178,255); // Road color (valid RGB values)
    glBegin(GL_QUADS);
    glVertex2f  (1.9257459107644, 177.632962636464);  // Top-left corner
    glVertex2f  (1500,300); // Top-right corner
    glVertex2f (1501.8812917308862, -2.75251360331632); // Bottom-right corner
    glVertex2f (0, 0);  // Bottom-left corner
    glEnd();

}
void gass(){

//sobuj color gass er jonno
    glColor3ub(178,255,102);
    glBegin(GL_QUADS);
    glVertex2f(0,500);  // Top-left corner
    glVertex2f(1500, 500); // Top-right corner
    glVertex2f(1500,400); // Bottom-right corner
    glVertex2f(0,256.58);  // Bottom-left corner
    glEnd();
}
void roadN(){
///////////////begin CAR rasta/////////////////////////////////////////
    //car er rasta
     glColor3ub(128,128,128);
    glBegin(GL_QUADS);
    glVertex2f(0,256.58);  // Top-left corner
    glVertex2f(1500,400); // Top-right corner
    glVertex2f(1500, 300); // Bottom-right corner
    glVertex2f (1.9257459107644, 177.632962636464);  // Bottom-left corner
    glEnd();
     //road er sada dag
     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (1046.7381755529236, 282.082575457874);
    glVertex2f (1182.4781463606732, 293.5535589064162);
    glVertex2f (1162.4039253257242, 284.9503213200096);
    glVertex2f (1032.3994462422459, 274.4352531588459);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (667.8127719207165, 253.2237791365007);
    glVertex2f (803.3254598157865, 265.3077130889273);
    glVertex2f (783.8352604846538, 256.1989269962446);
    glVertex2f (641.3169812754927, 243.728577565443);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(242.3772481240045, 213.4809287603648) ;
    glVertex2f (388.5928489483669, 227.0580916940556);
    glVertex2f(380.9186520505614, 216.7485122298648);
    glVertex2f (228.8000851903137, 203.0369572729104);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (227.3479565488037, 272.3663008614787) ;
    glVertex2f (377.3273833136158, 285.3141650426135);
    glVertex2f (374.740714114713, 274.0802575428336);
    glVertex2f (228.0849203366334, 259.3409817862428);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (664.3674827317244, 313.8763020856291) ;
    glVertex2f (797.7579283288721, 326.4046864787313);
    glVertex2f (790.3882904505766, 314.6132658734586);
    glVertex2f (666.578374095213, 302.0848814803563);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (1023.2688474047131, 345.5657449622994) ;
    glVertex2f (1150.026618911395, 361.7789482945494);
    glVertex2f (1143.393944820929, 349.9875276892767);
    glVertex2f (1024.7427749803721, 334.5112881448563);
    glEnd();

}

void smalltin(){

//1st tin-shed////////
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 204);
    glVertex2f(54.0471133582985, 448.997372666903);  // Top-left corner
    glVertex2f(256.7293085155577, 446.9500777663246); // Top-right corner
    glVertex2f(300, 400); // Bottom-right corner
    glVertex2f(17.1958051478877, 398.8386476027326);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(35.616, 398.914);  // Top-left corner
    glVertex2f(280.268, 399.918); // Top-right corner
    glVertex2f(279.2495524219198, 296.4739025738136); // Bottom-right corner
    glVertex2f(36.6451067033823, 293.4029602229461);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(55.4801791989013, 376.1787350073064);  // Top-left corner
    glVertex2f (104.2058384224687, 371.2001664449245); // Top-right corner
    glVertex2f(104.2058384224687, 327.1833260824894); // Bottom-right corner
    glVertex2f(53.0234659080093, 328.2069735327785);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(212.7124681531226, 375.2947562460813);  // Top-left corner
    glVertex2f (258.776603416136, 373.2474613455029); // Top-right corner
    glVertex2f(258.776603416136, 331.2779158836461); // Bottom-right corner
    glVertex2f(212.7124681531226, 332.3015633339353);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(132.867967030566, 371.2001664449245);  // Top-left corner
    glVertex2f (179.9557497438686, 373.2474613455029); // Top-right corner
    glVertex2f(180.94,295.229); // Bottom-right corner
    glVertex2f(132.90,294.62);  // Bottom-left corner
    glEnd();

////////end 1st tin shed/////////////
}

void largetin(){

////second tin shed start////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(295.98,500);  // Top-left corner
    glVertex2f (445.33, 500); // Top-right corner
    glVertex2f (495.7571603270096, 448.3754411111707); // Bottom-right corner
    glVertex2f (235.94,447.16);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(466.46,448.23);  // Top-left corner
    glVertex2f (468.3840355146487, 337.4422510821291); // Top-right corner
    glVertex2f (279.61,333.81); // Bottom-right corner
    glVertex2f (278.7803974602889, 449.0739578527939);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f (329.0694999227916, 434.8490854440737);  // Top-left corner
    glVertex2f (392.7059711507094, 434.8490854440737); // Top-right corner
    glVertex2f  (393.59,336.00); // Bottom-right corner
    glVertex2f (329.00, 334.76);  // Bottom-left corner
    glEnd();


//janala 1st
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f (280, 440);  // Top-left corner
    glVertex2f (311.5879134801569, 438.9344117040667); // Top-right corner
    glVertex2f  (313.0853864083268, 385.5245439326751); // Bottom-right corner
    glVertex2f (280.13,386.02);  // Bottom-left corner
    glEnd();

  //janala 2nd second tin er gor
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f (415.9876069658013, 437.1772490255829);  // Top-left corner
    glVertex2f (454.7903333242878, 437.1772490255829); // Top-right corner
    glVertex2f  (455.5663878514575, 385.9576502323808); // Bottom-right corner
    glVertex2f (415.2115524386316, 385.9576502323808);  // Bottom-left corner
    glEnd();

/////end second tin shed//////////////
}

void building(){

///////////////big building started/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f (903.356663366274, 613.001107268456);  // Top-left corner
    glVertex2f  (1099.3012341497056, 615.7377632849843); // Top-right corner
    glVertex2f (1104.2272149794564, 390.237307523047); // Bottom-right corner
    glVertex2f (906.6406505861081, 384.2166642866847);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f (988.75, 614.19);  // Top-left corner
    glVertex2f  (1024.85, 614.69); // Top-right corner
    glVertex2f (1029.26, 387.95); // Bottom-right corner
    glVertex2f (992.02,386.81);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f (903.356663366274, 613.001107268456);  // Top-left corner
    glVertex2f  (879.173345839245, 587.000618249771); // Top-right corner
    glVertex2f (882.4532802624482, 385.2846512227835); // Bottom-right corner
    glVertex2f (906.6406505861081, 384.2166642866847);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f (1099.3012341497056, 615.7377632849843);  // Top-left corner
    glVertex2f  (1121.0685095504707, 595.2004543077786); // Top-right corner
    glVertex2f (1125.9884111852753, 399.2243725213965); // Bottom-right corner
    glVertex2f (1104.2272149794564, 390.237307523047);  // Bottom-left corner
    glEnd();
//big building door
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f (923.0605866852783, 588.9185343230064);  // Top-left corner
    glVertex2f (964.1104269332039, 589.4658655263121); // Top-right corner
    glVertex2f  (965.7524205431209, 547.3213628717752); // Bottom-right corner
    glVertex2f   (923.607917888584, 547.868694075081);  // Bottom-left corner
    glEnd();

    //big building door
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f (1038.00013937947, 593.2971839494518);  // Top-left corner
    glVertex2f (1080.6919732373126, 593.8445151527575); // Top-right corner
    glVertex2f (1081.786635643924, 554.9839997180546) ; // Bottom-right corner
    glVertex2f  (1039.0948017860812, 554.436668514749) ;  // Bottom-left corner
    glEnd();
    //big building door
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f (926.8919051084181, 470.1476632056753);  // Top-left corner
    glVertex2f (975.604382202623, 470.1476632056753); // Top-right corner
    glVertex2f  (976.1517134059287, 413.2252180618854); // Bottom-right corner
    glVertex2f  (926.3445739051124, 412.6778868585797) ;  // Bottom-left corner
    glEnd();
    //big building door
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f (1040.1894641926926, 473.4316504255094);  // Top-left corner
    glVertex2f (1087.2599476769806, 474.5263128321207); // Top-right corner
    glVertex2f  (1087.2599476769806, 418.1511988916364); // Bottom-right corner
    glVertex2f (1041.284126599304, 417.0565364850251)  ;  // Bottom-left corner
    glEnd();
/////////////////////end big building////////////////
}
void sunN(){
//  only sun

    glPushMatrix();
    glColor3ub(255, 255, 0); // Yellow color for the sun
    glTranslatef (557.2741835627056, 714.3171255348115,0); // Position the sun
    glScalef(45,45,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();
}

void plane(){
///////////////plane  part start////////////////
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane4, 0, 0);

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (992.2510041723481, 760.9961344345112);
    glVertex2f (1149.021111302425, 719.8917770772349);
    glVertex2f (1139.46195842864, 688.3465725937439);
    glVertex2f (938.7197480791509, 745.7014898364549);
    glEnd();

    //plame er back
     glBegin(GL_QUADS);
    glColor3ub(255,128,0);
    glVertex2f (1149.021111302425, 719.8917770772349);
    glVertex2f (1189.1695533723228, 738.0541675374268);
    glVertex2f (1227.4061648674635, 733.2745911005342);
    glVertex2f (1139.46195842864, 688.3465725937439);
    glEnd();
    //plane er uporer pakha
     glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (1022.51, 753.05);
    glVertex2f (1081.3393561483383, 772.0324222089437);
    glVertex2f (1094.04,768.61);
    glVertex2f (1046.8651586555554, 747.8710188379337);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f (1094.04,768.61);
    glVertex2f (1111.9830872530342, 763.7821869115256);
    glVertex2f (1064.69,742.00);
    glVertex2f (1046.8651586555554, 747.8710188379337);
    glEnd();

    //plane er 2nd pakha
    glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (1006.7100832177068, 723.3672938790861);
    glVertex2f (1045.20, 715.27);
    glVertex2f (1058.2091590014659, 681.6551655820942);
    glVertex2f (1031.4435309548674, 680.6992502947157);
    glEnd();
    //plane er window
     glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (995.7651459216676, 751.4286970889367);
    glVertex2f (1013.0211023487389, 746.6833090714921);
    glVertex2f (1008.707113241971, 735.8983363045726);
    glVertex2f (992.3139546362532, 741.075123232694);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (1035.8852446146082, 738.9181286793101);
    glVertex2f (1049.6054153793407, 735.7019217742426);
    glVertex2f (1046.6883678991821, 725.6543137870299);
    glVertex2f (1032.4272468850736, 728.8954776538727);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (1069.376514967082, 730.8401759739784);
    glVertex2f (1082.3411704344533, 727.5990121071355);
    glVertex2f (1080.0723557276633, 717.2272877332385);
    glVertex2f (1067.107700260292, 721.4408007601342);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (1101.1399208621417, 723.7096154669241);
    glVertex2f (1116.0492746496188, 719.1719860533442);
    glVertex2f (1114.104576329513, 709.4484944528158);
    glVertex2f (1099.8434553154045, 714.6343566397643);
    glEnd();
//plane er pakha r blue er jonno

     glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f (1025.56,720.88);
    glVertex2f (1045.20,715.27);
    glVertex2f (1058.2091590014659, 681.6551655820942);
    glVertex2f (1044.82,681.17);
    glEnd();
    glPopMatrix();

}   //////////end plane body part///////////////

   void change7(int value)
{
   plane4-= 0.2;

    if(plane4 < -1500)
    {
        plane4 = 1500;
    }
        glutPostRedisplay();
        glutTimerFunc(1, change7, 0);
}
///////////////////////////////////sesh body part car er

void cloudN1(){
// 1st cloud part
      glPushMatrix();
    glColor3ub(255,255,255); // Yellow color for the sun
    glTranslatef (70.45526466397882, 692.8629866289962,0); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (101.6080051759395, 691.798316839853,0); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (128.7263385624911, 691.798316839853,0); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (154.7599386135807, 691.255950172122,0); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();
}

void cloudN2(){

//2nd cloud part
    glPushMatrix();
    glColor3ub(255,255,255); // Yellow color for the sun
    glTranslatef (234.294068356654, 731.8221195720571,0); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (263.3966700397826, 734.1503277067073,1); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (289.5890115545984, 735.8964838076951,1); // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (314.0351969684264, 736.4785358413576,1); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (339.0634344159169, 735.3144317740325,1) ; // Position the sun
    glScalef(40,40,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(255, 255, 255); // Yellow color for the sun
    glTranslatef (363.5096198297449, 735.3144317740325,1); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    /////////////////////end cloud part/////////////////////////////
}

void circletree(){

///////circle tree start///////////////////
     glPushMatrix();
    glColor3ub(0,102, 0); // Yellow color for the sun
    glTranslatef (526.6997706706318, 445.4057493657571,1); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(0, 102, 0); // Yellow color for the sun
    glTranslatef (550.0403094417766, 469.377113509095,1); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(0, 102, 0); // Yellow color for the sun
    glTranslatef (572.7500228407283, 494.6101283968192,1); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(0,102, 0); // Yellow color for the sun
    glTranslatef (590.4131332621351, 469.377113509095,1); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glPushMatrix();
    glColor3ub(0,102, 0); // Yellow color for the sun
    glTranslatef (608.7070690557351, 444.774923993564,1); // Position the sun
    glScalef(30,30,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

     glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f (560.7643407690593, 346.3661659314399) ;
    glVertex2f (561.3951661412524, 440.9899717604054);
    glVertex2f (578.4274511904662, 440.9899717604054);
    glVertex2f (577.16580044608, 345.7353405592468);
    glEnd();
    //circle tree er shikor

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f (560.7643407690593, 346.3661659314399) ;
    glVertex2f (512.8216124823834, 333.1188331153848) ;
    glVertex2f  (527.293647236515, 334.3572103857679) ;
    glVertex2f (586.09,346.08);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f  (577.16580044608, 345.7353405592468);
    glVertex2f (614.047069084438, 335.8603637346181);
    glVertex2f (602.4513146790225, 335.6456275419252);
    glVertex2f (586.09,346.08);
    glEnd();

    //////////////end circle treeee/////////////////////////
}

void flaghill(){

  /////////////////////////hill er sathe flag////////////////////////
    //italy flag
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f (638.70,507.10) ;
    glVertex2f (637.0283774026611, 609.7361031852306);
    glVertex2f (643.6416413179578, 605.908333430335);
    glVertex2f (643.07,504.52);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f (643.6416413179578, 605.908333430335) ;
    glVertex2f (695.291242514664, 606.2051702188218);
    glVertex2f (695.8849160916376, 578.005675312574);
    glVertex2f (643.48,577.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,153,0);
    glVertex2f (643.6416413179578, 605.908333430335) ;
    glVertex2f (660.26,606.00) ;
    glVertex2f (660.01,577.80);
    glVertex2f (643.48,577.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (660.26, 606.00) ;
    glVertex2f (679.56,606.11);
    glVertex2f (680.011,577.91);
    glVertex2f (660.01,577.80);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f (679.56,606.11) ;
    glVertex2f (695.291242514664, 606.2051702188218);
    glVertex2f (695.8849160916376, 578.005675312574);
    glVertex2f (680.01,577.91);
    glEnd();

    //Bangladesh flag
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f (338.13,509.88) ;
    glVertex2f (335.4380283967431, 597.5939066937409);
    glVertex2f (340, 600);
    glVertex2f (343.49,504.88);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,153,0);
    glVertex2f (340,600) ;
    glVertex2f (403.8228982520673, 601.8590841786755);
    glVertex2f (405.3205752619955, 572.7613594143562);
    glVertex2f (341.11,569.52);
    glEnd();

    glPushMatrix();
    glColor3ub(255, 0, 0); // Yellow color for the sun
    glTranslatef (371.08,586.02,1); // Position the sun
    glScalef(10,10,1); // Scale the sphere to make it visible
    glutSolidSphere(1.0, 50, 50); // Draw a sphere with radius = 1, scaled up
    glPopMatrix();

    //germany flag
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f (141.05,505.67) ;
    glVertex2f (143.5843093191539, 601.329668346307);
    glVertex2f  (150, 600);
    glVertex2f (146.61,500);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f (150, 600) ;
    glVertex2f (202.9179608228718, 599.7066250032466);
    glVertex2f  (202.9630510049774, 590.5964847179656);
    glVertex2f (149.72,591.82);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f (149.72,591.82) ;
    glVertex2f (202.9630510049774, 590.5964847179656);
    glVertex2f  (203.1361668699506, 583.4987342540625);
    glVertex2f (149.48,584.71);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,153,51);
    glVertex2f (149.48,584.71) ;
    glVertex2f (203.1361668699506, 583.4987342540625);
    glVertex2f  (203.1361668699506, 575.5354044652931);
    glVertex2f (149.22,577.09);
    glEnd();
}

void hill(){

//////////hill start//////////////
    glBegin(GL_QUADS);
    glColor3ub(153,76,0);
    glVertex2f(0, 500);
    glVertex2f(0,543.80);
    glVertex2f (81.1660873357655, 566.7728403703751);
    glVertex2f (146.61, 500);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(153,76,0);
    glVertex2f (146.61,500);
    glVertex2f (263.74,579.40);
    glVertex2f (348.715,500);
    glEnd();

    //3rd hill
    glBegin(GL_TRIANGLES);
    glColor3ub(153,76,0);
    glVertex2f(348.71,500) ;
    glVertex2f (650.71,500);
    glVertex2f ;
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(153,76,0);
    glVertex2f(650.71,500) ;
    glVertex2f (768.9861644591998, 604.666100044955);
    glVertex2f (850,500);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(153,76,0);
    glVertex2f(348.71,500) ;
    glVertex2f (473.8780512359567, 604.666100044955);
    glVertex2f (650.71,500);
    glEnd();

      //dan pasher boro boro hill
     glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f (1210.23,500.93) ;
    glVertex2f (1375.2155121258938, 647.4319208740066);
    glVertex2f (1500,572.49);
    glVertex2f (1500,500);
    glEnd();

/////////////hill end//////////
}

void boatN(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslated(plane3, 0, 0);
//boat er triangle
    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2f(838.225f, 192.473f);
    glVertex2f(836.6849759992958, 121.6096948075068);
    glVertex2f(645.6611419914874, 120.0691800171212);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 204);
    glVertex2f(682.6334969607406, 115.4476356459646);  // Top-left corner
    glVertex2f(996.8985141993932, 115.4476356459646); // Top-right corner
    glVertex2f(955.3046148589833, 63.0701327728558); // Bottom-right corner
    glVertex2f(714.9843075588371, 64.6106475632413);  // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,255,255);
    glVertex2f (895.2245380339467, 235.6077892960377);
    glVertex2f (1023.0872656359476, 235.6077892960377);
    glVertex2f ( 1023.087,198.63);
    glVertex2f (896.20, 199.89);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f (896.20,199.89);
    glVertex2f (1023.087, 198.63);
    glVertex2f (1023.0872656359476, 173.9871976806156);
    glVertex2f (896.82, 177.06);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (879.9840407636, 235.4946508405247);
    glVertex2f (895.2245380339467, 235.6077892960377);
    glVertex2f (898.3055676147179, 123.1502095978923);
    glVertex2f (882.1591943603171, 123.1117150101407);
    glEnd();
    glPopMatrix();
}

void change9(int value)
{
   plane3-= 0.2;


    if(plane3 < -1500)
    {
        plane3 = 1500;
    }

        glutPostRedisplay();
        glutTimerFunc(1, change9, 0);
}
///////end boat part//////////////////////

////////////
void car(){

/////////////////////// body of car//////////////
glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(xposition, yposition, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255,128,0);
    glVertex2f (1290.3095952242095, 367.4522587038958);
    glVertex2f (1372.6139014675, 375.2907640603997);
    glVertex2f (1400, 350);
    glVertex2f (1261.8950133068831, 340.0174899561323);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(1,1,1);
    glVertex2f (1226.6217392026158, 337.0780504474434);
    glVertex2f (1421.604559945649, 351.7752479908881);
    glVertex2f (1423.5641862847751, 323.3606660735616);
    glVertex2f (1228.5813655417417, 311.6029080388059);
    glEnd();

    //car er janala
    glBegin(GL_QUADS);
    glColor3ub(255,0,255);
    glVertex2f (1295.6671324167849, 361.4539225218883);
    glVertex2f (1307.7899129534467, 362.1886364938072);
    glVertex2f (1308.5246269253655, 352.2699978729022);
    glVertex2f (1295.2997754308255, 351.5352839009833);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,255);
    glVertex2f (1341.5867556617152, 364.3927784095639);
    glVertex2f (1352.974822226458, 365.4948493674422) ;
    glVertex2f (1353.7095361983768, 355.9435677324967);
    glVertex2f (1341.5867556617152, 355.2088537605778);
    glEnd();

//end car jnala

// for car wheel 1
int i;
GLfloat x=1266.77f; GLfloat y=313.90f; GLfloat radius =15.0f;
int triangleAmount = 100; //# of lines used to draw circle
GLfloat twicePi = 2.0f * PI;

glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y); // center of circle
	for(i = 0; i <= triangleAmount;i++) {
		glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount)) );
}
glEnd();

    int j;
    GLfloat x1=1394.32f; GLfloat y1=321.59f; GLfloat radius1 =15.0f;
    int triangleAmount1 = 100; //# of lines used to draw circle
    GLfloat twicePi1 = 2.0f * PI;

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1); // center of circle
	for(j = 0; j <= triangleAmount1;j++) {
		glVertex2f( x1+ (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1)) );
}
glEnd();
glPopMatrix();

}

void change8(int value) {
 // Update positions and scaling


        xposition -= xspeed;
        yposition -= xspeedy; // Move down
        xpositionScaleX -= scaleSpeedy;
        xpositionScaleY -= scaleSpeedy;

        // Check if the object has crossed the threshold
        if (xposition < -1500.0f)
        {
            xposition = 1500;
            yposition = 100;
        }


    // Trigger a redraw
    glutPostRedisplay();

    // Call update again after 100 ms
    glutTimerFunc(50,change8, 0);
}

void triangletree(){

glBegin(GL_QUADS);
    glColor3ub(153,76,0);
    glVertex2f(1176.47, 447.533);
    glVertex2f(1178.53,375.28);
    glVertex2f (1161.89, 373.20);
    glVertex2f (1160.82, 447.73);
    glEnd();
//upor theke 2nd
   glBegin(GL_TRIANGLES);
    glColor3ub(0,102,0);
    glVertex2f (1167.2379753895864, 583.7508497077177);
    glVertex2f (1216.028024914239, 489.7848284009794);
    glVertex2f (1123.869042478784, 488.8813089653377);
    glEnd();

//uporer ta
    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,0);
    glVertex2f (1168.141494825228, 656.0324045590551);
    glVertex2f (1212.4139471716721, 557.5487860741081);
    glVertex2f (1122.9655230431422, 554.838227767183);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,0);
    glVertex2f (1171.2573007060928, 621.8452845748126);
    glVertex2f (1211.8306312415307, 447.0678607298489);
    glVertex2f (1132.7646537878568, 448.1082025384499);
    glEnd();
    ////end triangle tree///////////
}

void display3()
{
glClear(GL_COLOR_BUFFER_BIT);

if (isDay) {
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color // Day background
    } else if (isNight) {
        glClearColor(0.05f, 0.05f, 0.2f, 1.0f); // Night background
}

skyN();
riverN();
gass();
roadN();
smalltin();
largetin();
building();
sunN();
plane();
car();
cloudN1();
cloudN2();
circletree();
flaghill();
hill();
boatN();
triangletree();

glutSwapBuffers();

}

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

    // Set background color based on day/night mode
  if (isDay) {
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color // Day background
    } else if (isNight) {
        glClearColor(0.05f, 0.05f, 0.2f, 1.0f); // Night background
    }

    // Render the appropriate scene
    /*if (currentScene == -1) {
        displaycoverpage(); // Display the cover scene
    } else if (currentScene == 0) {
        display0(); // Display Scene 0
    } else */if (currentScene == 1) {
        display1(); // Render Scene 1
    } else if (currentScene == 2) {
        display2(); // Render Scene 2
    } else if (currentScene == 3) {
        display3(); // Render Scene 3
    } /*else if (currentScene == 4) {
        display4(); // Render Scene 4
    }*/

    glFlush();
}


void keyboard(unsigned char key, int x, int y) {
    /*if (key == '0') {
        currentScene = 0; // Switch to Scene 0
    } else*/ if (key == '1') {
        currentScene = 1;
    } else if (key == '2') {
        currentScene = 2;
    } else if (key == '3') {
        currentScene = 3;
    } /*else if (key == '4') {
        currentScene = 4;
    }*/
    else if(key == 'd' || key == 'D') {
        isDay = true;
        isNight = false;
    } else if (key == 'n' || key == 'N') {
        isDay = false;
        isNight = true;
    }

    glutPostRedisplay(); // Request redraw
}


void mouseClick(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) { // Check if the mouse button is pressed
        if (button == GLUT_LEFT_BUTTON) {
            isDay = true;
            isNight = false;
        } else if (button == GLUT_RIGHT_BUTTON) {
            isDay = false;
            isNight = true;
        }
    }

    glutPostRedisplay(); // Request a redraw to update the display
}


void init (void)
{

glClear(GL_COLOR_BUFFER_BIT);
glClearColor (0.7, 0.7, 0.7, 1.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1500, 0.0, 800.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1500,800);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Interactive Journey Through Diverse Landscapes ");
init ();
glutDisplayFunc(display);
glutKeyboardFunc(keyboard);
glutMouseFunc(mouseClick);
////////display-1
glutTimerFunc(1,change1,0);
glutTimerFunc(1,change2,0);
glutTimerFunc(1,change3,0);
glutTimerFunc(1,change4,0);
///////////display-2
 glutTimerFunc(1, change5, 0);  //boat moving
 glutTimerFunc(1, change6, 0);
 //////////display-3
  glutTimerFunc(1, change7, 1);
  glutTimerFunc(1, change8, 1);
  glutTimerFunc(1, change9, 1);

glutMainLoop();
return 0;
}





















