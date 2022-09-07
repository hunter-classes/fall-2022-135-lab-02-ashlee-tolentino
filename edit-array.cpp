/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2C

This program creates an array of 10 integers and it provides the user with an interface to edit any of its elements
*/

#include <iostream>

void printArray(int myData[10])
{
	for(int i = 0; i < 10; i++)
	{
		std::cout << myData[i] << " ";
	}
}

int main()
{
	int myData[10];

	for(int i = 0; i < 10; i++)
	{
		myData[i] = 1;
	}

	int i;
	int v;

	do
	{
		printArray(myData);
		std::cout << "\nInput index: " << std::endl;
		//int i;
		std::cin >> i;

		std::cout << "Input value: " << std::endl;
		//int v;
		std::cin >> v;

		myData[i] = v;
	}
	while(i >= 0 && i < 10);

	std::cout << "Index out of range. Exit." << std::endl;
	
	return 0;
}