#include <stdio.h>
#include <stdbool.h>

int solution(int n) {
    int answer = 0;

    // 1. 1부터 n까지 모든 숫자를 확인 (1, 2, 3은 합성수가 아니니 4부터 시작해도 됨)
    for (int i = 4; i <= n; i++) {
        
        // 2. i가 합성수인지 판별하는 반복문
        for (int j = 2; j < i; j++) {
            // 3. 만약 2부터 i-1 사이의 숫자로 나누어떨어진다면?
            if (i % j == 0) {
                // 약수가 (1, j, i) 최소 3개가 되므로 합성수 확정!
                answer++;
                
                // 이미 합성수인 걸 알았으니 안쪽 루프는 더 돌 필요가 없음
                break; 
            }
        }
    }

    return answer;
}