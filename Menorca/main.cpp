#include <SFML/Graphics.hpp>
#include "Game.h"


int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	sf::RenderWindow window(sf::VideoMode(600, 400), "Hello world");
	Game game;

	sf::Clock clock;
	float dt = 0;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}


		dt = clock.restart().asSeconds();

		game.update(dt);

		window.clear();
		window.draw(game);
		window.display();
	}

	return 0;
}