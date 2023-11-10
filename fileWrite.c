#include<stdio.h>
int main(void)
{
	int empNo[3];
	char name[10];
	int attenStatus[7];
	
	FILE * cfPtr;
	
	cfPtr = fopen("attendance.dat", "w");
	
	if(cfPtr == NULL){
	
		printf("Can't create the file\n");
		return -1;
	}
	
	fprintf(cfPtr, "111\t", "Perera\t", "1 0 1 1 0 1 1", empNo, name, attenStatus);
	fprintf(cfPtr, "112\t", "Silva\t", "1 0 1 1 0 0 0", empNo, name, attenStatus);
	
	fclose(cfPtr);
	
	return 0;
}
