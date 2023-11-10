#include<stdio.h>
int main(void)
{
	int num;
	
	printf("Enter your mark: ");
	scanf("%d", &num);
	
	printf("You entered %d, and your grade is ", num); // printing output
		if(num>100)
			printf("Invalid Mark!!");
			
		else if(num>=80)
		{
			printf("A grade");
		}
			
		else if(num>=60)
		{
			printf("B grade");
			}
			
		else if(num>=40)
		{
			printf("C grade");
			}		
			
		else if(num<40)
		{
			printf("F grade");
			}	
	
	return 0;
}
