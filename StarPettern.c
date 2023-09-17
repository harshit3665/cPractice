#include<stdio.h>
int main()
{
    int row,column,lines;
    
    printf("enter the no of lines=");
    scanf("%d",&lines);
    for( row=1;row<=lines;row++)
    {
        for(column=1;column<=row;column++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
    
}