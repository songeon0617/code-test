#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solution(int a, int b) {
    int answer = 0;
    
    int a_rep = a;
    int b_rep = b;
    int a_count = 0;
    int b_count = 0;
    
    while(a_rep>0){
        a_rep = a_rep/10;
        a_count++;
    }
    
     while(b_rep>0){
        b_rep = b_rep/10;
        b_count++;
    }
    int sum1 = (a*(int)pow(10,b_count))+b;
    int sum2 = (b*(int)pow(10,a_count))+a;
    if(sum1 >= sum2) answer= sum1;
    else answer = sum2;
    
    return answer;
}