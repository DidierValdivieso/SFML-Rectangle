🎨 SFML Rectangle
Este es un pequeño proyecto en C++ usando la biblioteca SFML que renderiza un rectángulo en pantalla. Es una introducción a la creación de gráficos en 2D con SFML.

📸 Captura de pantalla

![Captura](https://github.com/user-attachments/assets/eb583551-31a3-4aa6-9538-d018765b4f0f)

🛠️ Tecnologías utilizadas

Lenguaje: C++

Gráficos: SFML 2.6

IDE recomendado: Visual Studio 2022

📦 Instalación y ejecución


🔧 1. Instalar SFML

Asegúrate de tener SFML instalado en tu sistema. Si aún no lo tienes, puedes descargarlo desde SFML Official Site.

📥 2. Clonar este repositorio

 git clone https://github.com/TuUsuario/SFML-Rectangle.git
 cd SFML-Rectangle

▶️ 3. Compilar y ejecutar

Si usas g++, compila con:

g++ main.cpp -o app -lsfml-graphics -lsfml-window -lsfml-system
./app

Si usas CMake, ejecuta:

mkdir build && cd build

cmake .. && make

./app

📜 Código fuente principal

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Rectangle");
    sf::RectangleShape rectangle(sf::Vector2f(50.f, 50.f));
    rectangle.setFillColor(sf::Color::Cyan);
    rectangle.setPosition(320, 240);
    rectangle.setOrigin(rectangle.getSize().x / 2, rectangle.getSize().y / 2);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
        }
        window.clear(sf::Color::Black);
        window.draw(rectangle);
        window.display();
    }
    return 0;
}

🚀 Mejoras futuras

Añadir movimiento al rectángulo con eventos de teclado.

Implementar detección de colisiones.

Agregar texturas y sprites animados.


📄 Licencia

Este proyecto está bajo la licencia MIT - consulta el archivo LICENSE para más detalles.

