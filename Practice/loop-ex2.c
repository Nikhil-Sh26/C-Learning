//while loop program for print a table which user want
#include <stdio.h>
int main()
{
    int tab, i=1;
    printf("Enter a no. For Table:");
    scanf("%d", &tab);

    while(i<=10)
    {
        printf("%d * %d = %d\n", tab , i , tab*i);
        i=i+1;
    }
    return 0;
}