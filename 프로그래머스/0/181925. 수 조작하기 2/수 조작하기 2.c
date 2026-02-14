#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = numLog_len;
    int sum = 0;
    char* answer = (char*)malloc(len*sizeof(int));
   
    for(int i = 0; i< len-1; i++){
        
        if(numLog[i+1]-numLog[i]==1) answer[i] = 'w'; 
        else if(numLog[i+1]-numLog[i]==-1) answer[i] = 's'; 
        else if(numLog[i+1]-numLog[i]==10) answer[i] = 'd'; 
        else if(numLog[i+1]-numLog[i]==-10) answer[i] = 'a'; 
        
    }
    answer[len-1]='\0';
    return answer;
}