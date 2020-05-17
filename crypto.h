/**********************
Chidi Okpara
Homework 4
May 7, 2020
Visual Studio 2019
This program will encrypt a string.
***********************/

#pragma once
#include <iostream>

using namespace std;

class Crypto
{
	char InputDataBuffer[133];
	char CryptoKey[9];
	char CryptoMatrix[133];
	char ClearMatrix[133];
	short InputDataCount;

public:
	void InputData();
	void Encrypt();
	void Decrypt();
	void DisplayCryptoMatrix();
	void DisplayClearMatrix();
};
