#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size=1000;

    ///stores userinput
    char userinput[size];
    ///pointer newfile
    FILE *newfile;

    ////creates file and writes to it
    newfile =fopen("newfile.txt", "w");

    ////checks if file exists
    if(newfile == NULL){
        printf("Unable to open file");
    }
    else{
        printf("File exists\n");
    }


    ///accepts user input
    printf("Enter anything: \n");
    fgets(userinput, size , stdin);
     

     //transfer to file
    fputs(userinput, newfile);
     
     ////closes file
    fclose(newfile);


    ///confirms program
    printf("Saved");
}