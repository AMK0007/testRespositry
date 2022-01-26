# include <stdio.h>
int main(){
	int choice;
	float x,a,y;
	printf("Enter your choice(\n 0: square\n 1: circle\n 2: rectangle\n 3: right-angle triangle\n 4: parallelogram):\n  ");
	scanf("%d",&choice);

switch(choice){
	 case 0 :{
		printf("Enter side length: ");
	scanf("%f",&x);
		a=x*x;
		printf("Square area is %f",a);
	break;}
	 case 1:{
		printf("Enter side length: ");
	    scanf("%f",&x);
		a=x*x*3.142;
		printf("circles area is %f",a);
		break;}
	 case 2:{
	  printf("Enter side 1 length: ");
	scanf("%f",&x);
	printf("Enter side 2 length: ");
	scanf("%f",&y);
		a=x*y;
		printf("rectangles area is %f",a);
		break;}
	 case 3:{
		printf("Enter base length: ");
	scanf("%f",&x);
	printf("Enter height length: ");
	scanf("%f",&y);
		a=0.5*x*y;
		printf("right angle triangle a area is %f",a);
		break;}
	 case 4:{
		printf("Enter base length: ");
	scanf("%f",&x);
	printf("Enter height length: ");
	scanf("%f",&y);
		a=x*y;
		printf("Square area is %f",a);
		break;}
	default:
	 printf("Enter valid choice");
	}
	return 0;
	}
	
		
		
