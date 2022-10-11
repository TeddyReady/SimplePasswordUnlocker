#include "crypto.h"

std::string bruteForce(hash_type control_hash){}

std::string passTable(hash_type control_hash){
    std::ifstream rockYou("rockyou.txt");
    std::string pass;
    while(rockYou){
        rockYou >> pass;
        if(crc64(pass.c_str(), strlen(pass.c_str())) == control_hash){
            return pass;
        }
    }
    return ("RockYou cannot broke your pass");
}

std::string IlonMask(hash_type control_hash){}
