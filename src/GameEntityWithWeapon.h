#pragma once

#include "GameEntity.h"
#include "Movable.h"
#include "BulletManager.h"

class GameEntityWithWeapon: public GameEntity, public Movable
{
public:
  GameEntityWithWeapon() = default;
  GameEntityWithWeapon(std::string const & name)
    : GameEntity(name)
  {}
  GameEntityWithWeapon(Point2D const & position,
                       std::string const & name,
                       uint const & rate,
                       uint const & health)
    : GameEntity(position,name),
      m_rate(rate),
      m_health(health)
  {}
  virtual ~GameEntityWithWeapon();
  uint GetRate() const;
  uint GetHealth() const;
  BulletManager GetBulletManager() const;
  void SetRate(uint const & rate);
  void SetHealth(uint const & health);
  void SetBulletManager(BulletManager const & bulletmanager);
protected:
  uint m_rate = 0;
  uint m_health = 0;
  BulletManager m_bullet_manager;
};
