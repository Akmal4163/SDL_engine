#include <iostream>
#include "engine.h"




engine* engine::s_Instance = nullptr;

bool engine::initialize()
{
	/*if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
		std::cout << "SDL initialized" << std::endl;*/
	m_isRunning = true;
}

bool engine::clean()
{
	return true;
}

void engine::quit()
{

}

void engine::update()
{
	std::cout << "updating.." << std::endl;
}

void engine::render()
{

}

void engine::events()
{

}