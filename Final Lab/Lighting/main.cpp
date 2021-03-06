#include<windows.h>
#include <GL/glut.h>
float _angle = 0.0;
void Draw() {
float z;
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // just keep
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glColor3f(0.2, 0.6, 0.6);
glPushMatrix();
glTranslatef(0.0,0.0,-5.0);
z = -1.0;
glPushMatrix();

 glRotatef(_angle, 0.0, 1.0, 0.0);
glPushMatrix();
//glTranslatef(0.0,0.0,-25.0);
glNormal3f(0.0, 0.0, -1.0); //5. Normal --> direction of light ray falling
glBegin(GL_QUADS);

 glVertex3f(-1.0, -1.0, z);
glVertex3f(-1.0, 1.0, z);
glVertex3f(1.0,1.0, z);
glVertex3f(1.0, -1.0, z);

 glEnd();

 //glNormal3f(0.0, 0.0, -1.0);
glRotatef(90,0.0,1.0,0.0);
glBegin(GL_QUADS);

 glVertex3f(-1.0, -1.0, z);
glVertex3f(-1.0, 1.0, z);
glVertex3f(1.0,1.0, z);
glVertex3f(1.0, -1.0, z);

 glEnd();

 glPopMatrix();
glPopMatrix();
glPopMatrix();
glFlush();
glutSwapBuffers(); // just keep
}

void update(int value)
{
_angle += 0.2;
if (_angle > 360)
{
_angle - 0.0;
}

 glutPostRedisplay();
glutTimerFunc(5,update,0);
}

void lightSetting()
{
float zpos = -10.0;
//GLfloat ambientIntensity[4] = {0.2, 0.2, 0.2, 1.0}; // 6. ambient property //array last one alpha/trsnsparency
GLfloat diffuseIntensity[4] = {0.0, 0.9, 0.0, 1.0}; // 8. ambient property
GLfloat position[4] = {0.0, 0.0, zpos, 0.0}; // 10. position property

 glEnable(GL_DEPTH_TEST); // 4. just keep
glEnable(GL_COLOR_MATERIAL); // 3. Materals' color

 glEnable(GL_LIGHTING); // 1. enable lighting
glEnable(GL_LIGHT0); // 2. enable light 0
glEnable(GL_NORMALIZE);

 // set up light 0 properties
//glLightfv(GL_LIGHT0, GL_AMBIENT, ambientIntensity); // 7. ambient property adding to Light0
glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseIntensity); // 9. ambient property adding to Light0
glLightfv(GL_LIGHT0, GL_POSITION, position); // 11. position property adding to Light0
}

void Initialize() {
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
gluPerspective(45.0, 1.00, 1.0, 200.0);
}

int main(int iArgc, char** cppArgv) {
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(250, 250);
glutInitWindowPosition(200, 200);
glutCreateWindow("AIUB");
Initialize();
lightSetting();
glutDisplayFunc(Draw);
update(0);
glutMainLoop();
return 0;
}
