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
    // বাইনারি সার্চের প্রধান শর্ত: ডাটা ছোট থেকে বড় সাজানো থাকতে হবে
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int key = 70;// আমরা ৭০ কে খুঁজছি

    int left = 0;
    int right = 9;// অ্যারেতে ১০টি ডাটা, তাই শেষের ইনডেক্স ৯
    int mid;
    int found = 0;

    // যতক্ষণ বাম পাশ ডান পাশের চেয়ে ছোট বা সমান থাকবে, লুপ চলবে
    while (left <= right){
        mid = (left + right) / 2;// মাঝখানের ইনডেক্স বের করলাম

        if (arr[mid] == key){// যদি ডাটা মিলে যায়
            printf("Element found at index: %d\n",mid);
            found = 1;
            break;
        }
        else if (arr[mid]< key){// খোঁজার ডাটা যদি মাঝেরটার চেয়ে বড় হয়
            left = mid + 1;// বাম দিকের অর্ধেক বাদ, তাই left পয়েন্টার এগিয়ে আনলাম
        }
        else{// খোঁজার ডাটা যদি মাঝেরটার চেয়ে ছোট হয়
            right = mid - 1;// ডান দিকের অর্ধেক বাদ, তাই right পয়েন্টার পিছিয়ে দিলাম
        }
    }
    if(found == 0){
        printf("Element not found!\n");
    }
    return 0;
}
