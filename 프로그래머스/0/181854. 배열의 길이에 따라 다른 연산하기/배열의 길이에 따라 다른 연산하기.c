#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int n) {
    // 1. 결과 배열을 원본과 똑같은 크기로 할당 (모든 요소를 담아야 하므로)
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    
    // 2. 일단 원본 배열의 모든 내용을 answer에 복사
    for (int i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }

    // 3. 문제의 조건에 따라 특정 위치에만 n을 더함
    if (arr_len % 2 != 0) {
        // 배열 길이가 홀수라면: 짝수 인덱스(0, 2, 4...)에 n 더하기
        for (int i = 0; i < arr_len; i += 2) {
            answer[i] += n;
        }
    } else {
        // 배열 길이가 짝수라면: 홀수 인덱스(1, 3, 5...)에 n 더하기
        for (int i = 1; i < arr_len; i += 2) {
            answer[i] += n;
        }
    }

    // 모든 요소가 담긴 answer 반환
    return answer;
}