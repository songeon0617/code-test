#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// arr1_len은 배열 arr1의 길이입니다.
// arr2_len은 배열 arr2의 길이입니다.
int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    int answer = 0;
    int len1 = arr1_len;
    int len2 = arr2_len;
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 0; i< len1; i++){
        sum1+=arr1[i];
    }
    
    for(int i = 0; i< len2; i++){
        sum2+=arr2[i];
    }
    
    if(len1>len2) answer =1;
   
    else if(len1==len2) {
         if(sum1>sum2) answer = 1;
    
       else if (sum1==sum2) answer =0;
    
       else {
        int k=-1;
        answer = k;
    }
   }
   
    else answer =-1;
  
    return answer;
}