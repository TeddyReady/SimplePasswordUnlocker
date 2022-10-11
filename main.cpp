#include <iostream>
#include <cstring>
#include "crc.h"
using namespace std;

int main(){
    const char* str("HelloWorld");
	cout << crc64(str, strlen(str)) << endl;
	return 0;
}