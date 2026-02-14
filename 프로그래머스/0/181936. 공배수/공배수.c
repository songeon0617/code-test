#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    int answer = 0;
    int result = 0;
    if(number%n==0&&number%m==0) result = 1;
    else result = 0;
    answer =result;
    return answer;
}