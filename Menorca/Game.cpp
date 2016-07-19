#include "Game.h"

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(this->testRect);
}

Game::Game()
{
	
	this->testRect.setSize(sf::Vector2f(200,200));
	this->testRect.setFillColor(sf::Color(0,0,255));
}

Game::~Game()
{
}

void Game::update(float dt)
{
}


