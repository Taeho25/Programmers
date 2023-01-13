#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // strlen 함수 포함

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t my_string_len = strlen(my_string);
    char temp;
    char* answer = (char*)malloc(my_string_len+1);  // 문자열 동적할당은 "길이+1" ( sizeof(char) = 1 )
    
    strcpy(answer, my_string);
     
    for (int i=0; i <my_string_len/2; i++) {
        temp = answer[i];
        answer[i] = answer[(my_string_len - 1) - i];
        answer[(my_string_len - 1) - i] = temp;
    }
    
    return answer;
}