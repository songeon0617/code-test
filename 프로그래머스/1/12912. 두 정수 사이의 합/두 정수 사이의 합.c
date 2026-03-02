#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    long long sum = 0;
    if(b>=a){
       
        for(int i = a; i <=b; i++){
        sum+=i;
    
        } 
    }
    else{
        for(int i = b; i <=a; i++){
        sum+=i;
    
        } 
    }
    
    answer = sum ;
    return answer;
}