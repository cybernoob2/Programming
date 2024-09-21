#include<stdio.h>

void calc()
{
    int num1, num2,ans;
    char c;

    printf("Enter the first no. to be calculated:");
    scanf("%d",&num1);

    printf("Enter the second no. to be calculated:");
    scanf("%d",&num2);

    printf("Enter the operand to be used:");
    scanf(" %c",&c);

    switch(c)
    {
        case '+':
        ans = num1 + num2;
        printf("%d + %d = %d",num1, num2, ans);
        break;

        case '-':
        ans= num1 - num2;
        printf("%d - %d = %d",num1, num2, ans);
        break;

        case '*':
        ans = num1 * num2;
        printf("%d * %d = %d",num1, num2, ans);
        break;

        case '/':
        ans = num1 / num2;
        printf("%d / %d = %d", num1, num2, ans);
        break;

        default:
        printf("Please enter a correct operand!!");

    } 
}

int main ()
{
    char choice;
    do
    {
       calc();
       printf("\nWould you like to perform another calculaation(Y/N)?");
       scanf(" %c",&choice);
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
    
}