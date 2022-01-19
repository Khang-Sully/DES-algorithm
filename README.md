# Mã Hoá Ứng Dụng
An example for college. This is a very simple implementation of DES algorithm using [C++](https://www.cplusplus.com/). Include 3 part of a DES.
* [Generate Keys](#1.-generate-keys)
* [Encryption](#2.-encryption)
* [Decryption](#3.-decryption)
## 1. Generate keys
Generate 16 keys using 2 pc table to create different keys. Key in main function using to make an example for user to understand clearly.
### Usage
- Generate keys has 3 files, include: main file, a function and a header file.
- To run the example using Command Prompt. Make sure that user have already install [MinGW C++](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html):
```
g++ -o [main.exe path] [main.cpp path] (optional)[function.cpp path]
```
- If you are using [Visual Studio](https://visualstudio.microsoft.com/) 2015, 2017, 2019 or 2022. You will don't need those steps
- You just need to download all the cpp and h files.
## 2. Encryption
This part demonstrate 2 parts of the DES algorithm. Include generate keys and also encryption. The plain text has been transposed, divided into two halves, and undergone 16 rounds of encryption. It has been combined and transposed again, which​ undoes the effect of the first transposed function to obtain the ciphertext.
### Usage
- Encryption part has 2 files, include: main file is also the function file and a header file.
- To run the example using Command Prompt. Make sure that user have already install [MinGW C++](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html):
```
g++ -o [main.exe path] [main.cpp path] (optional)[function.cpp path]
```
- If you are using [Visual Studio](https://visualstudio.microsoft.com/) 2015, 2017, 2019 or 2022. You will don't need those steps
- You just need to download all the cpp and h files.
## 3. Decryption
## Credit
[Educative.io - How to implement the DES algorithm in C++](https://www.educative.io/edpresso/how-to-implement-the-des-algorithm-in-cpp)