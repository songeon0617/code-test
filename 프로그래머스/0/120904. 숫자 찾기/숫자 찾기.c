#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int num, int k) {
    int a = 0;
    int count1 = 0;
    int count2 = 1;
    int sum = num;
    
    // 1. 전체 자릿수 계산
    while(sum != 0){
        sum = sum / 10;
        count1++;
    }
    
    // 2. 왼쪽부터 확인
    while(count1 != 0){
        a = num / (int)pow(10, count1 - 1);
        
        // 여기서 a % 10을 쓰셨으니 정확히 그 자릿수만 비교됩니다!
        if(a % 10 == k) {
            return count2; // 찾으면 즉시 위치를 리턴하고 함수 종료!
        }
        
        count2++;
        count1--;
    }
    
    // 3. 루프를 빠져나왔다는 건 k를 한 번도 못 만났다는 뜻!
    return -1; 
}