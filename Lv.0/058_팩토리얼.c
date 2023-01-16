#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>

int solution(int n) {
    int answer = 0, facto = 1;
    
    while(facto <= n){
        facto *= ++answer;
    }
    answer--;
    
    return answer;
}