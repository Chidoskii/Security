/**********************
Chidi Okpara
Homework 4
May 7, 2020
Visual Studio 2019
This program will encrypt a string.
***********************/

#include "crypto.h"
const short int MAX = 133;

void Crypto::InputData()
{
	for (int x = 0; x < MAX ; x++)
	{
		InputDataBuffer[x] = '\0';
	}
	cout << "Enter a string to be encrypted:\n";
	cin.getline(InputDataBuffer, MAX);
	short InputDataCount = strlen(InputDataBuffer);
	cout << "char data count: " << InputDataCount << endl;
	cout << "Enter an 8-bit Key: \n";
	cin.getline(CryptoKey, 9);
}

void Crypto::Encrypt()
{
	for (int i = 0; i < MAX; i++)
	{
		int c = 0;
		CryptoMatrix[i] = InputDataBuffer[i] ^ CryptoKey[c];
		if (c < 7)
		{
			c++;
		}
		else
			c = 0;
	}
}

void Crypto::Decrypt()
{
	for (int i = 0; i < MAX; i++)
	{
		int c = 0;
		ClearMatrix[i] = CryptoMatrix[i] ^ CryptoKey[c];
			if (c < 7)
			{
				c++;
			}
			else
				c = 0;
	}
}


void Crypto::DisplayCryptoMatrix()
{
	cout << CryptoMatrix << endl;
}

void Crypto::DisplayClearMatrix()
{
	cout << ClearMatrix << endl;
}

int main()
{
	Crypto cryp;
	
	cryp.InputData();
	cryp.Encrypt();
	cryp.DisplayCryptoMatrix();
	cryp.Decrypt();
	cryp.DisplayClearMatrix();

	system("pause");
	return 0;
}