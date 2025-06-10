// for loop program for table 

#include <stdio.h>
int main()
{

    int i,tab;
    printf("Enter a no. for table:");
    scanf("%d", &tab);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n", tab, i, tab*i);
    }

    return 0;
    
}