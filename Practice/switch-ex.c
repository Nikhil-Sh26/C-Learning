#include <stdio.h>
int main()
{
   int day;
   printf("Enter a number between 1 and 7:");
   scanf("%d", &day);
   
   switch(day){
    case 1:
        printf("Today is Monnday\n");
        break;

    case 2:
        printf("Today is Tuesday\n");
        break;

    case 3:
        printf("Today is Wednesday\n");
        break;

    case 4:
        printf("Today is Thursday\n");
        break;
    
    case 5:
        printf("Today is Friday\n");
        break;

    case 6:
        printf("Today is Saturday\n");
        break;

    case 7:
        printf("Today is Sunday\n");
        break;

    default:
        printf("You enter a wrong input\n");
   } 
    return 0;
}
