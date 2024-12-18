#include <stdio.h>
#include <string>
#include <thread>
#include <functional>
#include <iostream>

bool a = false;
bool b = false;
bool x = false;

void thread1() {	
	printf("thread1\n");
	a = true;
}

void thread2() {
	while (!a) {
		if (a) {		
			break;
		}
		else {
			continue;
		}
	}	
	printf("thread2\n");		
	b = true;
}

void thread3() {
	while (!b) {
		if (b) {
			break;
		}
		else {
			continue;
		}
	}
	printf("thread3\n");
}


int main() {


	std::thread th1(thread1);		
	std::thread th2(thread2);
	std::thread th3(thread3);
	
	
	th1.join();
	th2.join();	
	th3.join();


	return 0;
}