#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>





static GLfloat spin = 0.0;
void  update(int value) {


 spin = -20;
			glutPostRedisplay();
			glRotatef(spin, 0.0, 0.0, 1.0);

glutTimerFunc(100, update, 0);
}

void SecondCodent()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(-0.5,0.5f, 0.0f);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- LEFT -----------------------------------------------------

	 glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	//-------------------------- RIGHT -------------------------------------------------------

	 glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- DOWN ----------------------------------------
	 glRotatef(-270.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glPopMatrix();


  glFlush();


}
//-------------------------------------------------------------------------------
void FirstCodent()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0.5,0.5f, 0.0f);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- LEFT -----------------------------------------------------

	 glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	//-------------------------- RIGHT -------------------------------------------------------

	 glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- DOWN ----------------------------------------
	 glRotatef(-270.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glPopMatrix();


  glFlush();


}


void ThirdCodent()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(-0.5,-0.5f, 0.0f);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- LEFT -----------------------------------------------------

	 glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	//-------------------------- RIGHT -------------------------------------------------------

	 glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- DOWN ----------------------------------------
	 glRotatef(-270.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glPopMatrix();


  glFlush();


}




void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

glPushMatrix();
//glRotatef(spin, 0.0, 0.0, 1.0);
 glRotatef(90.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- LEFT -----------------------------------------------------

	 glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	//-------------------------- RIGHT -------------------------------------------------------

	 glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- DOWN ----------------------------------------
	 glRotatef(-270.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

glPopMatrix();


 glFlush();
}

void ForthCodent()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0.5,-0.5f, 0.0f);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- LEFT -----------------------------------------------------

	 glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	//-------------------------- RIGHT -------------------------------------------------------

	 glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();


	//-------------------------------- DOWN ----------------------------------------
	 glRotatef(-270.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, -0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.05f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.05f);    // x, y
	glVertex2f(0.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.1f, 0.1f);    // x, y
	glVertex2f(0.2f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, 0.1f);    // x, y
	glVertex2f(0.3f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.2f);    // x, y
	glVertex2f(0.3f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, 0.25f);    // x, y
	glVertex2f(0.4f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.3f);    // x, y
	glVertex2f(0.4f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.2f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.6f, 0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(0.6f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, 0.1f);    // x, y
	glVertex2f(0.7f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, 0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.6f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.3f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.4f, -0.3f);    // x, y
	glVertex2f(0.3f, -0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.25f);    // x, y
	glVertex2f(0.3f, -0.2f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.3f, -0.2f);    // x, y
	glVertex2f(0.2f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, -0.15f);    // x, y
	glEnd();



	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.2f, -0.15f);    // x, y
	glVertex2f(0.1f, -0.1f);    // x, y
	glEnd();

	glPopMatrix();


  glFlush();


}



void handleMouse(int button, int state, int x, int y) {
if (button == GLUT_LEFT_BUTTON)
{
    glutTimerFunc(100, update, 0);
}
//if (button == GLUT_RIGHT_BUTTON)
//void timer()
//{
//  if (button == GLUT_RIGHT_BUTTON)//do something
//  {glutTimerFunc(timer, 1000);}
//}
}
void handleKeypress(unsigned char key, int x, int y) {
switch (key) {

case '1':
  glutIdleFunc(FirstCodent);
break;
case '2':
  glutIdleFunc(SecondCodent);
break;

case '3':
  glutIdleFunc(ThirdCodent);
break;
case '4':
  glutIdleFunc(ForthCodent);
break;
glutPostRedisplay();
}}

int main(int argc, char** argv) {
printf("-->Enter 1 for shift the fan 1st codent:\n");
printf("-->Enter 2 for shift the fan 2nd codent:\n");
printf("-->Enter 3 for shift the fan 3rd codent:\n");
printf("-->Enter 4 for shift the fan 4th codent:\n");
glutInit(&argc, argv);
glutInitWindowSize(1320, 720);
glutInitWindowPosition(50, 50);
glutCreateWindow("Translation Animation");
glutDisplayFunc(display);
//glutTimerFunc(100, update, 0);
glutKeyboardFunc(handleKeypress);
glutMouseFunc(handleMouse);

 glutMainLoop();
return 0;
}
