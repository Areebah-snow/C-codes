#include <stdio.h>
#include <stdlib.h>

int main()
{

    ////POINTER file
  FILE  *readfile;

  ///char to accept user input
   char content;

   ///reads file
  readfile = fopen("newfile.txt", "r");
    //checks if file is empty
  if(readfile==NULL)
  {
      printf("Empty");
  }  

  //
  else
  {
      do
      {
              
          content = fgetc(readfile);

          putchar(content);

      } while (content !=EOF);
      

      fclose(readfile);

      printf("Successfully read!");
  }
}