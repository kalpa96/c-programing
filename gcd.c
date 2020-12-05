#include<stdio.h>
#include<conio.h>
int find_gcd(int,int);
void main(){
	int n1,n2,gcd;
	
	printf("Enter the number n1 : ");
	scanf("%d",&n1);
	
	printf("Enter the number n2 : ");
	scanf("%d",&n2);
	gcd=find_gcd(n1,n2);	
	printf("The GCD value %d and %d = %d ",n1,n2,gcd);

}

int find_gcd(int x,int y){
	if(x>y){
		find_gcd(x-y,y);
	}
	else if(y>x){
		find_gcd(x,y-x);
	}
	else
		return x;
}