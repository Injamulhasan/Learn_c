#include <stdio.h>
int main()
{
	printf("Size of short int is %ld bytes\n", sizeof(short int));//2
	printf("Size of int is %ld bytes\n", sizeof(int));//4
	printf("Size of long int is %ld bytes\n", sizeof(long int));
	printf("Size of float is %ld bytes\n", sizeof(float));
	printf("Size of double is %ld bytes\n", sizeof(double));
	printf("Size of long double is %ld bytes\n", sizeof(long double));
	printf("Size of char is %ld bytes\n", sizeof(char));
	return 0;
}
