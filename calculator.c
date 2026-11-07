#include<stdio.h>
void main()
{
    char ch;
    int num1, num2, num3;
    int choice;

    ch='y';
    do
    {
        printf("\n menu");
        printf("\n 1  addition");
        printf("\n 2 substraction");
        printf("\n 3 multiplication");
        printf("\n 4 division");
        printf("\n enter your choice");
        scanf("%d", & choice);
        switch(choice){
        
            case 1: printf("\n enter first number");
                    scanf("%d", & num1);
                    printf("\n enter second number");
                    scanf("%d", & num2);
                    num3= num1+num2;
                    break;
            case 2: printf("\n enter first number");
                 scanf("%d", & num1);
                 printf("\n enter second number");
                 scanf("%d", & num2);
                 num3= num1-num2;
                 break;
            case 3: printf("\n enter first number");
                    scanf("%d", & num1);
                    printf("\n enetr second number");
                    scanf("%d", & num2);
                    num3= num1 * num2;
                    break;
            case 4: printf("\n enter first number");
                    scanf("%d", & num1);
                    printf("\n enter second number");
                    scanf("%d", &num2);
                    num3= num1 / num2;
                    break;
                    default:printf("\n invalid choice");
                    break;
        }
         printf("\n result=%d", num3);
         printf("\n do you want to perform more operation?");
         scanf(" %c", &ch);
    
     


            

     } while (ch !='n');

    }