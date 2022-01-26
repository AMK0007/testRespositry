# include <stdio.h>
int main(){
	long fact=1;	int prime,n=2,i=1,choice,z;
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
	 z=a;
	switch (z%2){
		
		case 1:
			printf("\n It is an odd number");
			break;
		case 0:
		  printf("\n It is an even number");
		  break;	
		default : printf("Invalid input");
	}
start:
	switch (z%n==0){
	case 1:{
	printf("\n%d is not a prime number",z);
	break;
}
	case 0:{
	n++;
	switch (n<z){
	case 1: {
	goto start;
	break;
}
	case 0:{
	prime=0;
	switch (prime==0){
	case 1:{
	printf("\n%d is a prime number",z);
	break;
}
	case 0:{
    printf("\n%d is not a prime number",z);
	break;
}
}
	break;
}
}
	break;
}
}


  switch (z>=0 && z<=9) {
  
   case 1:{
	
   switch (z<0){
	case 1:{
	goto end;
	break;
}
	case 0:{
fast:
	fact=fact*i;
	i++;
	switch (i<=z){
	case 1:{
	goto fast;
	break;
}
	case 0:{
	printf("\nFactorial of %d is = %ld", z, fact);
 end:
break;
}
}
break;
}}break;
}
   case 0:
  	printf("\nnumber is not within given range");
  
}
return 0;	
}

