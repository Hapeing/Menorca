#include "BoundingBox.h"

void BoundingBox::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	if (this->visableOutline)
	{
		target.draw(this->outline);
	}
}

BoundingBox::BoundingBox(H2f pos, H2f size)
{
	this->pos = pos;
	this->size = size;
	this->visableOutline = false;
}

BoundingBox::BoundingBox(H2f size, float posX, float posY)
{
	BoundingBox(H2f(posX, posY), size);
}

BoundingBox::BoundingBox(float posX, float posY, H2f size)
{
	BoundingBox(H2f(posX, posY), size);
}

BoundingBox::BoundingBox(float posX, float posY, float sizeX, float sizeY)
{
	BoundingBox(H2f(posX, posY), H2f(sizeX, sizeY));
}

//BoundingBox::BoundingBox(BoundingBox & copy)
//{
//	this->pos = copy.pos;
//	this->size = copy.size;
//	this->outline = copy.outline;
//	this->visableOutline = copy.visableOutline;
//}

BoundingBox::~BoundingBox()
{
}

void BoundingBox::update()
{
	this->outline.setPosition(this->pos.x, this->pos.y);
	this->outline.setSize(sf::Vector2f(this->size.x, this->size.y));
	this->outline.setFillColor(sf::Color(0, 255, 0, 0));
	this->outline.setOutlineThickness(-5);
	this->outline.setOutlineColor(sf::Color(255, 0, 255));
}
