#include "Application.h"

namespace engine {
    Application::Application()
    {
        loggerPtr = logger::Logger::getInstancePtr();
        loggerPtr->log("Application instantiated...\n");

        initWindow();
        initLoop();
    }

    void Application::initWindow()
    {
        window.create(sf::VideoMode(800, 600), "Pierogi2D");
    }

    void Application::initLoop()
    {
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                {
                    loggerPtr->log("Closing window.\n");
                    window.close();
                }
            }
        }
    }
}