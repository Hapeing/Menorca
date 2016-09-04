#include "Game.h"

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(this->BBHandler, states);
	target.draw(this->SHandler);
}

Game::Game()
{
	BBHandler.addBoundingBox(BoundingBox(H2f(0, 0), H2f(200, 200)));
	BBHandler.setVisebleOutline(true);
	this->SHandler.addSprite("Sprites/ugly_monster.png");
}

Game::~Game()
{

}

void Game::update(float dt)
{
	this->BBHandler.updateAll();
}


