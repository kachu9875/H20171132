#pragma once
#include "Player.h"
#include "Enemy.h"

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }
private:
	int m_currentFrame;
	SDL_Window * m_pWindow = 0;
	SDL_Renderer* m_pRenderer = 0;
	bool m_bRunning = true;
	std::vector<GameObject*> m_gameObjects;
	GameObject* m_go;
	GameObject* m_player;
	GameObject* m_enemy;
};
