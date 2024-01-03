
/*
Q.1 WAP to print all numbers that are divisible by both 3 & 5 from a given range using UDF.
*/
#include<stdio.h>

void div(){
    
	int a;
	
	printf("Enter Number :-");
	scanf("%d",&a);
		
	if (a%3==0 || a%5==0){
		printf("The number is divisible");
	}else{
	    printf("The number is not divisible");	
	}
	
}

main(){
	div();
}
/*
Enter Number :-15
The number is divisible

Enter Number :-11
The number is not divisible
*/
