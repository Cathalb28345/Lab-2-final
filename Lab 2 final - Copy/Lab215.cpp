// Lab215.cpp : Write a program which will input a string from the keyboard, and output the number of separate words, where a word is one or more 
//				characters separated by spaces. Your program should only count as words groups of characters in the ranges A..Z and a..z.

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

bool isChar(char Character)
{
	if (Character<65 || Character>122 || (Character>90 && Character<97))
		return false;
	else
		return true;
}

int main()
{
	string in;
	cout << "Enter string\n";
	getline(cin, in);
	in += " ";
	bool run = false, valid = false;
	int WordCount = 0, length = in.length();
	for (int i = 0; i<length; i++)
	{
		if (in[i] == ' ')
		{
			if (run && valid)
				WordCount++;
			run = false;
		}
		else
		{
			if (isChar(in[i]))
			{
				if (!run)
					valid = true;
			}
			else
				valid = false;
			run = true;
		}
	}
	cout << " The number valid words are: "<< WordCount  << " " ;
	system("pause");
}

