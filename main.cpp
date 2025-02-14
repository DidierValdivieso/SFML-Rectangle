#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(640, 480), "Renderizando rectangulo");

	// Creando figura.
	sf::RectangleShape rectangle(sf::Vector2f(50.0f, 50.0f));
	rectangle.setFillColor(sf::Color::Cyan);
	rectangle.setPosition(320, 240);
	rectangle.setOrigin(rectangle.getSize().x / 2, rectangle.getSize().y / 2);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(rectangle); // Dibujando figura.
		window.display();
	}
}