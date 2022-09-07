/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2D

This program uses an array of integers to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

int main()
{
	int fib[60];
	fib[0] = 0;
	fib[1] = 1;

	for(int i = 2; i < 60; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for(int i = 0; i < 60; i++)
	{
		std::cout << fib[i] << std::endl;
	}

	return 0;
}

// When the numbers approach two billion, the program starts to print out values that are wrong. This is a result of integer overflow, which happens when a computation exceeds the maximum or minimum value that an int data type can hold.