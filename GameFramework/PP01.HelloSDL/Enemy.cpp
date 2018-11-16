#include "Enemy.h"

void Enemy::update()
{
	GameObject::update();
	m_y += 1;
	m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}
void Enemy::load(int x, int y, int width, int height,
	std::string textureID)
{
	GameObject::load(x, y, width, height, textureID);
}

void Enemy::draw(SDL_Renderer* pRenderer)
{
	GameObject::draw(pRenderer);
}
void Enemy::clean()
{
	m_x -= 1;
}