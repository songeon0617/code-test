#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    //변수 설정
    int answer = 0;
    int sum=0;
    int len = strlen(s);
    int n = 0;
    char*p=malloc(strlen(s)+1);
    
    //
    if(s[0]>=49&&s[0]<=57) n=len-1;
    else n = len -1;
    
    for(int i=0; i<len;i++){
        p[i]=s[i];
        if((p[i]=='-')||(p[i]=='+')){
            n--;
            continue;
        }
        
        
        sum= sum + (p[i]-'0')*(int)pow(10,n--);
    }
    
    
    if(p[0]=='-') answer = sum*-1;
    else if (p[0]=='+') answer = sum*1;
    else answer=sum;
    
    p[len]='\0';
    return answer;
}