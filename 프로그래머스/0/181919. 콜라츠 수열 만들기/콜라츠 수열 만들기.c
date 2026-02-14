#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(n*sizeof(int));
    int count = 0;
    while(n!=1){
    
        if(n%2==0) {
            answer[count]=n; 
            n=n/2;
                   }        
        else {
            answer[count]=n; 
            n=n*3+1;
             }
        count++;
    }
    answer[count]=1;
    return answer;
}