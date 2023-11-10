#include <stdio.h>
int main(void)
{
	
	int number = 10;
	
	FILE *cfPtr;
	cfPtr = fopen("number.dat", "w");
	
	
	if ( cfPtr == NULL)
			{
				printf("Cannot create file\n");
				return -1;
			}

	fprintf(cfPtr, "%d\n", number);
	fclose(cfPtr); 

	return 0;
}

