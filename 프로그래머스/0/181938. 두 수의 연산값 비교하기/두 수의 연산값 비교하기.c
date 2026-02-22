#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int ib = 1;
    int B = b;
    
    while (B>0){
    
        ib*=10;
        B/=10;
    }
    int ab = a*ib+b;
    
    if (ab>2*a*b) answer = ab;
    else answer = 2*a*b;
    
    
    return answer;
}