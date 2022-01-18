// Encryption.h
#ifndef ENC_H
#define ENC_H

// Include dependancies
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Declared function
string DecToBinary(int dec);
int BinaryToDec(string binary);
string shift_left_once(string key_chunk);
string shift_left_twice(string key_chunk);
string Xor(string a, string b);
void generate_keys(string key);
string DES();

#endif