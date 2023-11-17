#pragma once
#include <iostream>
class Component
{
private:
	bool display;
	bool camera;
	bool proccesor;
public:
	Component(bool display, bool camera, bool proccesor) {
		this->display = display;
		this->camera = camera;
		this->proccesor = proccesor;
	}
	bool getDisplay() {
		return display;
	}
	bool getCamera() {
		return camera;
	}
	bool getProccesor() {
		return proccesor;
	}
};

