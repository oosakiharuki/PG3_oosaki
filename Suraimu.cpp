#include "Suraimu.h"

Suraimu::Suraimu() {
	printf("スライムが現れた\n");
}

Suraimu::~Suraimu() {
	printf("スライムを倒した\n");
}

void Suraimu::Attack() {
	printf("スライムの攻撃\n");
}