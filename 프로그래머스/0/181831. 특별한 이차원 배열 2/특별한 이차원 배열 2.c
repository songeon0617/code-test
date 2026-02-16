#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// arr_rows는 2차원 배열 arr의 행 길이, arr_cols는 2차원 배열 arr의 열 길이입니다.
int solution(int** arr, size_t arr_rows, size_t arr_cols) {
    int answer = 0;
    int len1 = arr_rows;
    int len2 = arr_cols;
    int count = 0;
    
    for(int i =0; i< len1; i++){
        for(int j =0; j< len2; j++){
            if(arr[i][j]!=arr[j][i]) count++;
        }
    }
    if(count>0) return 0;
    else return 1;
}
