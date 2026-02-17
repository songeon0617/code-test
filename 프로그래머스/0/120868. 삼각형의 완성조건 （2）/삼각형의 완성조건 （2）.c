#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    int count = 0;
    int max = (sides[0] > sides[1]) ? sides[0] : sides[1];
    int min = (sides[0] > sides[1]) ? sides[1] : sides[0];

    // 케이스 1: 기존에 주어진 max가 가장 긴 변인 경우
    // 새로운 변 i는 (max - min)보다 커야 함. 즉, (max - min + 1)부터 시작
    for(int i = max - min + 1; i <= max; i++) {
        count++;
    }

    // 케이스 2: 새로운 변 i가 가장 긴 변인 경우
    // i는 max보다 커야 하고 (max + min)보다는 작아야 함
    for(int i = max + 1; i < max + min; i++) {
        count++;
    }

    return count;
}