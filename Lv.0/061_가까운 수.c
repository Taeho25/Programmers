#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h> // abs 함수

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int min_gap = 100, min_value = 0;
    
    for (int i=0; i<array_len; i++){
        if (min_gap > abs(array[i] - n)){
            min_gap = abs(array[i] - n);
            answer = array[i];
        }
        else if (min_gap == abs(array[i] - n)){
            answer = (answer < array[i] ? answer : array[i]);
        }
    }
    
    return answer;
}