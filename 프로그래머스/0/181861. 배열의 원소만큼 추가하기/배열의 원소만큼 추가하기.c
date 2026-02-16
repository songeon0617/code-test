#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = arr_len;
    int sum = 0;
    for(int i =0; i<len; i++){
        sum+=arr[i];
    }
    int* answer = (int*)malloc(sum*sizeof(int));
    
    int k = 0; // answer의 인덱스
for (int i = 0; i < len; i++) { // 원본 배열 순회
    for (int j = 0; j < arr[i]; j++) { // 원소의 값만큼 반복
        answer[k++] = arr[i]; // k번째에 값을 넣고 k 증가
    }
}
    return answer;
}