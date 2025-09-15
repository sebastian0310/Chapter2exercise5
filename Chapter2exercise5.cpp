/* Program File Name: Chapter2exercise5
Programmer: Sebastian Rollings
Date: September 2025
*/

#include <iostream>

int main()
{
	int variable1 = 28;
	int variable2 = 32;
	int variable3 = 37;
	int variable4 = 24;
	int variable5 = 33;

	std::cout << "First variable is 28:";
	std::cin >> variable1;
	std::cout << "Second variable is 32:";
	std::cin >> variable2;
	std::cout << "Third variable is 37:";
	std::cin >> variable3;
	std::cout << "Fourth variable is 24:";
	std::cin >> variable4;
	std::cout << "Fifth variable is 33:";
	std::cin >> variable5;

	int sum = variable1 + variable2 + variable3 + variable4 + variable5;
	double average = sum / 5;

	std::cout << "Average of all variables is:";
	std::cout << average;

	return 0;
}