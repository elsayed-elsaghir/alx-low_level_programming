#include <stdio.h>
/**
* main - Entry Point
* Return: Alawys 0
*/
int main(void)
{
	printf("Size of a char: %d\n byte(s)", sizeof(char));
	printf("Size of an int: %d\n byte(s)", sizeof(int));
	printf("Size of a long int: %d\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %d\n byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
