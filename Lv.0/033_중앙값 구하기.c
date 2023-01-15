#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    
    // 삽입정렬
    for (int i=0; i<array_len; i++){
        int min_index = i;
        for (int j=i+1; j<array_len; j++){
            if (array[min_index] > array[j]){
                min_index = j;                
            }
        }
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
    
    answer = array[array_len / 2];
    
    return answer;
}