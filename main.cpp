#include <stdio.h>
#include <windows.h>

#include <time.h>
#include <functional>

using namespace std;

void Game(void) {
	printf("Start\n");
}

typedef void (*PFunc)(char);

void DispResult(char answer) {


	int Dice;
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	Dice = rand()%6 + 1;

	printf("結果 %d\n", Dice);

	char result{};
	if (Dice == 1 || Dice == 3 || Dice == 5) {
		result = *"奇数";
	}

	if (Dice == 2 || Dice == 4 || Dice == 6) {
		result = *"偶数";
	}


	if (answer == result) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}

}

void setTimeout(PFunc p,int second,char answer) {
	Sleep(second * 1000);
	p(answer);
}

int main(void) {
	
	printf("[奇数]もしくは、[偶数]を入力してください\n");
	
	char answer;
	answer = getchar();
	
	function<void()> fx = [&answer]() {
		scanf_s("%c", &answer);
	};
	fx();


	void (*pfunc)();
	pfunc = Game;
	pfunc();

	PFunc p;
	p = DispResult;
	setTimeout(p, 3,answer);



	//printf("%p\n", Game);
	//printf("%p\n", *pfunc);
	//printf("oosaki_haruki");

	return 0;
}