#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len = strlen(s);
    int mid = len / 2;
    char* answer;

    if (len % 2 == 0) {
        // 짝수일 때: 가운데 두 글자 (예: "qwer" -> "we")
        answer = (char*)malloc(3); // 2글자 + null
        answer[0] = s[mid - 1];
        answer[1] = s[mid];
        answer[2] = '\0';
    } else {
        // 홀수일 때: 가운데 한 글자 (예: "abcde" -> "c")
        answer = (char*)malloc(2); // 1글자 + null
        answer[0] = s[mid];
        answer[1] = '\0';
    }

    return answer;
}