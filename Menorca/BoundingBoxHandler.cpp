#include "BoundingBoxHandler.h"

void BoundingBoxHandler::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < this->nrOfBoundingBoxes; i++)
	{
		target.draw(*this->boundingBoxes[i], states);
	}
}

BoundingBoxHandler::BoundingBoxHandler(int slots)
{
	this->size = slots;
	this->boundingBoxes = new BoundingBox*[slots];
	for (int i = 0; i < slots; i++)
	{
		this->boundingBoxes[i] = nullptr;
	}
	this->nrOfBoundingBoxes = 0;
}

BoundingBoxHandler::BoundingBoxHandler(BoundingBoxHandler & copy)
{
	this->nrOfBoundingBoxes = copy.nrOfBoundingBoxes;
	this->size = copy.size;

	for (int i = 0; i < this->nrOfBoundingBoxes; i++)
	{
		//this->boundingBoxes[i]* = copy.
	}
}

BoundingBoxHandler::~BoundingBoxHandler()
{
	for (int i = 0; i < this->nrOfBoundingBoxes; i++)
	{
		delete this->boundingBoxes[i];
	}
	delete[]this->boundingBoxes;
}

int BoundingBoxHandler::addBoundingBox(BoundingBox BB)
{
	this->boundingBoxes[this->nrOfBoundingBoxes++] = new BoundingBox(BB);
	return this->nrOfBoundingBoxes - 1;
}

void BoundingBoxHandler::setVisebleOutline(bool visable)
{
	for (int i = 0; i < this->nrOfBoundingBoxes; i++)
	{
		this->boundingBoxes[i]->visableOutline = visable;
	}
}

void BoundingBoxHandler::updateAll()
{
	for (int i = 0; i < this->nrOfBoundingBoxes; i++)
	{
		this->boundingBoxes[i]->update();
	}
}
