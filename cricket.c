#include<stdio.h>
int T20(float, int);
int main(){
	float r1;
	int o;
	printf("Enter the curent run rate : ");
	scanf("%f",&r1);
	printf("Number of overs played : ");
	scanf("%d",&o);
		
	T20(r1,o);
}
	
int T20(float r1,int o){
	float pre;
	pre= r1*o +(20-o)*r1;
	printf("predict the projected score for current run rate : %.2f\n",pre);
	
	float r2,pro;
	
	printf("Enter the project run rate : ");
	scanf("%f",&r2);
	
	pro = r1*o + r2*(20-o);
	
	printf("Projected score run rate %.2f: %.2f\n",r2,pro);
}