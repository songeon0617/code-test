#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    int count = 0;
   
    for(int i = 0; i<len ; i++){
        if(my_string[i]>='0'&&my_string[i]<='9') count++; 
    }
    
    int* answer = (int*)malloc(count*4);
    
    int i = 0;
    for (int j =0; j<len;j++){
        if(my_string[j]>='0'&&my_string[j]<='9'){
         answer[i++]=my_string[j]-'0';
    
        }
    }
    
    for(int i =0; i<count-1;i++){
        for(int j =0; j< count -i - 1; j++){
            if(answer[j]>answer[j+1]){
                int temp = 0;
                temp =answer[j];
                answer[j]=answer[j+1];
                answer[j+1]=temp;
            }
        }
    }

    
    return answer;
}