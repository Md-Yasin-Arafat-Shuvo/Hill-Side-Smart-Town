#include<windows.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416


GLint i, j, k;

GLfloat ax = 0, bx = 0, cx = 0, dx = 0, str = 500.0, mn = 500.0;
GLfloat sr = 0.0, sg = 0.749, sb = 1.0;
GLfloat spin = 0.0;

GLint b = 300;
float  counter = 600.0;

void init(void)
{
    glClearColor(0.56, .89, 0.78, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}


void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}



void Sun_Model() {
    glColor3f(0.95, 0.95, 0.0);
    glPushMatrix();
    glTranslatef(850, 410, 0);
    circle(30);
    glPopMatrix();

}

///Cloud
void cloud_model_one() {

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(355, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305, 204, 0);
    circle(10);
    glPopMatrix();



}

void cloud_model_Two() {
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(305, 205, 0);
    circle(10);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(334, 207, 0);
    circle(10);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(320, 207, 0);
    circle(10);
    glPopMatrix();




}

void cloud_model_Three() {
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(300, 200, 0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(340, 220, 0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(380, 200, 0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(360, 190, 0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(320, 190, 0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(340, 190, 0);
    circle(20);
    glPopMatrix();






}










///Hill
void hill_big() {

    ///Hill
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
    glVertex2i(50, 70);
    glVertex2i(200, 280);
    glVertex2i(360, 70);

    glEnd();

    ///Hill_Snow
    glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);

    glVertex2i(200, 280);
    glVertex2i(135, 190);//ghgk
    glVertex2i(247, 220);///eyta
    glVertex2i(220, 190);
    glVertex2i(170, 180);
    glVertex2i(189, 190);

    glEnd();

}
void hill_small() {
    ///Hill_Small
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
    glVertex2i(250, 100);
    glVertex2i(310, 175);
    glVertex2i(370, 100);

    glEnd();

    ///Hill_Small_Snow
    glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);
    glVertex2i(290, 150);
    glVertex2i(310, 175);
    glVertex2i(330, 150);
    glVertex2i(325, 140);
    glVertex2i(310, 150);
    glVertex2i(300, 140);


    glEnd();
}

















///Tilla
void Tilla_One_Model() {
    ///Tilla
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.54, 0.13);
    glVertex2i(145, 70);
    glVertex2i(170, 80);
    glVertex2i(180, 90);
    glVertex2i(190, 90);
    glVertex2i(200, 100);
    glVertex2i(210, 105);
    glVertex2i(220, 108);
    glVertex2i(320, 110);
    glVertex2i(320, 70);

    glEnd();

}

void Tilla_One_Mode2() {
    ///Tilla
    glBegin(GL_POLYGON);
    glColor3f(0.13, 0.54, 0.13);
    glVertex2i(145, 70);
    glVertex2i(170, 80);
    glVertex2i(180, 90);
    glVertex2i(190, 90);
    glVertex2i(200, 100);
    glVertex2i(210, 105);
    glVertex2i(220, 108);
    glVertex2i(320, 110);
    glVertex2i(320, 70);

    glEnd();

}

void Tilla_Two_Model() {

    glColor3f(0.13, 0.48, 0.13);
    /// Left_Part
    glPushMatrix();
    glTranslatef(430, 90, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(420, 87, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(410, 80, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400, 80, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(390, 70, 0);
    circle(30);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(445, 80, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(455, 75, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(465, 70, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(470, 65, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480, 60, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(485, 55, 0);
    circle(20);
    glPopMatrix();



}



void white1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2i(0, 0);
    glVertex2i(0, 2);
    glVertex2i(85, 2);
    glVertex2i(85, 0);

    glEnd();

}
void house3() {
    ///House_Roof
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(290, 135);
    glVertex2i(290, 160);
    glVertex2i(375, 145);
    glVertex2i(375, 135);

    glEnd();




    ///house 3 tola
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.2, 0.2);
    glVertex2i(290, 104);
    glVertex2i(290, 138);
    glVertex2i(375, 138);
    glVertex2i(375, 104);

    glEnd();

    ///House_3 tola Window1
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(295, 110);
    glVertex2i(295, 125);
    glVertex2i(310, 125);
    glVertex2i(310, 110);

    glEnd();

    ///House3 tola_Window2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(315, 110);
    glVertex2i(315, 125);
    glVertex2i(330, 125);
    glVertex2i(330, 110);

    glEnd();

    ///House_3 tolaWindow3
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(355, 110);
    glVertex2i(355, 125);
    glVertex2i(370, 125);
    glVertex2i(370, 110);

    glEnd();


    ///House_3 tolaWindow4
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(335, 110);
    glVertex2i(335, 125);
    glVertex2i(350, 125);
    glVertex2i(350, 110);

    glEnd();






    ///House_Fence
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.2, 0.2);
    glVertex2i(290, 70);
    glVertex2i(290, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Fence_Shadow
    glBegin(GL_POLYGON);
    glColor3f(.555, 0.1, 0.1);
    glVertex2i(310, 70);
    glVertex2i(350, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.8);
    glVertex2i(320, 70);
    glVertex2i(320, 95);
    glVertex2i(345, 95);
    glVertex2i(345, 70);

    glEnd();

    ///House_Window1
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(295, 80);
    glVertex2i(295, 95);
    glVertex2i(310, 95);
    glVertex2i(310, 80);

    glEnd();



    ///House_Window3
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(355, 80);
    glVertex2i(355, 95);
    glVertex2i(370, 95);
    glVertex2i(370, 80);

    glEnd();











}

///House4
void house() {
    ///House_Roof
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex2i(290, 172);
    glVertex2i(290, 195);
    glVertex2i(375, 180);
    glVertex2i(375, 172);

    glEnd();







    ///house 4 tola
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.8, 0.8);
    glVertex2i(290, 138);
    glVertex2i(290, 172);
    glVertex2i(375, 172);
    glVertex2i(375, 138);

    glEnd();


    ///House_4 tola Window1
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(295, 145);
    glVertex2i(295, 160);
    glVertex2i(310, 160);
    glVertex2i(310, 145);

    glEnd();

    ///House 4 tola_Window2
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(315, 145);
    glVertex2i(315, 160);
    glVertex2i(330, 160);
    glVertex2i(330, 145);

    glEnd();

    ///House_4 tolaWindow3
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(355, 145);
    glVertex2i(355, 160);
    glVertex2i(370, 160);
    glVertex2i(370, 145);

    glEnd();


    ///House_4 tolaWindow4
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(335, 145);
    glVertex2i(335, 160);
    glVertex2i(350, 160);
    glVertex2i(350, 145);

    glEnd();




    ///house 3 tola
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.8, 0.8);
    glVertex2i(290, 104);
    glVertex2i(290, 138);
    glVertex2i(375, 138);
    glVertex2i(375, 104);

    glEnd();

    ///House_3 tola Window1
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(295, 110);
    glVertex2i(295, 125);
    glVertex2i(310, 125);
    glVertex2i(310, 110);

    glEnd();

    ///House3 tola_Window2
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(315, 110);
    glVertex2i(315, 125);
    glVertex2i(330, 125);
    glVertex2i(330, 110);

    glEnd();

    ///House_3 tolaWindow3
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(355, 110);
    glVertex2i(355, 125);
    glVertex2i(370, 125);
    glVertex2i(370, 110);

    glEnd();


    ///House_3 tolaWindow4
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(335, 110);
    glVertex2i(335, 125);
    glVertex2i(350, 125);
    glVertex2i(350, 110);

    glEnd();






    ///House_Fence
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.8, 0.8);
    glVertex2i(290, 70);
    glVertex2i(290, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Fence_Shadow
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.6);
    glVertex2i(310, 70);
    glVertex2i(350, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.8);
    glVertex2i(320, 70);
    glVertex2i(320, 95);
    glVertex2i(345, 95);
    glVertex2i(345, 70);

    glEnd();

    ///House_Window1
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(295, 80);
    glVertex2i(295, 95);
    glVertex2i(310, 95);
    glVertex2i(310, 80);

    glEnd();



    glEnd();

    ///House_Window3
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(355, 80);
    glVertex2i(355, 95);
    glVertex2i(370, 95);
    glVertex2i(370, 80);

    glEnd();






}









void house2()
{
    ///House_Roof
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.1, 0.1);
    glVertex2i(285, 103);
    glVertex2i(285, 130);
    glVertex2i(380, 115);
    glVertex2i(380, 103);

    glEnd();




    ///House_Fence
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.8, 0.8);
    glVertex2i(290, 70);
    glVertex2i(290, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Fence_Shadow
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 0.7);
    glVertex2i(310, 70);
    glVertex2i(350, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.8);
    glVertex2i(330, 70);
    glVertex2i(330, 100);
    glVertex2i(350, 100);
    glVertex2i(350, 70);

    glEnd();

    ///House_Window1
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(295, 75);
    glVertex2i(295, 90);
    glVertex2i(310, 90);
    glVertex2i(310, 75);

    glEnd();

    ///House_Window2
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(312, 75);
    glVertex2i(312, 90);
    glVertex2i(327, 90);
    glVertex2i(327, 75);

    glEnd();

    ///House_Window3
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(355, 75);
    glVertex2i(355, 90);
    glVertex2i(370, 90);
    glVertex2i(370, 75);

    glEnd();



}



void house4()
{
    ///House_Roof
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.0, 0.29);
    //glColor3f(1.0, 0.3, 0.3);
    glVertex2i(285, 103);
    glVertex2i(285, 130);
    glVertex2i(380, 115);
    glVertex2i(380, 103);

    glEnd();



    ///House_Fence
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.3, 0.0);
    glVertex2i(290, 70);
    glVertex2i(290, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Fence_Shadow
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.5, 0.0);
    glVertex2i(310, 70);
    glVertex2i(350, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);

    glEnd();

    ///House_Door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(330, 70);
    glVertex2i(330, 100);
    glVertex2i(350, 100);
    glVertex2i(350, 70);

    glEnd();

    ///House_Window1
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(295, 75);
    glVertex2i(295, 90);
    glVertex2i(310, 90);
    glVertex2i(310, 75);

    glEnd();

    ///House_Window2
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(312, 75);
    glVertex2i(312, 90);
    glVertex2i(327, 90);
    glVertex2i(327, 75);

    glEnd();

    ///House_Window3
    glBegin(GL_POLYGON);
    glColor3f(0.8, 1.0, 0.8);
    glVertex2i(355, 75);
    glVertex2i(355, 90);
    glVertex2i(370, 90);
    glVertex2i(370, 75);

    glEnd();




}
///Field
void field() {
    ///Field
    glBegin(GL_POLYGON);
    glColor3f(0.533, 1.293, 0.0);
    glVertex2i(0, 50);
    glVertex2i(0, 70);
    glVertex2i(1000, 70);
    glVertex2i(1000, 50);

    glEnd();


    ///Field_Shadow
    glBegin(GL_POLYGON);
    glColor3f(0.25, 0.25, 0.25);
    glVertex2i(0, 0);
    glVertex2i(0, 60);
    glVertex2i(1000, 60);
    glVertex2i(1000, 0);

    glEnd();






}

void white()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(0, 0);
    glVertex2i(0, 3);
    glVertex2i(35, 3);
    glVertex2i(35, 0);

    glEnd();

}



///Tree
void Tree_Model_One() {






    glBegin(GL_POLYGON);

    glVertex2f(100, 90);
    glVertex2f(118, 152);
    glVertex2f(136, 90);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2f(114, 70);
    glVertex2f(114, 90);
    glVertex2f(121, 90);
    glVertex2f(121, 70);

    glEnd();

}
void Tree_Model_Two() {

    glPushMatrix();
    glTranslatef(130, 130, 0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125, 126, 0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(135, 126, 0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130, 125, 0);
    circle(5);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2f(129, 110);
    glVertex2f(129, 124);
    glVertex2f(131, 124);
    glVertex2f(131, 110);

    glEnd();
}

void Tree_Model_Three() {


    glBegin(GL_POLYGON);

    glVertex2f(125, 123);
    glVertex2f(133, 145);
    glVertex2f(141, 123);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2f(132, 110);
    glVertex2f(132, 124);
    glVertex2f(134, 124);
    glVertex2f(134, 110);

    glEnd();
}











///Windmill
void Windmill_Stand_Model() {

    glColor3f(0.43, 0.50, 0.56);
    glBegin(GL_POLYGON);
    glVertex2i(380, 100);
    glVertex2i(380, 240);
    glVertex2i(384, 240);
    glVertex2i(392, 100);
    glEnd();
}

///WindmillBlades

void Windmill_Blade() {

    ///Blade_One
    glPushMatrix();
    glRotatef(spin, 0, 0, 90);
    glBegin(GL_POLYGON);
    glVertex2i(-10, 0);

    glVertex2i(-63, -17);
    glVertex2i(-3, -7);
    glEnd();
    glPopMatrix();

    ///Blade_Two
    glPushMatrix();
    glRotatef(spin, 0, 0, 90);
    glBegin(GL_POLYGON);
    glVertex2i(-5, 5);
    glVertex2i(5, 60);

    glVertex2i(4, 0);
    glEnd();
    glPopMatrix();

    ///Blade_Three
    glPushMatrix();
    glRotatef(spin, 0, 0, 90);
    glBegin(GL_POLYGON);
    glVertex2i(48, -35);
    glVertex2i(-10, 0);
    glVertex2i(-3, 7);

    glEnd();
    glPopMatrix();

}













///Windmill_Final
void Windmill() {



    ///Windmill_Stand
    glColor3f(0.38, 0.41, 0.36);
    glPushMatrix();
    Windmill_Stand_Model();
    glPopMatrix();

    ///Windmill_Motor
    glColor3f(0.0, 0.45, 0.45);
    glPushMatrix();
    glTranslatef(380, 250, 0);
    circle(10);
    glPopMatrix();

    ///Windmill_Rotary_Blades
    glColor3f(0.0, 0.45, 0.45);
    glPushMatrix();
    glTranslatef(380, 251, 0);
    Windmill_Blade();
    glPopMatrix();




}




///CloudTwo


void cloud_two() {
    glPushMatrix();
    glTranslatef(bx - 100, 150, 0);
    cloud_model_one();
    glPopMatrix();

}


///CloudFour

void cloud_four() {
    glPushMatrix();
    glTranslatef(dx + 300, 125, 0);
    cloud_model_Two();
    glPopMatrix();

}
///CloudFive
void cloud_five() {

    glPushMatrix();
    glTranslatef(ax - 400, 170, 0);
    cloud_model_Three();
    glPopMatrix();
}









///HouseOne
void house_one() {
    glPushMatrix();
    glTranslatef(-200, 0, 0);
    house();
    glPopMatrix();
}
///HouseTwo
void house_two() {
    glPushMatrix();
    glTranslatef(60, 0, 0);
    house4();
    glPopMatrix();
}
///HouseThree
void house_three() {
    glPushMatrix();
    glTranslatef(305, 37, 0);
    house2();
    glPopMatrix();
}

void house_four() {
    glPushMatrix();
    glTranslatef(-60, 0, 0);
    house3();
    glPopMatrix();
}















///HillBigOne
void Hill_Big_One() {
    glPushMatrix();
    glTranslatef(60, 0, 0);
    hill_big();
    glPopMatrix();
}
///HillBigTwo
void Hill_Big_Two() {
    glPushMatrix();
    glTranslatef(-180, -20, 0);
    hill_big();
    glPopMatrix();
}
///HillSmallOne
void Hill_Small_One() {
    glPushMatrix();
    glTranslatef(-240, -12, 0);
    hill_small();
    glPopMatrix();

}
void Hill_Small_2() {
    glPushMatrix();
    glTranslatef(-100, -20, 0);
    hill_small();
    glPopMatrix();

}







///TILLLAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA






void Tilla_One() {

    glPushMatrix();
    glTranslatef(5, 0, 0);
    Tilla_One_Model();
    glPopMatrix();

}

void Tilla_Two() {

    glPushMatrix();
    glTranslatef(0, 0, 0);
    Tilla_Two_Model();
    glPopMatrix();


}
void Tilla_2() {

    glPushMatrix();
    glTranslatef(80, -16, 0);
    Tilla_Two_Model();
    glPopMatrix();


}
void Tilla_Three() {

    glPushMatrix();
    glTranslatef(-400, 0, 0);
    Tilla_Two_Model();
    glPopMatrix();


}

void Tilla_Four() {

    glColor3f(0.833, 1., 0.0);
    glPushMatrix();
    glTranslatef(360, 0, 0);
    Tilla_One_Model();
    glPopMatrix();


}

void Tilla_five() {

    glPushMatrix();
    glTranslatef(-90, 0, 0);
    Tilla_Two_Model();
    glPopMatrix();

}
void Tilla_six() {

    glColor3f(0.833, 1., 0.0);
    glPushMatrix();
    glTranslatef(460, -2, 0);
    Tilla_One_Mode2();
    glPopMatrix();


}

void Tilla_seven() {

    glColor3f(0.833, 1., 0.0);
    glPushMatrix();
    glTranslatef(560, -2, 0);
    Tilla_One_Mode2();
    glPopMatrix();


}
void Tilla_eight() {

    glColor3f(0.833, 1., 0.0);
    glPushMatrix();
    glTranslatef(660, -2, 0);
    Tilla_One_Mode2();
    glPopMatrix();


}
void Tilla_nine() {

    glColor3f(0.833, 1., 0.0);
    glPushMatrix();
    glTranslatef(760, -2, 0);
    Tilla_One_Mode2();
    glPopMatrix();


}
















/// Tree
void Tree_One() {
    glColor3f(0.29, 0.6, 0.0);
    glPushMatrix();
    glTranslatef(-92, 0, 0);
    Tree_Model_One();
    glPopMatrix();
}



void Tree_Three() {
    glColor3f(0.7, 0.7, 0.0);
    glPushMatrix();
    glTranslatef(750, 0, 0);
    Tree_Model_One();
    glPopMatrix();
}

void Tree_Four() {
    glColor3f(0.29, 0.6, 0.0);
    glPushMatrix();
    glTranslatef(292, 40, 0);
    Tree_Model_One();
    glPopMatrix();
}




void Tree_Six() {
    glColor3f(0.29, 0.9, 0.0);
    glPushMatrix();
    glTranslatef(-60, -40, 0);
    Tree_Model_Two();
    glPopMatrix();
}

void Tree_Seven() {
    glColor3f(0.29, 0.6, 0.0);
    glPushMatrix();
    glTranslatef(322, 0, 0);
    Tree_Model_Two();
    glPopMatrix();
}


void Tree_Eight() {
    glColor3f(0.29, 0.6, 0.0);
    glPushMatrix();
    glTranslatef(350, -15, 0);
    Tree_Model_Two();
    glPopMatrix();
}


void Tree_Nine() {
    glColor3f(0.29, 0.9, 0.0);
    glPushMatrix();
    glTranslatef(780, -40, 0);
    Tree_Model_Two();
    glPopMatrix();
}


void Tree_Ten() {
    glColor3f(0.29, 1.0, 0.0);
    glPushMatrix();
    glTranslatef(60, -40, 0);
    Tree_Model_Three();
    glPopMatrix();
}


void Tree_Eleven() {
    glColor3f(0.29, 1.0, 0.0);
    glPushMatrix();
    glTranslatef(85, -40, 0);
    Tree_Model_Three();
    glPopMatrix();
}



void Tree_13() {
    glColor3f(0.29, 0.6, 0.0);
    glPushMatrix();
    glTranslatef(410, -22, 0);
    Tree_Model_Two();
    glPopMatrix();
}



void Tree_14() {
    glColor3f(0.29, 0.6, 0.0);
    glPushMatrix();
    glTranslatef(680, 20, 0);
    Tree_Model_One();
    glPopMatrix();
}

void Tree_15() {
    glColor3f(0.29, 0.9, 0.0);
    glPushMatrix();
    glTranslatef(820, -40, 0);
    Tree_Model_Two();
    glPopMatrix();
}


void Tree_16() {
    glColor3f(0.29, 0.6, 0.0);
    glPushMatrix();
    glTranslatef(850, 0, 0);
    Tree_Model_One();
    glPopMatrix();
}










/// Windmill
void Windmill_One() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(350, 0, 0);
    Windmill();
    glPopMatrix();

}

void Windmill_Two() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(450, 0, 0);
    Windmill();
    glPopMatrix();

}
void Windmill_Three() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(250, 0, 0);
    Windmill();
    glPopMatrix();

}

void Windmill_four() {
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(550, 0, 0);
    Windmill();
    glPopMatrix();

}


///carrrrrrr

void car()
{



    glColor3f(1.0, 0.3, 0.3);
    glBegin(GL_POLYGON);
    glVertex2f(146, 150);
    glVertex2f(146, 160);
    glVertex2f(210, 160);
    glVertex2f(210, 150);

    //Top Part
    glBegin(GL_POLYGON);


    glVertex2f(150, 160);
    glVertex2f(160, 170);
    glVertex2f(190, 170);
    glVertex2f(200, 160);

    glEnd();



}




void window()
{



    glBegin(GL_POLYGON);

    glVertex2i(287, 75);
    glVertex2i(295, 83);
    glVertex2i(307, 83);
    glVertex2i(307, 75);

    glEnd();



}

void win()
{
    glBegin(GL_POLYGON);

    glVertex2i(95, 95);
    glVertex2i(95, 103);
    glVertex2i(107, 103);
    glVertex2i(114, 95);


    glEnd();

}



void window_car_glass1()
{
    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(82, 40, 0);
    win();
    glPopMatrix();
}


void window_car_glass2()
{
    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(-133, 60, 0);
    window();
    glPopMatrix();
}


void wheel()
{
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(160, 124, 0);
    circle(5);
    glPopMatrix();

}

void wheel1()
{
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(195, 124, 0);
    circle(5);
    glPopMatrix();

}


void wheel2()
{
    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(160, 124, 0);
    circle(2.5);
    glPopMatrix();

}

void wheel3()
{
    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(195, 124, 0);
    circle(2.5);
    glPopMatrix();

}




void final_car()
{

    glPushMatrix();
    glTranslatef(ax - 100, -115, 0);
    car();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(ax - 100, -90, 0);
    wheel();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(ax - 100, -90, 0);
    wheel1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(ax - 100, -90, 0);
    wheel2();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(ax - 100, -90, 0);
    wheel3();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(ax - 100, -90, 0);
    window_car_glass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(ax - 100, -90, 0);
    window_car_glass2();
    glPopMatrix();

}






void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 1.0);








    Sun_Model();
    Windmill_Three();
    Windmill_four();

    Hill_Big_One();
    Tilla_Four();

    house_three();

    Hill_Small_One();


    cloud_four();

    Windmill_One();
    Windmill_Two();


    Tilla_One();
    Tilla_Two();
    Tilla_2();
    Tilla_Three();
    Tilla_five();
    Tilla_six();
    Tilla_seven();
    Tilla_eight();
    Tilla_nine();


    house_four();


    Tree_One();

    Tree_Three();
    Tree_Four();

    Tree_Seven();
    Tree_Eight();
    Tree_Nine();

    Tree_13();

    Tree_15();


    house_one();
    house_two();

    cloud_two();
    cloud_five();



    field();




    ///road white
    glPushMatrix();
    glTranslatef(5, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(80, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(155, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(230, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305, 29, 0);
    white();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(380, 29, 0);
    white();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(455, 29, 0);
    white();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(455, 29, 0);
    white();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(530, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(605, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(605, 29, 0);
    white();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(680, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(755, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(830, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(905, 29, 0);
    white();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(980, 29, 0);
    white();
    glPopMatrix();


    final_car();




    ///house line

    glPushMatrix();
    glTranslatef(90, 132, 0);
    white1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(90, 102, 0);
    white1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(230, 102, 0);
    white1();
    glPopMatrix();




    glFlush();
}

















void move_right() {



    spin = spin + .05;
    ax = ax + .03;
    bx = bx + .03;
    cx = cx + .03;
    dx = dx + .03;

    if (ax > 1000) {
        ax = -400;
    }
    if (bx > 1000) {
        bx = -400;

    }
    if (cx > 1000) {
        cx = -400;

    }
    if (dx > 1000) {
        dx = -500;

    }


    glutPostRedisplay();
}



void mouse(int key, int state, int x, int y) {
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_right);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1000, 600);
    glutCreateWindow("Hill Side Smart Town by Md Yasin Arafat Shuvo");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
}

