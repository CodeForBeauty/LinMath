#include "linmath.h"

using namespace ln;


double ln::radians(double angle)
{
	return angle * PI / 180;
}

double ln::dot(vec2 v1, vec2 v2)
{
	return v1.x * v2.x + v1.y * v2.y;
}

double ln::dot(vec3 v1, vec3 v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

double ln::dot(vec4 v1, vec4 v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

double ln::cross(vec2 v1, vec2 v2)
{
	return v1.x * v2.y - v1.y * v2.x;
}

vec3 ln::cross(vec3 v1, vec3 v2)
{
	vec3 out = {};
	out.x = v1.y * v2.z - v1.z * v2.y;
	out.y = v1.z * v2.x - v1.x * v2.z;
	out.z = v1.x * v2.y - v1.y * v2.x;
	return out;
}


double ln::magnitude(vec2 v)
{
	return std::sqrt(dot(v, v));
}

double ln::magnitude(vec3 v)
{
	return std::sqrt(dot(v, v));
}

double ln::magnitude(vec4 v)
{
	return std::sqrt(dot(v, v));
}

vec2 ln::normalize(vec2 v)
{
	return v / magnitude(v);
}

vec3 ln::normalize(vec3 v)
{
	return v / magnitude(v);
}

vec4 ln::normalize(vec4 v)
{
	return v / magnitude(v);
}


vec2 ln::mat2::getX()
{
	return { x.x, y.x };
}

vec2 ln::mat2::getY()
{
	return { x.y, y.y };
}

vec3 ln::mat3::getX()
{
	return { x.x, y.x, z.x };
}

vec3 ln::mat3::getY()
{
	return { x.y, y.y, z.y };
}

vec3 ln::mat3::getZ()
{
	return { x.z, y.z, z.z };
}

vec4 ln::mat4::getX()
{
	return { x.x, y.x, z.x, w.x };
}

vec4 ln::mat4::getY()
{
	return { x.y, y.y, z.y, w.y };
}

vec4 ln::mat4::getZ()
{
	return { x.z, y.z, z.z, w.z };
}

vec4 ln::mat4::getW()
{
	return { x.w, y.w, z.w, w.w };
}


mat4 ln::orthographic(float left, float right, float bottom, float top, float back, float front)
{
	mat4 out = {};

	out.x.x = 2 / (right - left);
	out.y.y = 2 / (top - bottom);
	out.z.z = 2 / (front - back);

	out.w.x = -((right + left) / (right - left));
	out.w.y = -((top + bottom) / (top - bottom));
	out.w.z = -((front + back) / (front - back));
	out.w.w = 1;

	return out;
}

mat4 ln::perspective(float fov, float near, float far, float ratio)
{
	mat4 out = {};
	out.y.y = 1 / std::tan(fov / 2);
	out.x.x = out.y.y * ratio;
	out.z.z = far / (far - near);
	out.w.z = 1.0;

	return out;
}


std::ostream& operator <<(std::ostream& os, vec2 vec)
{
	os << "X: " << vec.x << " Y: " << vec.y << " ";
	return os;
}

std::ostream& operator <<(std::ostream& os, vec3 vec)
{
	os << "X: " << vec.x << " Y: " << vec.y << " Z: " << vec.z << " ";
	return os;
}

std::ostream& operator <<(std::ostream& os, vec4 vec)
{
	os << "X: " << vec.x << " Y: " << vec.y << " Z: " << vec.z << " W: " << vec.w << " ";
	return os;
}