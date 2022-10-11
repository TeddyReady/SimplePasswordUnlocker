#ifndef _CRYPTO_
#define _CRYPTO_
#include <stdint.h>
#include "crc.h"
#include <string>
#include <cstring>
#include <fstream>
#include <iostream>

typedef uint64_t hash_type;

std::string bruteForce(hash_type);
//With dictionnaire RockYou
std::string passTable(hash_type);
//With RegEx mask
std::string IlonMask(hash_type);

#endif