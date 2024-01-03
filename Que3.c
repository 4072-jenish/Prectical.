/*

Q.3 Write all leap years from a given range into a text file
*/
#include<stdio.h>

main(){
	
	int a,b,i,leep;
	FILE *l;
	
	printf("Enter first year and last year :-");
	scanf("%d%d",&a,&b);
	
	l=fopen("leep.txt","w");
	if (l==NULL){
		  printf("not velid");
	}else{
		for(i=a;i<=b;i++){
			a+4==leep;
			printf("year %d",*l);
			printf("\n");
		}
	}
	
	
}
