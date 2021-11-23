
#include<iostream>

#include "engine.h"






int main(int argc, char* argv[])
{

	
	//////////////////////////////////////////

	engine::getInstance()->initialize();
	
	while (engine::getInstance()->isRunning())
	{
		engine::getInstance()->events();
		engine::getInstance()->update();
		engine::getInstance()->render();
	}

	//=========CLEAN=======//
	engine::getInstance()->clean();


	return 0;
}