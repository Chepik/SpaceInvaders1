#include "Bullet.h"
#include <stdexcept>

uint Bullet::GetDamage() const
{
  return m_damage;
}

void Bullet::SetDamage(const uint & damage)
{
  m_damage = damage;
}

void Bullet::Update()
{
  std::runtime_error("Not implemented");
}
