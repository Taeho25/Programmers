#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_str, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int answer_len = strlen(my_str)/n + (strlen(my_str)%n != 0 ? 1 : 0);
    char** answer = (char**)malloc(sizeof(char*) * answer_len + 1);
    for (int i=0; i<answer_len; i++){
        answer[i] = (char*)malloc(sizeof(char) * n + 1);    // 왜 +1이 의미가 없지?
    }
    
    int i = 0;
    for (int i=0; i<strlen(my_str); i++){
        answer[i/n][i%n] = my_str[i];
        if (i%n == n-1 || i == strlen(my_str)-1) answer[i/n][i%n+1] = '\0';
    }
    
    return answer;
}