#ifndef BOUNDINGBOXHANDLER_H
#define BOUNDINGBOXHANDLER_H
#include "BoundingBox.h"
#include <SFML\Graphics.hpp>

class BoundingBoxHandler : public sf::Drawable
{
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	BoundingBox** boundingBoxes;
	int nrOfBoundingBoxes;
	int size;

public:
	BoundingBoxHandler(int slots = 5);
	BoundingBoxHandler(BoundingBoxHandler& copy);
	virtual ~BoundingBoxHandler();//create copy constructor

	//returns indexPos
	int addBoundingBox(BoundingBox BB);

	//Sets all boundingboxes visability.
	void setVisebleOutline(bool visable);

	//calls the update Function
	//on all Bounding boxes
	void updateAll();

};

#endif // !BOUNDINGBOXHANDLER
