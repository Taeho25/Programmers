#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 4 + 1); // 나이 최대 4자리수 + 1
    int temp[4], i = 0;
    
    while (age > 0){
        temp[i++] = age % 10;
        age /= 10;
    }
    answer[i] = '\0';
    
    for (int j=0; j<i; j++){
        answer[j] = 'a' + temp[(i - 1) - j];
    }
    
    return answer;
}