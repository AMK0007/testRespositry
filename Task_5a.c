#include <stdio.h>
int main(){
	int grade;
	printf("Enter your marks: ");
	scanf("%d",&grade);
	(grade>=75 && grade<=100)?printf("A"):(grade>=50 && grade<=74)?printf("B"):(grade<=49 && grade>=0)?printf("Fail"):printf("Enter valid grade");
	return 0;
	
	}
