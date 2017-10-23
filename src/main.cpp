
#include "engine/Application.h"
#include "engine/logger/Logger.h"

int main()
{
    engine::logger::Logger* logger = engine::logger::Logger::getInstancePtr();
    engine::Application application;

    return 0;
}