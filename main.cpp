#include <SFML/Window.hpp>

using namespace sf;

int main() {
    Window window(VideoMode(800, 600), "");

    while (window.isOpen()) {
        Event evt;
        while (window.pollEvent(evt)) {
            if (evt.type == Event::Closed) {
                window.close();
            }
        }

        window.display();
    }

    return 0;
}
