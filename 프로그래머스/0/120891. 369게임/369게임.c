#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    
    while(order > 0){
        int digit = order % 10; // Get the last digit
        
        // Check if the digit is 3, 6, or 9
        // We ensure digit > 0 to exclude 0
        if(digit != 0 && digit % 3 == 0) {
            answer++;
        }
        
        order /= 10; // Move to the next digit
    }
    return answer;
}