#include<stdio.h>
#include<string.h>
int main()
{
	char n,A,Z,a,z;
	printf("Enter string: ");
	scanf("%s",n);
	
	if(n>= A && n<=Z)
	{
		printf("Uppercase");
	}
	else if(n>=a && n<=z)
	{
		printf("Lowercase");
	}
	else{
		printf("Not a letter");
	}
}