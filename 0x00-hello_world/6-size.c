#include <stdio.h>


/**
 * main - Prints the size of various types based on 
 * the computer it is compiled and run on..
 * Return: always 0.
 */

int main(void)
{
	Printf("Size of a char:%zu byte(s)\n", sizeof(char));
	Printf("Size of an int:%zu byte(s)\n", sizeof(int));
       	Printf("Size of a long int:%zu byte(s)\n", sizeof(long int));
	Printf("Size of a long long:%zu byte\n", sizeof(long long int));
	Printf("Size of a float:%zu byte\n", sizeof(float));
	return (0);
}
