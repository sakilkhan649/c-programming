/*
#include<stdio.h>
int main(){
    int arr[5] = {12,45,7,93,28};
    int key = 93;// এই সংখ্যাটিকে আমরা অ্যারেতে খুঁজছি
    int i, found = 0;
    for (i = 0;i<5; i++){
        if(arr[i]== key){// যদি সংখ্যাটি মিলে যায়
            printf("Element found at index: %d\n",i);
            found = 1;// আমরা ডাটা পেয়ে গেছি তা মার্ক করে রাখলাম
            break;// ডাটা পেয়ে গেলে লুপ আর চালানোর দরকার নেই, তাই ব্রেক করলাম
        }
    }
    if(found == 0){
        printf("Element not found in the array.\n");
    }
    return 0;
}
*/
#include <stdio.h>
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int key = 70;

    int left = 0;
    int right = 9;
    int mid;
    int found = 0;

    while (left <= right){
        mid = (left + right) / 2;

        if (arr[mid] == key){
            printf("Element found at index: %d\n",mid);
            found = 1;
            break;
        }
        else if (arr[mid]< key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    if(found == 0){
        printf("Element not found!\n");
    }
    return 0;
}
