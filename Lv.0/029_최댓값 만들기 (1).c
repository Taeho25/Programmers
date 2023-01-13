#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0, max_1st = 0, max_2nd = 0;
    
    for (int i=0; i<numbers_len; i++){
        if (numbers[i] > max_1st){
            max_2nd = max_1st;
            max_1st = numbers[i];
        }
        else if (numbers[i] > max_2nd){
            max_2nd = numbers[i];
        }
    }
    
    answer = max_1st * max_2nd;
    
    return answer;
}