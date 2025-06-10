#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your Age is %d\n", age);

    if(age>=18){
        printf("You are eligible to vote.\n");
    } 
    else if(13<=age){
        printf("You are a teenager.\n");
    }
    else {
        printf("You are a child.\n");
    }
    return 0;
}
