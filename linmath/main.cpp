#include <iostream>
#include "linmath.h"


int main()
{
	ln::vec3 pos = { 0, 1, 0 };
	ln::mat4 proj = ln::perspective(ln::radians(90), 0.1f, 20.0f);
	ln::mat4 view = ln::lookAt({1, 2, 0}, {0, 0, 0}, {0, 1, 0});
	ln::vec4 outPos = view * ln::vec4(pos);
	//outPos.x /= outPos.w;
	//outPos.y /= outPos.w;
	//outPos.z /= outPos.w;
	std::cout << outPos;
	return 0;
}