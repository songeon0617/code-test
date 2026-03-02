#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int y = x;
    
    while(y!=0){
        sum = sum + y%10;
        y = y/10;
    }
    
    if(x%sum==0) return answer;
    else return false;
}