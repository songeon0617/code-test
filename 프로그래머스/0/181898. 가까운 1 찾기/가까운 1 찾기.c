#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len, int idx) {
    // 입출력 예 #3에 따라 idx 자기 자신부터 검사를 시작합니다.
    for (int i = idx; i < (int)arr_len; i++) {
        // 1을 발견하면 그 즉시 해당 인덱스 i를 반환합니다.
        if (arr[i] == 1) {
            return i;
        }
    }
    
    // 반복문이 끝날 때까지 1을 찾지 못하면 -1을 반환합니다.
    return -1;
}