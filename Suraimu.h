#pragma once
#include "Enemy.h"

class Suraimu : public IEnemy{
public:
	Suraimu();
	~Suraimu()override;

	void Attack() override;

private:
};