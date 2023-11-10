#include<stdio.h>
int sqr(int no); // function declaration

int main(void)
{
	int no,ans;
	
	printf("Enter a number: ");
	scanf("%d", &no);
	
	ans = sqr(10);
	
	printf("The answer is %d", ans);
	
	printf("%d", sqr(5));
	


	return 0;
}

//function implementation

int sqr(int val)
{
	//"no" is the input
	//output is "noXno"
	
	int result;
	
	result = val*val;
	
	return result; // we can send the output value by using return
}
