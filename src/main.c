#include <stdio.h>

#include <GL/glut.h>
#include <GL/freeglut.h>

#define AP_W 800
#define AP_H 600

void DisplayPoly(void){

glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.5f, 0.0f);
glEnd();
glFlush();
}

int main(int argc, char** argv[]){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(AP_W, AP_H);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("APOLLO");
	glutDisplayFunc(DisplayPoly);
	glutMainLoop();

return 0;

}

	

