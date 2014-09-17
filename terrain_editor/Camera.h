#pragma once
class Camera
{
public:
	Camera();
	~Camera();

	float x, y, z;
	float dir_x, dir_y, dir_z;
	float angle;

	void applyTransformation();
};

