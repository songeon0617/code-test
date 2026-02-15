#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* n_str) {
    int answer = 0;
    int sum = 0;
    int len =strlen(n_str);
    int k = len -1;
    for(int i =0; i < len; i++){
        sum=sum+(n_str[i]-'0')*(int)pow(10,(k--));
    }
    answer =sum;
    return answer;
}