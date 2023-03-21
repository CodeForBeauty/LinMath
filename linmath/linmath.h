#pragma once
#include <iostream>


const double PI = 3.14159265359;

namespace ln
{
	double radians(double angle);

	struct vec2
	{
	private:
		float values[2] = {0, 0};
	public:
		double x, y;

		vec2() { x = 0; y = 0; }
		vec2(double x1, double y1) { x = x1; y = y1; }

		vec2 operator +(const vec2& a) { return { x + a.x, y + a.y }; }
		vec2 operator -(const vec2& a) { return { x - a.x, y - a.y }; }
		vec2 operator /(const vec2& a) { return { x / a.x, y / a.y }; }
		vec2 operator *(const vec2& a) { return { x * a.x, y * a.y }; }

		void operator +=(const vec2& a) { this->x += a.x; this->y += a.y; }
		void operator -=(const vec2& a) { this->x -= a.x; this->y -= a.y; }

		vec2 operator -() { return { -x, -y }; }
		void operator ++(int) { this->x++; this->y++; }

		vec2 operator +(const double& val) { return { x + val, y + val }; }
		vec2 operator -(const double& val) { return { x - val, y - val }; }
		vec2 operator /(const double& val) { return { x / val, y / val }; }
		vec2 operator *(const double& val) { return { x * val, y * val }; }

		void operator +=(const double& val) { this->x += val; this->y += val; }
		void operator -=(const double& val) { this->x -= val; this->y -= val; }

		void operator =(const vec2& a) { this->x = a.x; this->y = a.y; }

		operator float* ()
		{
			values[0] = x;
			values[1] = y;
			return values;
		}
	};
	struct vec3
	{
	private:
		float values[3] = { 0, 0, 0 };
	public:
		double x, y, z;

		vec3() { x = 0; y = 0; z = 0; }
		vec3(vec2 v) { x = v.x; y = v.y; z = 0; }
		vec3(double x1, double y1, double z1) { x = x1; y = y1; z = z1; }

		vec3 operator +(const vec3& a) { return { x + a.x, y + a.y, z + a.z }; }
		vec3 operator -(const vec3& a) { return { x - a.x, y - a.y, z - a.z }; }
		vec3 operator /(const vec3& a) { return { x / a.x, y / a.y, z / a.z }; }
		vec3 operator *(const vec3& a) { return { x * a.x, y * a.y, z * a.z }; }

		void operator +=(const vec3& a) { this->x += a.x; this->y += a.y; this->z += a.z; }
		void operator -=(const vec3& a) { this->x -= a.x; this->y -= a.y; this->z -= a.z; }

		vec3 operator -() { return { -x, -y, -z }; }
		void operator ++(int) { this->x++; this->y++; this->z++; }

		vec3 operator +(const double& val) { return { x + val, y + val, z + val }; }
		vec3 operator -(const double& val) { return { x - val, y - val, z - val }; }
		vec3 operator /(const double& val) { return { x / val, y / val, z / val }; }
		vec3 operator *(const double& val) { return { x * val, y * val, z * val }; }

		void operator +=(const double& val) { this->x += val; this->y += val; this->z += val; }
		void operator -=(const double& val) { this->x -= val; this->y -= val; this->z += val; }

		void operator =(const vec3& a) { this->x = a.x; this->y = a.y; this->z = a.z; }
		void operator =(const vec2& a) { this->x = a.x; this->y = a.y; }

		operator float* ()
		{
			values[0] = x;
			values[1] = y;
			values[2] = z;
			return values;
		}
	};
	struct vec4
	{
	private:
		float values[4] = { 0, 0, 0, 0 };
	public:
		double x, y, z, w;

		vec4() { x = 0; y = 0; z = 0; w = 0; }
		vec4(vec2 v) { x = v.x; y = v.y; z = 0; w = 0; }
		vec4(vec3 v) { x = v.x; y = v.y; z = v.z; w = 0; }
		vec4(double x1, double y1, double z1, double w1) { x = x1; y = y1; z = z1; w = w1; }

		vec4 operator +(const vec4& a) { return { x + a.x, y + a.y, z + a.z, w + a.w }; }
		vec4 operator -(const vec4& a) { return { x - a.x, y - a.y, z - a.z, w - a.w }; }
		vec4 operator /(const vec4& a) { return { x / a.x, y / a.y, z / a.z, w / a.w }; }
		vec4 operator *(const vec4& a) { return { x * a.x, y * a.y, z * a.z, w * a.w }; }

		void operator +=(const vec4& a) { this->x += a.x; this->y += a.y; this->z += a.z; this->w += a.w; }
		void operator -=(const vec4& a) { this->x -= a.x; this->y -= a.y; this->z -= a.z; this->w -= a.w; }

		vec4 operator -() { return { -x, -y, -z, -w }; }
		void operator ++(int) { this->x++; this->y++; this->z++; this->w++; }

		vec4 operator +(const double& val) { return { x + val, y + val, z + val, w + val }; }
		vec4 operator -(const double& val) { return { x - val, y - val, z - val, w - val }; }
		vec4 operator /(const double& val) { return { x / val, y / val, z / val, w / val }; }
		vec4 operator *(const double& val) { return { x * val, y * val, z * val, w * val }; }

		void operator +=(const double& val) { this->x += val; this->y += val; this->z += val; this->w += val; }
		void operator -=(const double& val) { this->x -= val; this->y -= val; this->z += val; this->w -= val; }

		void operator =(const vec2& a) { this->x = a.x; this->y = a.y; }
		void operator =(const vec3& a) { this->x = a.x; this->y = a.y; this->z = a.z; }
		void operator =(const vec4& a) { this->x = a.x; this->y = a.y; this->z = a.z; this->w = a.w; }

		operator float* ()
		{
			values[0] = x;
			values[1] = y;
			values[2] = z;
			values[3] = w;
			return values;
		}
	};


	double dot(vec2 v1, vec2 v2);
	double dot(vec3 v1, vec3 v2);
	double dot(vec4 v1, vec4 v2);

	double cross(vec2 v1, vec2 v2);
	vec3 cross(vec3 v1, vec3 v2);

	double magnitude(vec2 v);
	double magnitude(vec3 v);
	double magnitude(vec4 v);

	vec2 normalize(vec2 v);
	vec3 normalize(vec3 v);
	vec4 normalize(vec4 v);


	struct mat2
	{
	private:
		float values[4] = { 0, 0, 0, 0 };
	public:
		vec2 x, y;

		mat2() {}
		mat2(vec2 x1, vec2 y1) { x = x1; y = y1; }

		vec2 getX();
		vec2 getY();

		mat2 operator *(const mat2& a)
		{
			vec2 x1 = getX();
			vec2 y1 = getY();
			mat2 out = {};
			out.x.x = dot(x, x1);
			out.x.y = dot(x, y1);
			out.y.x = dot(y, x1);
			out.y.y = dot(y, y1);

			return out;
		}
		vec2 operator *(const vec2& a)
		{
			vec2 out = {};
			out.x = dot(x, a);
			out.y = dot(y, a);

			return out;
		}

		void operator =(const mat2& a) { this->x = a.x; this->y = a.y; }

		operator float* ()
		{
			values[0] = x.x;
			values[1] = x.y;
			values[2] = y.x;
			values[3] = y.y;
			return values;
		}
	};
	struct mat3
	{
	private:
		float values[9] = { 0, 0, 0, 0 };
	public:
		vec3 x, y, z;

		mat3() {}
		mat3(vec3 x1, vec3 y1, vec3 z1) { x = x1; y = y1; z = z1; }
		mat3(mat2 matrix) { x = matrix.x; y = matrix.y; }

		vec3 getX();
		vec3 getY();
		vec3 getZ();

		mat3 operator *(const mat3& a)
		{
			vec3 x1 = getX();
			vec3 y1 = getY();
			vec3 z1 = getZ();
			mat3 out = {};

			out.x.x = dot(x, x1);
			out.x.y = dot(x, y1);
			out.x.z = dot(x, z1);

			out.x.x = dot(y, x1);
			out.x.y = dot(y, y1);
			out.x.z = dot(y, z1);

			out.z.x = dot(z, x1);
			out.z.y = dot(z, y1);
			out.z.z = dot(z, z1);

			return out;
		}

		vec3 operator *(const vec3& a)
		{
			vec3 out = {};
			out.x = dot(x, a);
			out.y = dot(y, a);
			out.z = dot(z, a);

			return out;
		}

		void operator =(const mat2& a) { this->x = a.x; this->y = a.y; }
		void operator =(const mat3& a) { this->x = a.x; this->y = a.y; this->z = a.z; }

		operator float* ()
		{
			values[0] = x.x;
			values[1] = x.y;
			values[2] = x.z;

			values[3] = y.x;
			values[4] = y.y;
			values[5] = y.z;

			values[6] = z.x;
			values[7] = z.y;
			values[8] = z.z;
			return values;
		}
	};
	struct mat4
	{
	private:
		float values[16] = { 0, 0, 0, 0 };
	public:
		vec4 x, y, z, w;

		mat4() {}
		mat4(vec4 x1, vec4 y1, vec4 z1, vec4 w1) { x = x1; y = y1; z = z1; w = w1; }
		mat4(mat2 matrix) { x = matrix.x; y = matrix.y; }
		mat4(mat3 matrix) { x = matrix.x; y = matrix.y; z = matrix.z; }

		vec4 getX();
		vec4 getY();
		vec4 getZ();
		vec4 getW();

		mat4 operator *(const mat4& a)
		{
			vec4 x1 = getX();
			vec4 y1 = getY();
			vec4 z1 = getZ();
			vec4 w1 = getW();
			mat4 out = {};

			out.x.x = dot(x, x1);
			out.x.y = dot(x, y1);
			out.x.z = dot(x, z1);
			out.x.w = dot(x, w1);

			out.x.x = dot(y, x1);
			out.x.y = dot(y, y1);
			out.x.z = dot(y, z1);
			out.x.w = dot(y, w1);

			out.z.x = dot(z, x1);
			out.z.y = dot(z, y1);
			out.z.z = dot(z, z1);
			out.z.w = dot(z, w1);

			out.w.x = dot(w, x1);
			out.w.y = dot(w, y1);
			out.w.z = dot(w, z1);
			out.w.w = dot(w, w1);

			return out;
		}

		vec4 operator *(const vec4& a)
		{
			vec4 out = {};
			out.x = dot(x, a);
			out.y = dot(y, a);
			out.z = dot(z, a);
			out.w = dot(w, a);

			return out;
		}

		void operator =(const mat2& a) { this->x = a.x; this->y = a.y; }
		void operator =(const mat3& a) { this->x = a.x; this->y = a.y; this->z = a.z; }
		void operator =(const mat4& a) { this->x = a.x; this->y = a.y; this->z = a.z; this->w = a.w; }

		operator float* ()
		{
			values[0] = x.x;
			values[1] = x.y;
			values[2] = x.z;
			values[3] = x.w;

			values[4] = y.x;
			values[5] = y.y;
			values[6] = y.z;
			values[7] = y.w;

			values[8] = z.x;
			values[9] = z.y;
			values[10] = z.z;
			values[11] = z.w;

			values[12] = w.x;
			values[13] = w.y;
			values[14] = w.z;
			values[15] = w.w;
			return values;
		}
	};

	mat4 orthographic(float left, float right, float bottom, float top, float back, float front);
	mat4 perspective(float fov, float near, float far, float ratio = 1.0f);
	mat4 lookAt(vec3 at, vec3 eye, vec3 up = { 0, 1, 0 });
	mat3 eulerRotation(vec3 degree);

	mat4 transform(vec3 position, vec3 rotation);

	vec3 cutVec3(vec4 vec);
	vec2 cutVec2(vec4 vec);
	vec2 cutVec2(vec3 vec);

	mat2 cutMat2(mat4 matrix);
	mat2 cutMat2(mat3 matrix);
	mat3 cutMat3(mat4 matrix);
}

std::ostream& operator <<(std::ostream& os, ln::vec2 vec);
std::ostream& operator <<(std::ostream& os, ln::vec3 vec);
std::ostream& operator <<(std::ostream& os, ln::vec4 vec);

struct Vertex
{
	ln::vec3 position;
	ln::vec3 normal;
	ln::vec2 uv;
	ln::vec4 color;
};