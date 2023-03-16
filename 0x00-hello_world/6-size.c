#include <stdio.h>
/**
 *main - this is the main function
 * Return : always 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char)); 
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of long: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
