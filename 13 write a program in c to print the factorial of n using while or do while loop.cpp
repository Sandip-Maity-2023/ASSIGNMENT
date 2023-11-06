#include<stdio.h>
int main(){
	int product=1,num;
	printf("enter the number whose factorial is to be calculated:\n");
	scanf("%d",&num);
	while(num>0){
		product=product*num;
		num--;
	}
	printf("The factorial of the number is:%d",product);
}
