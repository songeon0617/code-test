#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rny_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(rny_string);
    char* ans = (char*)malloc(len+1);
    
    int count = 0;
    
    
    for(int i =0; i< len; i++){
        ans[i]=rny_string[i];
        if(ans[i]=='m') count++;
    }
    
    char* answer = (char*)malloc(len+count+1);
    int j =0;
     for(int i =0; i< len; i++){
        answer[j]=rny_string[i];
        if(answer[j]=='m'){
            
            answer[j]='r';
            j++;
            answer[j]='n';
            
        }
         j++;
    }
    
    answer[j]='\0';
    free(ans);
    return answer;
}