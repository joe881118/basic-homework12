    
#include <stdio.h>
#include<stdlib.h>
int main(void) 
{
	int A,B,X,Y,Z;
	printf("¿é¤J¼Æ¦r:");
	scanf("%d",&A);
	
	B=A;
	for(Y=1;Y<=B;Y++)
	{
    for(X=A;X<B;X++)
	printf(" ");
	for(Z=1;Z<=A;Z++)
	printf("*");
     printf("\n");
	A--;
    }
system("pause");
return 0;
}
