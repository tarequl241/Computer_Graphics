#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position = 0;
GLfloat speed = 2;

void update(int value) {

  if(position <-1)
        position = 500;

    position -= speed;

glutPostRedisplay();

glutTimerFunc(100, update, 0); // update recursivly called

}

void init() {

   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   gluOrtho2D(0,500,0,500);
}

void handleMouse(int button, int state, int x, int y) {

if (button == GLUT_LEFT_BUTTON){

speed += 5;

}

if (button == GLUT_RIGHT_BUTTON)

{speed -= 5;

}

glutPostRedisplay();}



void handleKeypress(unsigned char key, int x, int y) {

switch (key) {

case 'a':
    speed = 5;
    break;

case 'w':
    speed = 5;
    break;
glutPostRedisplay();
}}



void SpecialInput(int key, int x, int y)

{

switch(key)

{case GLUT_KEY_UP:

speed=5;

break;

case GLUT_KEY_DOWN:

speed=4;

break;

case GLUT_KEY_LEFT:



break;

case GLUT_KEY_RIGHT:

break;}

glutPostRedisplay();}

void display() {

   glClear(GL_COLOR_BUFFER_BIT);

   glLoadIdentity();

glPushMatrix(); ///////////////

glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0,0);
    glVertex2f(100,5);
    glVertex2f(200,200);
   glEnd();

glPopMatrix();//////////////////////

   glFlush();

}


int main(int argc, char** argv) {

   glutInit(&argc, argv);

   glutInitWindowSize(320, 320);

   glutInitWindowPosition(50, 50);

   glutCreateWindow("Basic Animation");

   glutDisplayFunc(display);

    init();
    glutSpecialFunc(SpecialInput);

   glutTimerFunc(100, update, 0); //position update frequently 100ms
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
   glutMainLoop();

   return 0;

}

