#include "stdafx.h"
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <iostream>

void render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);

	glVertex3f(-0.5, -0.5f, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Terrain Editor");

	glutDisplayFunc(render);
	
	glutMainLoop();
	return 0;
}

