#include <stdio.h>

int solution(int num1, int num2) {
    int answer = num1 - num2;
    return answer;
}

int main(void){
    int ans = solution(5, 2);
    printf("%d", ans);
}