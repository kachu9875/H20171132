#include "Game.h"

int main(int argc, char* args[])
{
	Uint32 frameStart, frameTime;
	const int FPS = 60;
	const int DELAY_TIME = 1000.0f / FPS;
	cout << "game init attempt...\n";
	if (TheGame::Instance()->init("Chapter 1", 100, 100, 640, 480, false))
	{
		cout << "game init success!\n";
		while (TheGame::Instance()->running())
		{
			frameStart = SDL_GetTicks();
			TheGame::Instance()->handleEvents();
			TheGame::Instance()->update();
			TheGame::Instance()->render();
			frameTime = SDL_GetTicks() - frameStart;

			if (frameTime < DELAY_TIME)
			{
				SDL_Delay((int)(DELAY_TIME - frameTime));
			}
		}
	}
	else {
		cout << "game init failure - " << SDL_GetError() << "\n";
		return -1;
	}
	cout << "game closing...\n";
	TheGame::Instance()->clean();
	return 0;
}
