#include <stdio.h>

int main()
{
   printf("Prize Distribution\n\n");
   printf("Enter the Subject in Which you Passed \n\n For Maths:1\n For Science:2:\n For both:3\n\n");
   printf("Enter the Subject Number:");
   int sub; 
   scanf("%d", &sub);
   if(sub == 1) {
       printf("\nYou have passed in Maths.\nYou won a I Pad.\n");
   }
   else if(sub==2){
    printf("\nYou have passed in Science.\nYou won a I Phone.\n");
   }
    else if(sub==3){
        printf("\nYou passed in both Subjects.\nYou won a Macbook air.\n");
    }
    else {
        printf("\nYou have not Passed in any Subject.\nBetter luck for next time.\n");
    }
    printf("\nThank you for participating.\n");
 
    return 0;
}
