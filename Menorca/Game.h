#ifndef GAME_H
#define GAME_H
#include "SpriteHandler.h"
#include "BoundingBoxHandler.h"

class Game : public sf::Drawable
{
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	BoundingBoxHandler BBHandler;
	SpriteHandler SHandler;

public:
	Game();
	~Game();

	void update(float dt);
};

#endif // !GAME_H
