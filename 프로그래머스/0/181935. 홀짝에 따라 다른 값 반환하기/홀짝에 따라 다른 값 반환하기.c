#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int sum = 0;
    
    if(n%2==0) {
        for (int i =2; i<=n; i=i+2){
            sum = i*i + sum ;
        }
    }
    else{
        for (int i = 1; i<=n; i=i+2){
            sum +=i;
        }
    }
    answer = sum;
    return answer;
}