// Calculator 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operataion to perform. Format: a+b | a-b | a*b | a/b |" << endl;

	Calculator c;
	while (true)
	{
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0)
		{
			cout << "Dicision by 0 excetion" << endl;
			continue;
		}
		else
		{
			result = c.Calculate(x, oper, y);
		}
		cout << "Result is: " << result << endl;
	}

		return 0;
}