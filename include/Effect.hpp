#pragma once
#include "Entity.hpp"

class Effect:public Entity{
	private:
		int r, g, b, a;
	public:
		void setRGBA(int /*r*/, int /*g*/, int /*b*/, int /*a*/);
		auto getR() -> int;
		auto getG() -> int;
		auto getB() -> int;
		auto getA() -> int;
		void updateA(int /*a*/);
};