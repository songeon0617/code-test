#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    int len = strlen(myString);
    char*p=malloc(strlen(myString)+1);
    
    for(int i =0; i < len; i++){
        p[i]=myString[i];
        if(p[i] == 'A') p[i] = 'B';
        else p[i] = 'A';
    }
   p[len]='\0';
    char*p1=strstr(p,pat);
    if(p1!=NULL) answer =1;
    else answer =0 ;
    
    free(p);
    return answer;
}