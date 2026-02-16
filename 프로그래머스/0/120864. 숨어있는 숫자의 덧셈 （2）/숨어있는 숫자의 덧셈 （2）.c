#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int len = strlen(my_string);
   int sum = 0;
    int i = 0;
    while(i<len){
        if(my_string[i]>='0'&& my_string[i]<='9') {
            
            sum=sum*10+my_string[i]-'0';
           }
        else{
            answer=answer+sum;
            sum = 0;
        }
        i++;
    }
    answer=answer+sum;
    return answer;
}