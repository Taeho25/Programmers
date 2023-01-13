#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0, temp;
    
    // sides[0] : 큰 수, sides[1] : 작은 수
    if (sides[0] < sides[1]){
        temp = sides[1];
        sides[1] = sides[0];
        sides[0] = temp;
    }
    
    // 1. 원리에 입각해...
    // for (int i=sides[0]-sides[1]+1; i<=sides[0]; i++){
    //     answer++;
    // }
    // for (int i=sides[0]+1; i<sides[0]+sides[1]; i++){
    //     answer++;
    // }
    
    // 2. 그 원리를 간단히...
    // answer = sides[1];
    // answer += sides[1] - 1;
    
    // 3. 한 줄
    answer = sides[1] * 2 - 1;  // 입력받은 두 수 중 작은 수가 뭔지만 알아도 해결 가능
    
    return answer;
}