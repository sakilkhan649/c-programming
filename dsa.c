/*
#include <stdio.h>
#define MAX 5 // স্ট্যাকের সর্বোচ্চ সাইজ হবে ৫

int stack [MAX]; // ৫টি ঘরের একটি অ্যারে নিলাম
int top = -1; // শুরুতে স্ট্যাক খালি, তাই টপ এর মান -১

// ১. স্ট্যাকে ডাটা পুশ (Push) করার ফাংশন
void push(int value){
    if(top == MAX -1){
        printf("Stack Overflow! (stack full hoye geche)\n");
    }else{
        top++;// টপ এর মান ১ বাড়ালাম
        stack[top] = value;// নতুন ঘরে মানটি রেখে দিলাম
        printf("%d pushed into stack\n",value);
    }
}
// ২. স্ট্যাক থেকে ডাটা পপ (Pop) করার ফাংশন
void pop(){
    if(top == -1){
        printf("Stack Underflow!(Stack khaly,pop korar kichu nei)\n");
    }else{
        printf("%d popped from stack\n",stack[top]);
        top--;// টপ এর মান ১ কমিয়ে দিলাম
    }
}
int main(){
    // স্ট্যাকে ৩টি ডাটা পুশ করি
    push(10);
    push(20);
    push(30);

    // এবার একটি ডাটা পপ করি
    pop();

    return 0;
}
*/
/*
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// ১. কিউতে ডাটা যোগ করা (Enqueue)
void enqueue(int value){
    if(rear == MAX -1){
        printf("Queue Overflow! (line full hoye geche)\n");
    }else{
        if(front == -1) front = 0;// প্রথম ডাটা আসার সময় front-কে ০ করতে হয়
        rear++;
        queue[rear] = value;
        printf("%d added to queue\n",value);
    }
}

// ২. কিউ থেকে ডাটা বের করা (Dequeue)
void dequeue(){
    if(front == -1 || front>rear){
        printf("Queue Underflow!(line khaly)\n");
    }else{
        printf("%d removed from queue\n",queue[front]);
        front++;// সামনের পয়েন্টার ১ ঘর পিছিয়ে গেল, অর্থাৎ পরের জন লাইনের সামনে আসল
    }
}
int main(){
    // লাইনে ৩ জন দাঁড়াল
    enqueue(10);
    enqueue(20);
    enqueue(30);
    // এবার একজন টিকিট কেটে চলে গেল (Dequeue)
    dequeue();

    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>// malloc ফাংশন ব্যবহারের জন্য এই লাইব্রেরি লাগে
// নোডের কঙ্কাল তৈরি
struct Node{
   int data;
   struct Node *next;
};
int main(){
  // ১. ৩টি পয়েন্টার নিলাম যা নোডগুলোর ঠিকানা হোল্ড করবে
  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;
  // ২. Dynamic Memory Allocation (malloc) দিয়ে মেমোরির 'Heap' সেকশনে ৩টি বাক্স তৈরি করলাম
   head = (struct Node*)malloc(sizeof(struct Node));
   second = (struct Node*)malloc(sizeof(struct Node));
   third = (struct Node*)malloc(sizeof(struct Node));
   // ৩. প্রথম বক্সে ডাটা রাখলাম এবং সেটির সাথে দ্বিতীয় বক্সের লিঙ্ক করালাম
   head->data = 10;
   head->next = second;// প্রথম বক্সকে বললাম, তোমার পরে 'second' বাক্স আছে
   // ৪. দ্বিতীয় বক্সে ডাটা রাখলাম এবং সেটির সাথে তৃতীয় বক্সের লিঙ্ক করালাম
   second->data = 20;
   second->next = third;
   // ৫. তৃতীয় বক্সে ডাটা রাখলাম এবং এটিই শেষ বক্স, তাই next-এ NULL দিলাম
   third->data = 30;
   third->next = NULL;
   // ৬. এবার লিংকড লিস্টটি প্রিন্ট করে দেখার পালা
   struct Node *temp = head;// শুরু থেকে হাঁটা শুরু করব
   while (temp != NULL){
    printf("%d -> ",temp->data);
    temp = temp->next;// পরের নোডের ঠিকানায় চলে গেলাম
   }
   printf("NULL\n");
   return 0;

}
