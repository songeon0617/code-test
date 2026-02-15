#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int one=0;
    int two=0;
    int len = num_list_len;
    
    for (int i = 0; i < len; i++){
        
        
            if(i%2==0) two=two+num_list[i];
        
            else one=one+num_list[i];
        }
     
    
    if(one>=two) answer = one;
    else answer = two;
    return answer;
}