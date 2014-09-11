#include "stdafx.h"
#include "Screen.h"


Screen::Screen(GameCore* core)
{
	gameCore = core;
	myView.reset(sf::FloatRect(0, 0, GameCore::resX, GameCore::resY));
}


Screen::~Screen()
{
	delete test;
}

void Screen::Update(float deltaTime)
{
	gameCore->currentWindow->setView(myView);
}

void Screen::Draw(sf::RenderWindow* window)
{	

}