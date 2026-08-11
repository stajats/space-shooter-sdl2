#pragma once
#include <SDL.h>
#include "Entity.hpp"

class Player:public Entity{
	private:
		int speed, reload;
		bool up, down, left, right, fire;
		bool bulletType;
		bool enterGame;
		bool die;
		int ammo;
	public:
		Player();
		void move(); //Overriding superclass move function
		void keyDown(SDL_KeyboardEvent* /*event*/);
		void keyUp(SDL_KeyboardEvent* /*event*/);
		void updateAmmo(int /*ammo*/);
		void setReload(int /*reload*/);
		void setBulletType(int /*type*/);
		void setEnterStatus(bool /*status*/);
		void setDieStatus(bool /*status*/);
		auto getAmmo() -> int;
		auto getReload() -> int;
		auto getBulletType() -> int;
		auto fireStatus() -> bool;
		auto enterStatus() -> bool;
		auto died() -> bool;
		void resetInput();
};