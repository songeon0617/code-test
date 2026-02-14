#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int sum = 0;
    int s =0;
    s=n/10;
    sum=12000*n+2000*k-2000*s;
    answer= sum;
    return answer;
}