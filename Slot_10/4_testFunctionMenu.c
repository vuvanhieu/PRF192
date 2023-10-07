#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void input(double a[], int &n) {

}
void display(double a[], int n) {

}

int search(double a[],int n, double x) {

	
}

void dele(double a[], int &n, int k) {

}

void dele(double a[], int &n, double x) {

}
int maxPos(double a[], int n) {

}
void sort(double a[], int n) {


}
int main() {
 system("cls");
 double a[100]; int n, k; double x;
 int choice;
 while(1) {
		printf("\n");
		printf("1. Input data\n");
		printf("2. Display\n");
		printf("3. Search\n");
		printf("4. Delete position\n");
		printf("5. Delete value\n");
		printf("6. Sort data\n");
		printf("0. Exit\n");
        printf("Enter your selection (0 -> 6): ");
		scanf("%d",&choice);
		if(choice==0) break;
		switch(choice) {
			case 1: input(a,n);
			        break;
			case 2: display(a,n);
			        break;
			case 3: printf("Enter a value to be searched x = ");
			        scanf("%lf",&x);
			        k = search(a,n,x);
			        if(k==-1)
			         printf("Not found\n");
			         else
			          printf("Found at position %d\n",k);
				    break;
			case 4: printf("Enter a position to be deleted k = ");
			        scanf("%d",&k);
                    dele(a,n,k);
			        break;
			case 5: printf("Enter a value to be deleted x = ");
			        scanf("%lf",&x);
                	dele(a,n,x);
			        break;
			case 6: sort(a,n); break;
			default: printf("Your selection is incorrect\n"); 
				    break;
			
		}		
 }
 printf("\n");
 system("pause");
 return(0);
}
