#include <iostream>
#include "Header/DNS_Laws_Of_Physics.hpp"
#include "SFML/Graphics.hpp"
int main()
{

	DNS_PhysicsEngine::Vector2D myVector(10, 10);

	std::cout << "x: " << myVector.x;
    sf::RenderWindow window(sf::VideoMode(800, 800), "Test");
    sf::Event e;
    while (window.isOpen()) {
        while (window.pollEvent(e)) {
            if (e.type == sf::Event::Closed)
                window.close();
        }
    }
    return 0;
}