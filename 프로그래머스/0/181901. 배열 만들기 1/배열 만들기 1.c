#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int a = n;
    int count=0;
    int i =1;
    while(a>0){
        
        
        if(a<k*i) break;
        
        else {
            
            count++;
            if(a==k*i) break;
            i++;
            
            
        }
    }
    int* answer = (int*)malloc(count*4);
    int j =1;
    for(int i =0; i< count; i++){
        answer[i]=k*(j++);
    }
        return answer;
}