#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0, temp;
    
    if (sides[2] > sides[1]){
        temp = sides[2];
        sides[2] = sides[1];
        sides[1] = temp;
    }
    if (sides[1] > sides[0]){
        temp = sides[1];
        sides[1] = sides[0];
        sides[0] = temp;
    }
    
    answer = (sides[0] < sides[1] + sides[2] ? 1 : 2);
    
    return answer;
}