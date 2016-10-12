#include "GameEntity.h"

std::string GameEntity::GetName() const
{
  return m_name;
}

Point2D GameEntity::GetPosition() const
{
  return m_position;
}

void GameEntity::SetName(std::string const & name)
{
  m_name = name;
}

void GameEntity::SetPosition(Point2D const & point)
{
  m_position = point;
}

GameEntity::~GameEntity()
{

}
