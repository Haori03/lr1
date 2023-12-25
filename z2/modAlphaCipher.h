#pragma once
#include <iostream>
#include <string>
#include <algorithm>

class Cipher {
public:
    Cipher(int key) : key_(key) {}
    std::string encrypt(std::string text);
    std::string decrypt(std::string text);
private:
    int key_;
};
