#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len, int n) {
    int len = (int)array_len;
    int answer = array[0];
    
    // 1. 초기 거리 계산 (n과 첫 번째 원소의 차이)
    int min_diff = n - array[0];
    if (min_diff < 0) min_diff *= -1;

    for (int i = 1; i < len; i++) {
        // 2. 현재 원소와의 거리 계산
        int current_diff = n - array[i];
        if (current_diff < 0) current_diff *= -1;

        // 3. 더 가까운 숫자를 찾았을 때
        if (current_diff < min_diff) {
            min_diff = current_diff;
            answer = array[i];
        } 
        // 4. 거리가 똑같다면 "더 작은 수"를 정답으로 (보통 이 조건 때문입니다)
        else if (current_diff == min_diff) {
            if (array[i] < answer) {
                answer = array[i];
            }
        }
    }
    
    return answer;
}