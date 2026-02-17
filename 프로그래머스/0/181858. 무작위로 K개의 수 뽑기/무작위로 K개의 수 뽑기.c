#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int k) {
    // 1. 결과 담을 공간은 k개만큼 할당 (정석대로 sizeof(int) 사용)
    int* answer = (int*)malloc(sizeof(int) * k);
    
    // 2. 일단 전부 -1로 채워놔야 나중에 숫자가 모자라도 -1이 남음
    for(int i = 0; i < k; i++) answer[i] = -1;
    
    int count = 0; // 지금까지 answer에 담은 '서로 다른 숫자'의 개수

    // 3. 정렬하지 말고! 원래 배열을 처음부터 끝까지 훑음
    for(int i = 0; i < (int)arr_len; i++) {
        // 이미 k개를 다 뽑았으면 그만!
        if(count == k) break;

        // 4. "지금 이 숫자(arr[i]), 내가 아까 뽑았었나?" 확인
        bool already_in = false;
        for(int j = 0; j < count; j++) {
            if(answer[j] == arr[i]) {
                already_in = true; // 응, 아까 뽑았어
                break;
            }
        }

        // 5. 처음 보는 숫자라면 answer에 추가!
        if(!already_in) {
            answer[count] = arr[i]; // 여기서 'i'가 아니라 'arr[i]'를 넣어야 함!
            count++;
        }
    }

    return answer;
}