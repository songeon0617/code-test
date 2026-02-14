#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = num_list_len;
    
    int count = 0;
    int j = 0;
    int k = 0;
   
    while(len>k){
        count++;
        k=k+n;
    }
    
    int* answer = (int*)malloc(count*sizeof(int));
    
    for(int i =0; i< count; i++){
        
        answer[i]=num_list[j];
        j=j+n;
    }
    return answer;
}