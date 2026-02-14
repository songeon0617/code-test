#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* n_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int len = strlen(n_str);
    
    if(n_str[0]!='0'){
        char* answer = (char*)malloc(len+1);
        for(int i =0; i< strlen(n_str);i++){
            answer[i]=n_str[i];
        }
        answer[strlen(n_str)] ='\0';
        return answer;
    }
    
    int count = 0;
    
    for(int i =0; i < len; i++){
        if(n_str[i]=='0') count++;
        else break;
    }
    int j = 0;
    char* answer = (char*)malloc(len-count+1);
    for(int i =count; i<len; i++){
        answer[j++]=n_str[i];
        if(j==len-count) break;
    }
    answer[len-count] ='\0';
    return answer;
}
