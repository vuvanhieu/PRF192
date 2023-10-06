#include<stdio.h>
void doi_cho(int *a, int *b);

int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	printf("Ban dau: a=%d, b=%d\n", a, b);

	doi_cho(&a, &b);
	
	printf("Doi cho: a=%d, b=%d\n", a, b);
	return 0;
}

void doi_cho(int *a, int *b){
	int tg;
	
	tg = *a;
	*a = *b;
	*b = tg;
	
}
