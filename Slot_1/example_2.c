#include<stdio.h>

int main(){
	int a=10;
	char c = 'C';
	long l = 10.90;
	float f = 3.2f;
	
	printf("Bien a: o dia chi: %u co gia tri: %d kich thuoc: %d\n", &a, a, sizeof(a));
	printf("Bien c: o dia chi: %u co gia tri: %c kich thuoc: %d\n", &c, c, sizeof(c));
	printf("Bien l: o dia chi: %u co gia tri: %d kich thuoc: %d\n", &l, l, sizeof(l));
	printf("Bien f: o dia chi: %u co gia tri: %.1f kich thuoc: %d\n", &f, f, sizeof(f));
}
