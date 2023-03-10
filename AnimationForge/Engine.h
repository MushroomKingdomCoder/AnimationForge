#pragma once
#include "Window.h"
#include "Clock.h"
#include "Animation4ge.h"

class Engine
{
private:
	Window wnd;
	Keyboard& kbd;
	Mouse& mouse;
	Graphics& gfx;
	const Clock AppClock;
private:
	void UpdateModel();
	void ComposeFrame();
public:
	Engine();
	Engine(const Engine& engine) = delete;
	Engine operator =(const Engine& engine) = delete;
	void Go();
private:
	Animation4ge app; 
};
