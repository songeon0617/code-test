#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int len = num_list_len;
    int count = 0;
    for(int i =0; i< len; i++){
       if(num_list[i]>=0) count++; 
       else {
           answer = i;
           break;
       }
    }
    
    if(count==len) answer = -1;
      
    return answer;
}