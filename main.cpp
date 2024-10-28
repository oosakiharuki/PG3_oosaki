#include <stdio.h>

#include "Enemy.h"

using namespace std;

template<typename T1, typename T2>
class Min {
public:
	T1 numA;
	T2 numB;

	Min(T1 numberA, T2 numberB) :numA(numberA), numB(numberB) {}

	T1 Size() {
		if (numA > numB) {
			return static_cast<T1> (numA);
		}
		else {
			return static_cast<T1> (numB);
		}
	}
};


int main(void) {

	Min<int, int> answerA(1, 2);
	Min<float, float> answerB(4.5f, 4.2f);
	Min<double, double> answerC(1.0, 1.2);

	printf("%d\n", answerA.Size());
	printf("%0.1f\n", answerB.Size());
	printf("%0.1f\n", answerC.Size());


	Min<float, int> answerD(23.4f, 23);//intは最初(numA)にするべからず
	Min<float, double> answerE(20.01f, 20.05);
	Min<double, int> answerF(10.99, 11);

	printf("%0.1f\n", answerD.Size());
	printf("%0.2f\n", answerE.Size());
	printf("%0.1f\n", answerF.Size());

	return 0;
}