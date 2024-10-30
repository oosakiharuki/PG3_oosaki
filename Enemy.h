#pragma once
#include <stdio.h>

class IEnemy {
public:
	//Enemy();
	virtual ~IEnemy() = 0;
	virtual void Attack() = 0;	
protected:
	const char* name;
};