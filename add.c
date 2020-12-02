#include<stdio.h>
int additior(int a,int b){
	int add;
	add=a+b;
	
	return add;
}
int main(){
	int a,b;
	printf("enter the first number:\n");
	scanf("%d",&a);
	printf("enter the secound number:\n");
	scanf("%d",&b);
	int result;
	result=additior(a,b);
	
	printf("result=%d",result);
	
	return result;
}