#pragma once

#ifndef ENGINE_H
#define ENGINE_H

class engine
{

public:
	static engine* getInstance()
	{
		return s_Instance = (s_Instance != nullptr) ? s_Instance : new engine();
	}


	////////////////////////////////////////////////////
	
	bool initialize();
	bool clean();
	void quit();

	void update();
	void render();
	void events();


	inline bool isRunning()
	{
		return m_isRunning;
	}

private:
	

	////////////////////////////////////////////////////
	engine();
	bool m_isRunning;
	static engine* s_Instance;

protected:

};


#endif //engine_h

