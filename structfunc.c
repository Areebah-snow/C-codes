#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int monthdate[12] ={31, 28,29,31,30,31,30,31,31,30,31,30,31};
int sum =0,i;

typedef struct
{
  int month;
  int date;
  int year;

    
}Month;


////function date with y,m,d parameters
int date(int year, int month, int day)
{
    //loops date
    for(i= 0; i<month -1; i++)
    {
        sum+=monthdate[i];
    }
    sum +=day;
    if(year % 4==0 && year %100 !=0 || year % 400 == 0)
    {
        if (month > 2)
        {
            sum = sum + 1;
        }
        else
        {
            sum = sum + 0;
        }
        
    }
    else{
        sum = sum + 0;
    }
   return sum;
}

/*int Date(Month mn{
    if(mn.date < 1 || mn.date > 31 })
    {
        printf("Invalid date");
    }
    if (mn.month <1 || mn.month>12)
    {
        printf("Month doesnt exist");
    }
}*/


int main(){

     Month mn;

    int sum;
    printf("Enter a day:\t");
    scanf("%d", &mn.date);
    printf("Enter month number: \t");
    scanf("%d",&mn.month);
    printf("Enter a year: \t");
    scanf("%d", &mn.year);

    sum = date(mn.year, mn.month, mn.date);

    printf("Total number of days in year is %d", sum);


    
  
    
    
    
     
   
}