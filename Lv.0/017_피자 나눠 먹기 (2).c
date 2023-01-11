#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(1){
        //answer++;
        if ((6 * ++answer) % n == 0){
            break;
        }
    }
    
    return answer;
}