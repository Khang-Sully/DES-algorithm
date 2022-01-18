// GenerateKeys.h
#ifndef GENE_KEYS_H
#define GENE_KEYS_H

// Include dependancies
#include <iostream>
#include <string>
using namespace std;

// Declared function
string shift_left_once(string key_chunk);
string shift_left_twice(string key_chunk);
void generate_keys(string key);

// Implement function
string shift_left_once(string key_chunk) {
    string shifted = "";
    for (int i = 1; i < 28; i++) {
        shifted += key_chunk[i];
    }
    shifted += key_chunk[0];
    return shifted;
}

string shift_left_twice(string key_chunk) {
    string shifted = "";
    for (int i = 0; i < 2; i ++) {
        for (int j = 1; j < 28; j++) {
            shifted += key_chunk[j];
        }
        shifted += key_chunk[0];
        key_chunk = shifted;
        shifted = "";
    }
    return key_chunk;
}

void generate_keys(string key) {
    
}

#endif