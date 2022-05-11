#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    FILE *lineread;
    int count = 0;
    char textfile[40], filech;
 
    printf("Enter file name: ");
    scanf("%s", textfile);
    lineread = fopen(textfile, "r");
   //extract character from file and store in filech
    filech = getc(lineread);
    while (filech != EOF)
    {
        //Count whenever new line is encountered
        if (filech == 'n')
        {
            count = count + 1;
        }
        //take next character from file.
        filech = getc(lineread);
    }

     //close file.
    fclose(lineread); 
    
    
   
    printf("This is a(n) %d line  file\n", count, textfile);
    return 0;
}
