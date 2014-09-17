#include "stdafx.h"
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <iostream>


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Terrain Editor");

	std::cout << "Press Enter to exit";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return 0;
}

