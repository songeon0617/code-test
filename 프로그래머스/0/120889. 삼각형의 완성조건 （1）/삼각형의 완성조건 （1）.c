#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int len = sides_len;
    int max=0;
    len = 3;
    for(int i =0; i< 2; i++){
        for (int j =0; j < 2-i; j++){
            int temp = 0;
            if(sides[j]>sides[j+1]){
            temp =sides[j];
            sides[j]=sides[j+1];
            sides[j+1]=temp;
                }
        }

    }
    if(sides[2] < sides[1] +sides[0]) answer = 1;
    else answer =2;
    
    return answer;
}