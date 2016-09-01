#ifndef BOUNDINGBOX_H
#define BOUNDINGBOX_H
#include "Structs.h"
#include <SFML\Graphics.hpp>

class BoundingBox : public sf::Drawable
{
public:
	bool visableOutline;
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	H2f pos;
	H2f size;
	sf::RectangleShape outline;

public:
	BoundingBox(H2f pos, H2f size);
	//DO NOT USE
	BoundingBox(H2f pos, float sizeX=0, float sizeY=0);
	//DO NOT USE
	BoundingBox(float posX, float posY, H2f size);
	//DO NOT USE
	BoundingBox(float posX=0, float posY=0, float sizeX=0, float sizeY=0);
	//BoundingBox(BoundingBox & copy);//needed??
	virtual ~BoundingBox();

	void update();
	
};

#endif // !BOUNDINGBOX_H
