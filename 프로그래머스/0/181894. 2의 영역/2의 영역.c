#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int len = (int)arr_len;
    int a = -1; // 2가 발견되지 않았을 때를 구분하기 위해 -1로 초기화
    int b = -1;

    // 1. 첫 번째 2의 위치 찾기
    for (int i = 0; i < len; i++) {
        if (arr[i] == 2) {
            a = i;
            break;
        }
    }

    // 2. 마지막 2의 위치 찾기
    for (int i = len - 1; i >= 0; i--) {
        if (arr[i] == 2) {
            b = i;
            break;
        }
    }

    // 3. 2를 하나도 찾지 못한 경우 (a가 여전히 -1)
    if (a == -1) {
        int* fail = (int*)malloc(sizeof(int));
        fail[0] = -1;
        return fail;
    }

    // 4. 찾은 범위만큼 메모리 할당
    int count = b - a + 1;
    int* answer = (int*)malloc(count * sizeof(int)); // count * 4

    // 5. 원본 배열의 해당 범위 복사
    for (int i = 0; i < count; i++) {
        answer[i] = arr[a + i];
    }

    return answer;
}