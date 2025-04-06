#include <stdio.h>


int addition(int numberone, int numbertwo) {
    return numberone+numbertwo;
}


int subtraction(int numberone, int numbertwo) {
    return numberone-numbertwo;
}


int multiplication(int numberone, int numbertwo) {
    return numberone*numbertwo;
}




int division(int numberone, int numbertwo) {
    return numberone/numbertwo;
}

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
       result = addition(num1, num2);

    break;


    case'-':

        result=subtraction(num1, num2);

    break;


    case'*':

        result= division(num1, num2);


    break;



    case'/':

        if(num2 !=0){
            result = division(num1, num2);
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