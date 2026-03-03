#include <stdio.h>
#include <math.h>

long long solution(long long n) {
    // 1. sqrt()의 결과를 정수형으로 저장 (소수점 버림)
    long long x = (long long)sqrt(n);

    // 2. x를 제곱했을 때 n과 일치하는지 확인 (가장 확실한 조건)
    if (x * x == n) {
        return (x + 1) * (x + 1);
    } else {
        return -1;
    }
}