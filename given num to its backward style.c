#include<stdio.h>
#include<string.h>

int main(void)
{

//turn the given number to its backward 

	int X = 1245;
	
	printf("%d-%d-%d-%d\n", X % 1000 % 100 % 10, X % 1000 % 100 / 10, X % 1000 / 100, X / 1000);

	return 0;
}
