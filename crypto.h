#ifndef _CRYPTO_
#define _CRYPTO_
#include <stdint.h>
#include <string>

typedef uint64_t hash_type;

std::string bruteForce(hash_type);
//With dictionnaire RockYou
std::string passTable(hash_type);
//For RegEx mask
std::string IlonMask(hash_type);

#endif