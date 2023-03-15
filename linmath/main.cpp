#include <iostream>
#include "linmath.h"


int main()
{
	ln::vec3 pos = { 0, 1, 5 };
	ln::mat4 proj = ln::perspective(ln::radians(90), 0.1f, 20.0f);
	ln::vec4 outPos = proj * ln::vec4(pos);
	outPos.x /= outPos.w;
	outPos.y /= outPos.w;
	outPos.z /= outPos.w;
	std::cout << outPos;
	return 0;
}