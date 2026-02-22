#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int len = array_len;
    int avg = len/2;
    
    
    for(int i = 0; i <len-1; i++){
       for(int j = 0; j <len -1 - i; j++){
        if(array[j+1]<array[j]){
         
            int temp=0;
            
            temp=array[j+1];
            array[j+1]=array[j];
            array[j]=temp;
        }
        
    
       }
    
    }
    answer=array[avg];
    
    
    return answer;
}