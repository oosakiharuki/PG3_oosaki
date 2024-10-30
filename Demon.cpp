#include "Demon.h"

Demon::Demon(){
	printf("デーモンが現れた\n");
}

Demon::~Demon(){
	printf("デーモンを倒した\n");
}

void Demon::Attack(){
	printf("デーモンの攻撃\n");
}
