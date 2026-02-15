#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int len = num_list_len;
    int* p = malloc(len*4);
    
    int* answer = (int*)malloc((len-5)*4);
    for(int i =0; i<len; i++){
        p[i] = num_list[i];
    }
    for(int i =0; i< len -1; i++){
        for(int j=0; j < len -1 -i; j++){
            if(p[j]>p[j+1]){
                int temp =0;
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    int k = len-5;
    for(int i =0; i < len -5; i++){
        
        answer[i]=p[i+5];
        
        
    }
    free(p);
    return answer;
}