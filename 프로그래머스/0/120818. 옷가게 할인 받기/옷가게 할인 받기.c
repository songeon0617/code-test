#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;

    // 높은 금액 구간부터 검사하는 것이 가장 안전합니다.
    if (price >= 500000) {
        // 20% 할인 = 원래 가격의 80/100 (정수 연산으로 오차 방지)
        answer = price * 80 / 100;
    } 
    else if (price >= 300000) {
        // 10% 할인 = 원래 가격의 90/100
        answer = price * 90 / 100;
    } 
    else if (price >= 100000) {
        // 5% 할인 = 원래 가격의 95/100
        answer = price * 95 / 100;
    } 
    else {
        // 10만 원 미만은 할인 없음
        answer = price;
    }

    return answer;
}