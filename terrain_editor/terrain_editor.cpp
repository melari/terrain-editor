#include "stdafx.h"
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <iostream>

void render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);

	glVertex3f(-2, -2, -5.0);
	glVertex3f(2, 0.0, -5.0);
	glVertex3f(0.0, 2, -5.0);

	glEnd();
	glutSwapBuffers();
}

void changeSize(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45, 1.0 * w / h, 1, 100);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Terrain Editor");

	glutDisplayFunc(render);
	glutReshapeFunc(changeSize);
	
	glutMainLoop();
	return 0;
}

