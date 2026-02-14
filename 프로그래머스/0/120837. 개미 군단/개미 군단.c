#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    
    int count1 = 0,count2 = 0,count3 = 0,count4 = 0;
    count1 = hp/5;
    count2= hp %5;
    count3 = count2/3;
    count4 = count2%3;
    
    answer = count1 + count3 + count4;
    
    return answer;
    
}