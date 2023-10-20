#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char st[21];
	int n,i,j,k;
	do{
		gets(st);
	}while((strlen(st)<5 || strlen(st)>20)||(strlen(st)%2==0));
	n=strlen(st)/2;
	i=n-2; j=n+2;
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i=n-2;i<=j;i++){
		printf("%c",st[i]);
	}

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
