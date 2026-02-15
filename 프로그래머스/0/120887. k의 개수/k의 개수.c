#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    int count = 0;
    for(int a= i; a<=j; a++){
        int temp = 0;
        temp =a;
        while(temp>0){
            if(temp%10==k)
            {
            count++;
        
            }
         temp=temp/10;   
    
        }
    }    answer = count;
    return answer;
}