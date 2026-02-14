#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int answer = 0;
    int result = 0;
    if(num%n==0) result =1;
    else result = 0;
    answer = result;
    return answer;
}