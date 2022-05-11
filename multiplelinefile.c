#include<stdio.h>
#include<stdlib.h>


int main()
{
     FILE * fptr;
  int i,n;
  char str[100];
  char fname[20]="test.txt";
  char str1;
  
    printf("\n\n Write multiple lines in a text file and read the file :\n");
	printf("------------------------------------------------------------\n");   
	printf(" Input the number of lines to be written : ");
	scanf("%d", &n);
	printf("\n :: The lines are ::\n");
	fptr = fopen (fname,"w"); 
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
		}
  fclose (fptr);

}