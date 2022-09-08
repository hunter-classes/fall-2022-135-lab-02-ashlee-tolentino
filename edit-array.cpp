/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2C

This program creates an array of 10 integers and it provides the user with an interface to edit any of its elements
*/

#include <iostream>

int main()
{
	int myData[10];
	for(int k = 0; k < 10; k++)
	{
		myData[k] = 1;
	}

	int i;
	int v;
	do
	{
		std::cout << std::endl;
		for(int j = 0; j < 10; j++)
		{
			std::cout << myData[j] << " ";
		}

		std::cout << "\n\nInput index: ";
		std::cin >> i;

		std::cout << "Input value: ";
		std::cin >> v;
		if(i >= 0 && i < 10)
		{
			myData[i] = v;
		}
	}
	while(i >= 0 && i < 10);
	std::cout << "\nIndex out of range. Exit." << std::endl;
	
	return 0;
}