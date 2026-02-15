#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
char* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int k = n;
    int count =0;
    while(k>0){
        k=k/10; 
        count++;
    }
    char* answer = (char*)malloc(count+1);
    int count1 = count - 1;
    int t = n;
    for(int i =count1; i>-1; i--){
        answer[i]= t%10+'0';
        t = t/10;
    }
    answer[count]='\0';
    return answer;
}
