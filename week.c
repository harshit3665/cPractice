#include<stdio.h>
int main()
{
    int no;
    printf("enter the no in 1-7=");
    scanf("%d",&no);
    switch(no)
    {
        case 1:
        printf("\nsunday");
        break;

        case 2:
        printf("\nmonday");
        break;

        case 3:
        printf("\ntuesday");
        break;

        case 4:
        printf("\nwednesday");
        break;

        case 5:
        printf("\nthursday");
        break;

        case 6:
        printf("\nfriday");
        break;
         
         case 7:
         printf("\nsaturday");
         break;
         default:
         printf("\n please enter proper no.");
         break;

    }

    return 0;

}

// Bhawuk