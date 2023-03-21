#include <iostream>
#include "linmath.h"


int main()
{
	ln::vec4 pos = { 0, 1, 0, 1 };
	ln::mat4 proj = ln::perspective(ln::radians(90), 0.1f, 20.0f);
	ln::mat4 view = ln::lookAt({1, 2, 0}, {0, -1, 0}, {0, 1, 0});
	ln::mat4 transform = ln::transform({2, 0, 0}, {45, 0, 0});
	ln::vec4 out = transform * pos;

	ln::vec2 test = {1, 0};
	float* out1 = test;
	//out1.x /= out1.w;
	//out1.y /= out1.w;
	//out1.z /= out1.w;
	std::cout << out1[0];
	return 0;
}