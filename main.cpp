#include <iostream>
#include <chrono>
#include "crypto.h"
using namespace std;
using namespace std::chrono;

int main(){
	auto start = high_resolution_clock::now();

    const char* str("12345");

	cout << "Your Password is " << passTable(crc64(str, strlen(str))) << endl;
	
	auto finish = high_resolution_clock::now();
	cout << "The program works ... " << duration_cast<microseconds>( finish - start ).count() << " micro seconds" << endl;
	return 0;
}