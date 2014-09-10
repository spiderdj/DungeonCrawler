#include "stdafx.h"
#include "GameCore.h"


GameCore::GameCore()
{
}


GameCore::~GameCore()
{
}

void GameCore::Run()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Dungeon Crawler");

	sf::View view(sf::FloatRect(0, 0, 1280, 720));
	window.setView(view);

	sf::Clock updateClock;

	while (window.isOpen())
	{
		ProcessEvents(&window);


		const float minUpdateTime = 0.008333333;
		float deltaTime = updateClock.getElapsedTime().asSeconds();
		updateClock.restart();
		while (deltaTime >= minUpdateTime)
		{
			Update(minUpdateTime);
			deltaTime -= minUpdateTime;
		}

		Draw(&window);
	}
}

void GameCore::Update(float deltaTime)
{
	if (currentScreen != 0)
		currentScreen->Update(deltaTime);
}

void GameCore::Draw(sf::RenderWindow* window)
{
	window->clear(sf::Color::Magenta);

	if (currentScreen != 0)
		currentScreen->Draw(window);

	window->display();
}

void GameCore::ProcessEvents(sf::RenderWindow* window)
{
	sf::Event sfEvent;
	while (window->pollEvent(sfEvent))
	{
		switch (sfEvent.type)
		{

		case sf::Event::Closed:
			window->close();
			break;

		default:
			break;
		}
	}
}

void GameCore::ChangeScreen(Screen* newScreen)
{
	currentScreen = newScreen;
}
