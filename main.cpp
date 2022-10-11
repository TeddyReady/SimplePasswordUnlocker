#include <iostream>
#include "crypto.h"
using namespace std;

int main(){
    const char* str("BYaKa");

	cout << "Your Password is " << passTable(crc64(str, strlen(str))) << endl;
	return 0;
}