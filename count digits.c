#include<stdio.h>
int main(void)
{
	/*
	//how to count digits in a whole number
	
	int num, count;
	
	printf("Enter four digit number: ");
	scanf("%d", &num);
	
	
	while(num>0)
	{
		num = num/10;
		count++;
	}
	
	printf("Total digits are %d", count);
	*/
	
	//how to get only four digits number
	
	int num, count;
	
	printf("Enter a number: ");
	scanf("%d", &num);
		
	
		while(num>0)
		{
			num = num/10;
			count++;
		}
		
			printf("Total digits are %d", count);
		
		/*if(!(num>4)){
			
			printf("Invalid number! Try again.");
		}
		
	}while(num<=4);*/
	
	
	
	return 0;
}


