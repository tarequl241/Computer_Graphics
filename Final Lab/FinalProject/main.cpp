#include <Windows.h>
#include <GL/glut.h>

void display() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

 glClearColor(1.0f, 1.0f, 1.0f, 1.0f);


 glBegin(GL_QUADS); //Road
glColor3f(1.0f, 1.0f, 0.0f); // Red
glVertex2f(0,150 ); // x, y
glVertex2f(700,150);
glVertex2f(700,0); // x, y
glVertex2f(0,0);
glEnd();

glBegin(GL_QUADS); //River
glColor3f(1.0f, 0.0f, 0.0f); // Red
glVertex2f(0,300 ); // x, y
glVertex2f(700,300);
glVertex2f(700,150); // x, y
glVertex2f(0,150);
glEnd();
////////////---------Houses&Sky&Cloud&Sun-------////////////////

 glBegin(GL_QUADS); //main Quads
glColor3f(0.407, 0.992, 0.980); // sky
glVertex2f(0,500 ); // x, y
glVertex2f(700,500);
glVertex2f(700,300); // x, y
glVertex2f(0,300);
glEnd();

 glBegin(GL_QUADS); //Small road
glColor3f(0.941, 0.898, 0.898);
glVertex2f(0,300 ); // x, y
glVertex2f(700,300);
glVertex2f(700,305); // x, y
glVertex2f(0,305);
glEnd();

/////////////////////////////////////////////////

glBegin(GL_POLYGON);//1st building
glColor3f(0.937, 0.243, 0.517); // Red
glVertex2i(5,305);
glVertex2i(75,305);
glVertex2i(75,370);
glVertex2i(40,385);//middle
glVertex2i(5,370);
glVertex2i(5,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(0,370);
glVertex2i(40,385);
glVertex2i(40,385);
glVertex2i(80,370);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();
 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(45,345);
glVertex2i(60,345);
glVertex2i(60,365);
glVertex2i(45,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();
////////////////////////////////////////////////////////

glBegin(GL_POLYGON);//2nd building
glColor3f(.937, 0.243, 1.517); // Red
glVertex2i(85,305);
glVertex2i(155,305);
glVertex2i(155,370);
glVertex2i(120,385);//middle
glVertex2i(85,370);
glVertex2i(85,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(80,370);
glVertex2i(120,385);
glVertex2i(120,385);
glVertex2i(160,370);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();
 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();
///////////////////////////////////////////////////

glBegin(GL_POLYGON);//3rd building
glColor3f(.937, 1.243, .517); // Red
glVertex2i(165,305);
glVertex2i(235,305);
glVertex2i(235,400);
glVertex2i(200,415);//middle
glVertex2i(165,400);
glVertex2i(165,390);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(160,400);
glVertex2i(200,415);
glVertex2i(200,415);
glVertex2i(240,400);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();
 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();
 glBegin(GL_QUADS); //5th window (top left)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();

glFlush(); // Render now
}
void position(void) {
//glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // white and opaque 0.309, 0.788, 0.545
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,500);
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
glutInitWindowSize(1200,700);
//glutInitWindowPosition(100,90);
glutCreateWindow("Final Project");
glutDisplayFunc(display);
// glutDisplayFunc(batman);
position();
glutMainLoop();
}
