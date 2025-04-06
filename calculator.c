#include <stdio.h>

int main(){
 char operator;
 int num1;
 int num2;
 int result;


 printf("Simple Calculator App By ptrykb101 \n");
 printf("Select an operator (+, - , * ,/): ");

scanf(" %c", &operator);

printf("Enter 2 Numbers: ");

scanf("%d %d", &num1, &num2);

switch (operator){
    case'+':
        result= num1 + num2;


    break;


    case'-':

        result= num1 - num2;

    break;




    case'*':

        result= num1 * num2;


    break;



    case'/':

        if(num2 !=0){
            result = num1 / num2;
        } else {
            printf("ILLEGAL");
            return 1;
        }

    break;

    default:
        printf("Inavlid");

        return 1;
}


printf("Result %d\n", result);
























    return 0;
}