#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])() {
	&Enemy::Flont,
	&Enemy::Attack,
	&Enemy::Back,
};

void Enemy::Flont() {
	printf("敵が接近\n");
}
void Enemy::Attack() {
	printf("敵の射撃\n");
}
void Enemy::Back() {
	printf("敵が後退\n");
}

void Enemy::Update() {
	
	if (count > 2) {
		count = 0;
	}
	
	int koudou;

	scanf_s("%d", &koudou);

	if (koudou == 0) {
		(this->*spFuncTable[count])();
	}

	if (koudou == 1) {
		stopFlag = true;
	}

	count++;

}