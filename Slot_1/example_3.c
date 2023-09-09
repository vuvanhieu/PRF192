#include<stdio.h>
int main(){
	int a=2, b=10, c=5;
	float x = 3.1;
	
	float y = a*x*x+b*x+c;
	printf("Gia tri bieu thuc cau a, y = %.3f",y);
	
	float z = (x*x+y*y)/(a+b);
	printf("Gia tri bieu thuc cau b, z = %.3f",z);
	
	getchar();
	return 0;
	
}
