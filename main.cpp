#include <stdio.h>
#include <windows.h>

#include <time.h>
int add(int a,int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

void Game(void) {
	printf("Start\n");
}

typedef void (*PFunc)(int*);

void DispResult(int* answer) {


	printf("answer %c\n", *answer);
	
	int Dice;
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	Dice = rand()%6 + 1;

	printf("ダイス %d\n", Dice);

	int result{};
	if (Dice == 1 || Dice == 3 || Dice == 5) {
		//result = char ("奇数");
		result = 1;

	}

	if (Dice == 2 || Dice == 4 || Dice == 6) {
		//result = char("偶数");
		result = 2;
	}


	if (*answer == result) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}

}

void setTimeout(PFunc p,int second,int answer) {
	Sleep(second * 1000);
	p(&answer);
}

int main(void) {

	const char* a  = "偶数";

	printf("%s\n", a);

	int answer;
	scanf_s("%d",&answer);


	void (*pfunc)();
	pfunc = Game;
	pfunc();

	PFunc p;
	p = DispResult;
	setTimeout(p, 3,answer);



	//printf("%p\n", Game);
	//printf("%p\n", *pfunc);



	//int l = 114;
	//int h = 514;

	//int (*calc)(int, int);

	//calc = add;
	//printf("%d\n", calc(l,h));

	//calc = sub;
	//printf("%d\n", calc(l, h));


	return 0;
}