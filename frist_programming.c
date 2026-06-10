#include<stdio.h>
/*
int main(){
    printf("My Name is Sakil");
    return 0;
}
*/
/*
int main(){
    int score = 100;
    float gpa = 3.85;
    char grade = 'A';

    printf("My Score is: %d\n",score);
    printf("My Gpa is: %f\n",gpa);
    printf("My Grade is: %c\n",grade);

    return 0;
}
*/
/*
int main(){
    int userAge;

    printf("Enter your age: ");

    scanf("%d",&userAge);

    printf("Wow! You are %d years old.\n",userAge);

    return 0;
}
*/
/*
# include <stdio.h>
int main(){
    int num1;
    int num2;
    int sum;
    printf("Enter value of num1 = ");
    scanf("%d",&num1);
    printf("Enter value of num2 = ");
    scanf("%d",&num2);
    sum=num1 + num2;
    printf("Result = %d",sum);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a;
    int b;
    int adition;
    printf("enter value of a = ");
    scanf("%d",&a);
    printf("enter value of b = ");
    scanf("%d",&b);
    adition=a-b;
    printf("Result = %d",adition);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);
    if(x>=0){
        printf("Positive Number");
    }else{
        printf("Nagative Number");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int i;
    for(i=1; i<=5;i++){
        printf("%d\n",i);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int i;
    for(i=2; i<=100;i=i+2){

        printf("%d\n",i);
    }
    return 0;
}
*/
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i%2==0){
            printf("Even number %d\n",i);
        }else{
            printf("Odd number %d\n",i);
        }
    }
    return 0;
}
