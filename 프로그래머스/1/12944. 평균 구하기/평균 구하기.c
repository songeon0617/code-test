#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    int len = arr_len;
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum += arr[i];
    }
    answer=(double)sum/len;
    
    return answer;
}