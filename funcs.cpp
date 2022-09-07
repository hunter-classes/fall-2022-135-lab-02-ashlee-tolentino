/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab2B

This program accepts two integer parameters (L represents lower limit and U represents upper limit) and then prints out all the integers in the range L <= i < U separated by spaces. It includes the lower limit, but exclude the upper limit
*/

#include <iostream>
#include "funcs.h"

void print_interval(int L, int U)
{
	for(int i = L; i < U; i++)
	{
		std::cout << i << " ";
	}
}