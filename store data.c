#include <stdio.h>
struct std{
	char firstName[50];
	int roll;
	float marks;
}s[5];

int main(void)

{
	int i;
	printf("Enter info of students:\n");
	
	//storing info
	for(i=0; i<3; ++i)
	{
		s[i].roll = i+1;
		printf("\nFor roll number%d, \n", s[i].roll);
		printf("Enter first name: ");
		scanf("%s", s[i].firstName);
		
		printf("Enter Marks: ");
		scanf("%f", &s[i].marks);
		
	}
	
	printf("Displaying Information:\n");
	
	//displaying info
	
for(i=0; i<3; ++i)
{
	printf("\nRoll number: %d\n", i+1);
	printf("First name: ");
	puts(s[i].firstName);
	
	printf("Marks: %lf", s[i].marks);
	printf("\n");
	
}
	
	return 0;
}
