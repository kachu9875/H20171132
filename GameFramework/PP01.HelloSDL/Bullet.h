#pragma once
#include "SDLGameObject.h"
#include "InputHandler.h"

class Bullet : public SDLGameObject
{
private:
	void handleInput();
public:
	Bullet(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean();
};