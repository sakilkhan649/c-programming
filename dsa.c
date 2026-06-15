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
