#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int len = numbers_len;
    for (int  i = 0; i< len-1; i++){
        for(int j =0; j < len -1-i;j++){
            int temp = 0;
            if(numbers[j]>numbers[j+1]){
            temp=numbers[j];
            numbers[j]=numbers[j+1];
            numbers[j+1]=temp;
            }
        }
    }
    answer = numbers[len-1]*numbers[len-2];
    return answer;
}
       