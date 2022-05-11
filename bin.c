#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*fp;
	fp=fopen("/users/user/Desktop/file.exe","wb");
	fprintf(fp,"This is a binary file");
	fclose(fp);
	return 0;
	
	
		
	}
}
