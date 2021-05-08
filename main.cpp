/*
String Reverser [C++]

Author : Unknown (https://github.com/tester-100/)
Created on :

Last modified by : Rishav Das (https://github.com/rdofficial/)
Last modified on : May 8, 2021

Changes made in the last modification :
1. Updated the source code of the program

Authors contributed to this project (Add your name below, if you ever contributed to this project) :
1. Unknown (github:https://github.com/tester-100/)
2. Rishav Das (github:https://github.com/rdofficial/, email:rdofficial192@gmail.com)
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string text, reverse = "";
	cout << "Enter the string : ";
	cin >> text;
	if (text.length() == 0) {
		cout << "[ String is empty ]" << endl;
		return 0;
	}
	for (int i = 0; i < text.length(); ++i) {
		reverse = reverse + text[text.length()-i-1];
	}
	cout << "Reverse of the string : " << reverse << endl;
	return 0;
}
