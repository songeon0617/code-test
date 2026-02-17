#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* a, const char* b) {
    int len1 = strlen(a);
    int len2 = strlen(b);
    int max_len = (len1 > len2 ? len1 : len2);
    
    // 합산 결과는 최대 길이 + 1(올림수)만큼 필요함
    char* answer = (char*)malloc(max_len + 2);
    
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;
    int carry = 0; // 올림수 저장용

    // 뒤에서부터 한 자리씩 더하기 (이게 핵심!)
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        
        carry = sum / 10;          // 10이 넘으면 다음 자리로 1을 보냄
        answer[k++] = (sum % 10) + '0'; // 1의 자리를 문자로 저장
    }
    answer[k] = '\0';

    // 거꾸로 저장된 문자열 뒤집기
    for (int s = 0; s < k / 2; s++) {
        char temp = answer[s];
        answer[s] = answer[k - 1 - s];
        answer[k - 1 - s] = temp;
    }

    return answer;
}