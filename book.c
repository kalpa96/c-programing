#include<stdio.h>

int main()
{
	int n;
	printf("Enter the page number: ");
	scanf("%d",&n);
	is_page(n);

}
void is_page(int n)
{
	if(n%2==0)
	{
		printf("page is Right hand side");
	}
	else{
			printf("page is Left hand side");
	}	
}