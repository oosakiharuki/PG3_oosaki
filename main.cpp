#include <stdio.h>
#include <string>
#include <chrono>
#include <iostream>
#include <ctime>

int main() {

	std::string a = std::string(1000000, 'a');
	std::chrono::system_clock::time_point  start, end;

	
	start = std::chrono::system_clock::now();
	std::string test1 = a;
	end = std::chrono::system_clock::now();
	
	std::chrono::duration<double, std::micro> time = end - start;
	std::cout << "コピーでかかった時間" << time.count() << "us" << std::endl;



	std::string&& b = std::string(1000000,'a');
	std::chrono::system_clock::time_point  start2, end2;

	start2 = std::chrono::system_clock::now();
	std::string test2 = move(b);
	end2 = std::chrono::system_clock::now();

	std::chrono::duration<double, std::micro> time2 = end2 - start2;
	std::cout << "移動でかかった時間" << time2.count() << "us" << std::endl;

	return 0;
}