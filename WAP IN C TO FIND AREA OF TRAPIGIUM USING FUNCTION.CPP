#include<stdio.h>
int areaoftriangle(int a,int b){
	float area=0.5*a*b;
	return area;
}
int main(){
	int a,b;
	printf("ENTER THE HEIGHT:");
	scanf("%d",&a);
	printf("ENTER THE BASE:");
	scanf("%d",&b);
	float
	 area=areaoftriangle(a,b);
	printf("%.2f",area);
	return 0;
	
	
}
