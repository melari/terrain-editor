#include "stdafx.h"
#include "Camera.h"


Camera::Camera()
{
	x = 0.0;
	y = 1.0;
	z = 5.0;

	dir_x = 0.0;
	dir_y = 0.0;
	dir_z = -1.0;

	angle = 0.0;
}

Camera::~Camera() {}

void Camera::applyTransformation()
{
	glLoadIdentity();
	gluLookAt(x, y, z, x + dir_x, y + dir_y, z + dir_z, 0.0f, 1.0f, 0.0f);
}