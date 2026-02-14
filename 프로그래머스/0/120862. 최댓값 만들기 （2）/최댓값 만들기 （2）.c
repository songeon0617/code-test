#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int len = numbers_len;
    for (int i = 0; i < len -1; i++){
        for (int j =0; j < len -1 -i; j++){
            if(numbers[j]>numbers[j+1]){
                int temp = 0;
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    
    if (numbers[0]*numbers[1] > numbers[len-1]*numbers[len-2]) answer = numbers[0]*numbers[1];
    else answer = numbers[len-1]*numbers[len-2];
    return answer;
}