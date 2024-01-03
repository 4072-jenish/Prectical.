/*
WAP to print all boundary elements of a given 2D array
*/

#include<stdio.h>
main(){
	
	int a[100][100];
	int i,j,n,k;
	
	printf("Enter size of Array :-");
	scanf("%d",&n);
	printf("Enter size of Array :-");
	scanf("%d",&k);
	
	for(i=0;i!=n;i++){
	  for(j=0;j!=k;j++){
		printf("Enter Element :-");
		scanf("%d",&a[i][j]);
	}
	printf("\n");
}
    for(i=0;i!=n;i++){
	  for(j=0;j!=k;j++){
	  	if(i==0 || i==n-1 ||j==0 || j==n-1){
		printf("%d",a[i][j]);
	}else{
		printf(" ");
	}
	}
   printf("\n");	
}
	
}
/*
Enter size of Array :-5
Enter size of Array :-5
Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1

Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1

Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1

Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1

Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1
Enter Element :-1

11111
1   1
1   1
1   1
11111
*/
