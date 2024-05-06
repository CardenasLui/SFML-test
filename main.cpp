#include <SFML/Graphics.hpp>
#include "Grid.hpp"
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(400, 400), "SFML works!");
    window.setFramerateLimit(60);

    Grid grid(10,10);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        grid.drawTo(window);
        window.display();
    }

    return 0;
}