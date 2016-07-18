#ifndef GAME_H
#define GAME_H
#include <SFML\Graphics.hpp>

class Game : public sf::Drawable
{
private:

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
	Game();
	~Game();

	void update(float dt);
};





#endif // !GAME_H
