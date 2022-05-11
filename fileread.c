#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE*fp;
	char c;
	fp = fopen("/users/user/Desktop/apple.txt", "r");
	if (fp==NULL)
	printf("/n fill absent");
	else
	{
		while (c != EOF)
		{
			c= getc(fp);
			putchar(c);
		}
		fclose(fp);
	}
	
	return 0;
	
}
