#include <SFML/Graphics.hpp>


int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	sf::RenderWindow window(sf::VideoMode(600, 400), "Hello world");

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





		window.clear();
		window.display();
	}

	return 0;
}