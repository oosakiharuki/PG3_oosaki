#pragma once
#include "Enemy.h"

class Demon : public IEnemy{
public:
	Demon();
	~Demon()override;

	void Attack() override;

private:
};