#pragma once
#include "Enemy.h"

class Demon : public Enemy{
public:
	Demon();
	~Demon()override;

	void Attack() override;

private:
};