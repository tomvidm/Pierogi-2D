#ifndef APPLICATION_H
#define APPLICATION_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

#include "engine/logger/Logger.h"

namespace engine {
    class Application
    {
    public:
        Application();
        void initWindow();
        void initLoop();
    private:
        sf::RenderWindow window;

        logger::Logger* loggerPtr = nullptr;
    };
}

#endif