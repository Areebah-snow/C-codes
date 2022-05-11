#include <stdio.h>
#include <stdlib.h>

int pp();
int qq();


int main()
{
     FILE *fp;
    fp = fopen("text.txt", "w");
    if(fp==NULL)
    {
        printf("error!!\n");

    }
    int p,q;
    
    printf("enetr num1: \n");
    scanf("%d",&p);
    printf("enetr num2: \n");
    scanf("%d",&q);
    fprintf(fp,"%d\n",p);
    fprintf(fp,"%d",q);
    fclose(fp);
    
    pp();
return 0;
}

int pp(){
     FILE *fpq;
    fpq = fopen("text.txt", "r");
    if(fpq==NULL)
    {
        printf("error!!\n");

    }
    int p;
    fscanf(fpq,"%d",&p);
    printf("the new value of num2 is %d",p);
    fclose(fpq);
    
   
    return qq();
   
   
}
int qq(){
    FILE *fpr;
    fpr = fopen("text.txt", "r");
    if(fpr==NULL)
    {
        printf("error!!\n");

    }
    int p,q;
    fscanf(fpr,"%d",&p);
    fscanf(fpr,"%d",&q);
    printf("the new value of num1 is %d",q);
    fclose(fpr);
    
   
}