#include <stdio.h>
int main()
{
    int day,number;

    printf("enter the number between 1 to 7\n");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("monday");
        break;
    
    case 2:
        printf("tuesday");
        break;
    
    case 3:
        printf("wednusday");
        break;
    
    case 4:
        printf("thursday");
        break;
    
    case 5:
        printf("friday");
        break;
    
    case 6:
        printf("saturday");
        break; 
    
    case 7:
        printf("sunday");
        break;
    
     default:
        printf("no day");
        break;
    }

    return 0;
}
