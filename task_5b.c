# include <stdio.h>
int main(){
	int grade;
	printf("Enter your marks: ");
	scanf("%d",&grade);
	if (grade>0 || grade<100){
		if (grade>=75 && grade<=100)
		printf("A");
		else if (grade>=50 && grade<=74)
		printf("B");
		else if (grade<=49 && grade>=0)
		printf("Fail");
	else printf("Enter valid grade");	
	}
	   return 0;
}
