#include "Game.h"

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(this->BBHandler, states);
}

Game::Game()
{
	BBHandler.addBoundingBox(BoundingBox(H2f(0, 0), H2f(200, 200)));
	BBHandler.setVisebleOutline(true);

}

Game::~Game()
{

}

void Game::update(float dt)
{
	this->BBHandler.updateAll();
}


