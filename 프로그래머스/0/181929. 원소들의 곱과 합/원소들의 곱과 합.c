#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int sum1=0;
    int sum2=1;
    for(int i =0; i< num_list_len; i++){
        // 합제곱 > 원소 곱 = 1
        sum1=sum1+num_list[i];
        
        sum2=sum2*num_list[i];
    }
    sum1=sum1*sum1;
    if(sum1 > sum2) answer = 1;
    else answer = 0;
    return answer;
}