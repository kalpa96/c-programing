#include<stdio.h>
int factoril(int);
int main(){
	int a,fact;


	for(a=1;a<=10;a++){
	fact=factoril(a);
	printf("factoril of %d = %d\n",a,fact);
}
}
factoril(int n){
	int result;
	if (n==0)
	return 1;
	else
	result=n*factoril(n-1);
	return result;
}