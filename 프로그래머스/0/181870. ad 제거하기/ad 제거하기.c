#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* strArr[], size_t strArr_len) {
    // 1. 결과 문자열 포인터들을 담을 공간 할당 (포인터 배열 크기만큼)
    // char* 타입의 포인터가 strArr_len만큼 들어갈 수 있어야 합니다.
    char** answer = (char**)malloc(sizeof(char*) * strArr_len);
    
    int count = 0; // 실제 answer에 담긴 문자열의 개수

    for (size_t i = 0; i < strArr_len; i++) {
        // 2. strstr 사용법 수정: strstr(대상, 찾는문자열)
        if (strstr(strArr[i], "ad") != NULL) {
            continue;
        }

        // 3. 필터링된 문자열을 위한 메모리 할당 및 복사
        // answer[count]에 차곡차곡 쌓아야 합니다 (i를 쓰면 중간에 빈칸이 생김)
        answer[count] = (char*)malloc(strlen(strArr[i]) + 1);
        strcpy(answer[count], strArr[i]);
        count++;
    }

    // (선택 사항) 필요한 경우 결과를 반환할 때 크기를 재조정하거나 
    // 나중에 이 배열의 끝을 알기 위해 마지막을 NULL로 채울 수 있습니다.
    // answer[count] = NULL; 

    return answer;
}