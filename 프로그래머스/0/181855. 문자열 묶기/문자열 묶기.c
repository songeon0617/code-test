#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* strArr[], size_t strArr_len) {
    // 문자열의 길이는 최대 30이므로, 인덱스 30까지 담을 수 있는 배열 준비
    int count[31] = {0}; 
    int max_group = 0;

    for (int i = 0; i < strArr_len; i++) {
        // 1. 현재 문자열의 길이를 잽니다.
        int len = strlen(strArr[i]);
        
        // 2. 해당 길이를 인덱스로 하는 바구니의 숫자를 올립니다.
        count[len]++;
    }

    // 3. 바구니들 중에서 가장 숫자가 큰 것(가장 많이 묶인 그룹)을 찾습니다.
    for (int i = 1; i <= 30; i++) {
        if (count[i] > max_group) {
            max_group = count[i];
        }
    }

    return max_group;
}