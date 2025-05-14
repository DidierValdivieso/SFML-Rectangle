# 🎨 SFML Rectangle

This is a small C++ project using the SFML library that renders a rectangle on the screen. It's an introduction to creating 2D graphics with SFML.

## 📸 Screenshot

![Captura](https://github.com/user-attachments/assets/eb583551-31a3-4aa6-9538-d018765b4f0f)

## 🛠️ Technologies Used

- **Language:** C++

- **Graphics:** SFML 2.6

- **Recommended IDE:** Visual Studio 2022

## 📦 Installation and Runtime

### 🔧 1. Install SFML

Make sure you have SFML installed on your system. If you don't have it yet, you can download it from the SFML Official Site.

### 📥 2. Clone this repository
```sh
 git clone https://github.com/TuUsuario/SFML-Rectangle.git
 cd SFML-Rectangle
```

### ▶️ 3. Compile and run

If you're using g++, compile with:
```sh
g++ main.cpp -o app -lsfml-graphics -lsfml-window -lsfml-system
./app
```

If you use CMake, run:
```sh
mkdir build && cd build
cmake .. && make
./app
```

## 📜 Main source code

```sh
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
```
## 🚀 Future Improvements

- Add motion to the rectangle with keyboard events.

- Implement collision detection.

- Add textures and animated sprites.


## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

