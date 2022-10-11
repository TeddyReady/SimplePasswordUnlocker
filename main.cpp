#include <iostream>
#include <cstring>
#include "crc.h"
#include "crypto.h"
using namespace std;

int main(){
    const char* str("HelloWorld");
	hash_type hash = crc64(str, strlen(str));
	cout << hash << endl;
	return 0;
}