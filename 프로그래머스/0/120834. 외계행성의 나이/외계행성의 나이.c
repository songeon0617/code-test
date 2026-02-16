#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int age) {
    // 1. 자릿수 계산 (0일 때도 1자리로 처리)
    int temp = age;
    int len = (age == 0) ? 1 : 0;
    while (temp > 0) {
        temp /= 10;
        len++;
    }

    // 2. 메모리 할당 (길이 + 널 문자)
    char* answer = (char*)malloc(len + 1);
    answer[len] = '\0';

    // 3. 일의 자리부터 추출하여 배열의 뒷부분부터 채우기
    if (age == 0) {
        answer[0] = 'a';
    } else {
        for (int i = len - 1; i >= 0; i--) {
            answer[i] = (age % 10) + 'a'; // 나머지를 구해서 알파벳 변환
            age /= 10;                    // 일의 자리 제거
        }
    }

    return answer;
}