#pragma once
#include "Entity.h"
class Camera :
	public Entity
{
protected:
	Vector3 _up;
	Vector3 _at;
	double _near;
	double _far;

public:
	Camera(double near, double far);
	~Camera();
	virtual void update();
	virtual void reshape(GLsizei width, GLsizei height);
	virtual void computeProjectionMatrix();
	virtual void computeVisualizationMatrix();

};

