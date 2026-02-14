#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    int answer = 0;
    int len1  =strlen(my_string);
    int len2 = strlen(is_prefix);
    int count = 1;
    for(int i =0; i< len2; i++){
        if(my_string[i]==is_prefix[i]){
         
            count++;
        }
        
    }
    count=count-1;
    if(count==len2) answer =1;
    else answer = 0;
    
    if(len2> len1) answer =0;
    return answer;
}