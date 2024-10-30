#include <stdio.h>
#include "Enemy.h"
#include "Suraimu.h"
#include "Demon.h"

int main(void) {

	IEnemy* enemies[3];
	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			enemies[i] = new Demon;
		}
		else {
			enemies[i] = new Suraimu;
		}
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		enemies[i]->Attack();
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		enemies[i]->~IEnemy();
	}

	return 0;
}