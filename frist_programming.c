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
/*
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i%2==0){
            printf("Even number %d\n",i);
        }
        //else{
           // printf("Odd number %d\n",i);
       // }
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int x;
    for(x=1;x<=20;x++){
        if(x % 3 == 0){
            printf("%d\n",x);
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int marks[5]={85,90,60,40,70};
    int i;
    printf("My friends marks are:\n");
    for(i = 0;i< 5;i++){
        printf("Index %d = %d\n",i,marks[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int numbers[5]={10,20,30,40,50};
    int total = 0;
    int i;
    for(i=0;i<5;i++){
           total=total+numbers[i];
    }
    printf("Result= %d",total);
    return 0;
}
*/
/*
#include<stdio.h>
int add(int num1,int num2){
    int result = num1 + num2;
    return result;
}
int main(){
    int x = 50,y=30;
    int sum;

    sum = add(x,y);

    printf("The sum is: %d \n",sum);

    return 0;
}
*/
/*
#include <stdio.h>
int multiply(int num1,int num2){
    int result = num1 * num2;
    return result;
}
int main(){
    int n,m;
    int answer;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    printf("Enter value of m:\n");
    scanf("%d",&m);
    answer=multiply(n,m);
    printf("Result = %d",answer);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int x =5;// একটি সাধারণ ভেরিয়েবল
    int *ptr;// একটি পয়েন্টার ভেরিয়েবল (নামের আগে * দিতে হয়)

    ptr = &x;// x এর মেমোরি ঠিকানাটা ptr পয়েন্টারের ভেতর রেখে দিলাম

    printf("Value of x = %d\n",x);// সরাসরি x এর মান প্রিন্ট (আউটপুট: 5)
    printf("Address of x = %p\n",&x);// x এর মেমোরি ঠিকানা প্রিন্ট (%p দিয়ে অ্যাড্রেস দেখায়)

    printf("Value stored in ptr  = %p\n",ptr);// ptr এর ভেতর কী আছে? (x এর ঠিকানা)
    printf("Value at ptr address  = %p\n",*ptr);// ptr এর ভেতরের ঠিকানায় গিয়ে মান দেখা (আউটপুট: 5)

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int score =100;
    int *p;

    p = &score;// score এর ঠিকানা p-তে রাখা হলো
    *p = 200;// p এর ভেতরের ঠিকানায় গিয়ে মান বদলে ২০০ করে দেওয়া হলো

    printf("New score = %d\n",score);
    return 0;
}
*/
/*
#include<stdio.h>
// ১. এখানে আমরা 'Student' নামে আমাদের নিজস্ব একটা কাস্টম ডাটা টাইপ বানালাম
struct Student {
    int id;
    float cgpa;
    char grade;
};
int main(){
    // ২. এবার Student টাইপের একটা ভেরিয়েবল বা বাক্স তৈরি করলাম, যার নাম 's1'
    struct Student s1;
    // ৩. ডট (.) অপারেটর ব্যবহার করে s1 এর ভেতরের ঘরগুলোতে মান বসালাম
    s1.id = 683100;
    s1.cgpa = 3.85;
    s1.grade= 'A';

    printf("Student ID: %d\n",s1.id);
    printf("Student CGPA: %.2f\n",s1.cgpa);
    printf("Student Gread: %c\n",s1.grade);
}
*/
#include<stdio.h>
struct Book {
    int id;
    float price;
};
int main(){
    struct Book b1;

    printf("Enter Book Id: \n");
    scanf("%d",&b1.id);
    printf("Enter Price:\n");
    scanf("%f",&b1.price);

    printf("Your Book Id:%d\n",b1.id);
    printf("Your Book Price:%.0f\n",b1.price);

    return 0;
}
