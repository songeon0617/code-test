#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int answer = 0;
    int len1 = strlen(my_string);
    int len2 = strlen(is_suffix);
    
    if(len2 > len1) return 0;
    
    if(strcmp(&my_string[len1-len2],is_suffix)==0) answer = 1;
    else answer = 0;
    return answer;
}