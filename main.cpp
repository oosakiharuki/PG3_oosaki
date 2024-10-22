#include <stdio.h>

#include "Enemy.h"

using namespace std;

int main(void) {

	Enemy* enemy = new Enemy();
	bool endFlag = false;
	
	printf("[行動する場合は0 : 止める場合は1]\n");
	while (!enemy->GetStop()) {
		enemy->Update();
	}

	delete enemy;

	return 0;
}