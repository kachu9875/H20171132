#include "Bullet.h"

Bullet::Bullet(const LoaderParams* pParams) : SDLGameObject(pParams)
{

}

void Bullet::draw()
{
	SDLGameObject::draw();
}

void Bullet::handleInput()
{
	//Vector2D* vec = TheInputHandler::Instance()->getMousePosition();
	//m_velocity = (*vec - m_position) / 100;
	//if (TheInputHandler::Instance()->getMouseButtonState(LEFT))
	
		m_velocity.setX(1);
	
}

void Bullet::update()
{
	m_position.setX(m_position.getX() + 1);
	m_position.setY(m_position.getY());
	handleInput();
	
	m_currentFrame = int(((SDL_GetTicks() / 100) % 1));
	
	SDLGameObject::update();
}

void Bullet::clean()
{

}