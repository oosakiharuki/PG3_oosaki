#pragma once
#include "Enemy.h"

class Suraimu : public Enemy{
public:
	Suraimu();
	~Suraimu()override;

	void Attack() override;

private:
};