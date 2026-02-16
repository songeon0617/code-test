#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_string) {
    int len = strlen(my_string);
    char** answer = (char**)malloc(len * 8); // 포인터 크기 반영
    
    for(int i = 0; i < len; i++){
        int a = len - i + 1; // 각 접미사의 길이에 맞춰 할당
        answer[i] = (char*)malloc(a);
        
        int k = 0;
        // j 루프를 수정하여 my_string의 i번째부터 끝까지 복사
        for(int j = i; j < len; j++){
            answer[i][k] = my_string[j];
            k++;
        }
        answer[i][k] = '\0'; // 문자열 끝에 null 추가
    }
    
    // 정렬 로직 (strcmp 사용 권장)
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - 1 - i; j++){
            if(strcmp(answer[j], answer[j+1]) > 0){
                char* temp = answer[j];
                answer[j] = answer[j+1];
                answer[j+1] = temp;
            }
        }
    }
    return answer;
}