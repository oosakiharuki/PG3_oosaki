#include <stdio.h>

class Enemy {
public:

	void Flont();
	void Attack();
	void Back();

	void Update();

	bool GetStop()const { return stopFlag; }
private:
	static void (Enemy::* spFuncTable[])();
	int count = 0;
	bool stopFlag = false;
};