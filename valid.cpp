/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2A

This program asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input. After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main() 
{
	std::cout << "Please enter an integer: " << std::endl;
	int n;
	std::cin >> n;
	
	while (n <= 0 || n >= 100)
	{
		std::cout << "Please re-enter: " << std::endl;
		std::cin >> n;
	}

	std::cout << "Number squared is " << n * n << std::endl;

	return 0;
}