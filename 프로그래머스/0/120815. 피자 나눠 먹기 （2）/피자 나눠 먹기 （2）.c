#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int pizza =1;
    while(1){
       if((pizza*6)%n==0){
           answer = pizza;
           return answer;
       } 
        pizza++;
    }
    
    
}