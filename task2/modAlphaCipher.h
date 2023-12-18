#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <locale>
#include <codecvt>
#include <algorithm>
using namespace std;

class modAlphaCipher
{
private:
    int newkey; // столбцы

public:
    modAlphaCipher()=delete;
    modAlphaCipher(const int& key) :newkey(key) {};
    wstring encode(const wstring& open_row);
    wstring decode(const wstring& cipher_row);
};
