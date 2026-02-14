#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    int end = len-1;
    int temp = 0;
    
    char* answer = (char*)malloc(len+1);
    for(int i=0; i< len; i++){
        answer[i]=my_string[i];
    }
  
    for(int i=0; i<len/2; i++ ){
        temp= answer[i];
       answer[i]= answer[end];
        answer[end]=temp;
        end--;
    }
    answer[len]='\0';
    return answer;
}