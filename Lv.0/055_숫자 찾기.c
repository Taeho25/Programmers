#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = -1;
    
    while(num > 0){
        if (num % 10 == k){
            answer = 1;
        }
        else if (answer != -1){
            answer++;
        }
        num /= 10;
    }
    
    return answer;
}