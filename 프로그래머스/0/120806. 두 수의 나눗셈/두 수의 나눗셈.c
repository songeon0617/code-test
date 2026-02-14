#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    double num3=0;
    num3 = (double)num1/num2;
    answer=num3*1000;
    answer=(int)answer;
    return answer;
}