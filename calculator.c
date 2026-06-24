#include<stdio.h>
int main(){

    float num1,num2,result;
    char operator;

    printf("======Simple Calculator=======\n");

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter operator (+,-,*,/):");
    scanf(" %c",&operator);

    printf("Enter second number: ");
    scanf("%f",&num2);

    switch (operator){
    case '+':
        result = num1 + num2;
        printf("Result %f + %f = %f\n",num1,num2,result);
        break;
         case '-':
        result = num1 - num2;
        printf("Result %f - %f = %f\n",num1,num2,result);
        break;
         case '*':
        result = num1 * num2;
        printf("Result %f * %f = %f\n",num1,num2,result);
        break;
        if(num2 == 0){
            printf("Error!");
        }else{
            case '/':
        result = num1 / num2;
        printf("Result %f / %f = %f\n",num1,num2,result);
        break;
        }

            default:
                printf("Use +,-,*,/");

    }
    return 0;
}
