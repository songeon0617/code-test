#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solution(const char* binomial) {
    long long a = 0, b = 0; // 숫자가 클 수 있으므로 long long 권장
    char op;
    int i = 0;

    // 1. 첫 번째 숫자 추출
    while (binomial[i] >= '0' && binomial[i] <= '9') {
        a = a * 10 + (binomial[i] - '0');
        i++;
    }

    // 2. 공백 건너뛰기 및 연산자 추출
    while (binomial[i] == ' ') i++;
    op = binomial[i++];
    while (binomial[i] == ' ') i++;

    // 3. 두 번째 숫자 추출
    while (binomial[i] >= '0' && binomial[i] <= '9') {
        b = b * 10 + (binomial[i] - '0');
        i++;
    }

    if (op == '+') return (int)(a + b);
    if (op == '-') return (int)(a - b);
    return (int)(a * b);
}