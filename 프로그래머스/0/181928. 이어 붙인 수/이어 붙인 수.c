#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int len = num_list_len;
    int sum1[1000];
    int sum2[1000];
    int count1 = 0;
    int count2 = 0;
    int sum11 = 0;
    int sum22 = 0;
 
    
    for(int i = 0; i< len; i++){
        if(num_list[i]%2==0){
            sum1[count1] = num_list[i];
            count1++;
        }
         else{
            sum2[count2] = num_list[i];
            count2++;
        }
    }
   count1--;
    count2--;
    int k = 1;
    while (count1>-1){
        sum1[count1] = sum1[count1]*k;
        sum11=sum11+sum1[count1];
        k=k*10;
        count1--;
    }
    
    int y = 1;
    while (count2>-1){
        
        sum2[count2]=sum2[count2]*y;
        sum22=sum22+sum2[count2];
        y=y*10;
        count2--;
    } 
    
        
    
    answer = sum11 + sum22;
    return answer;
}