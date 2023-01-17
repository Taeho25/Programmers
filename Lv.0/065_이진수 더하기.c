#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 11 + 1);    // 최대합 길이 11 + \0
    int num = 0, indx = 0;
    
    // 1. 10진수로 바꿔서 합하기
    for (int i=0; i<strlen(bin1); i++){
        num += (bin1[i]-'0') * pow(2, (strlen(bin1) - 1 - i));
    }
    for (int i=0; i<strlen(bin2); i++){
        num += (bin2[i]-'0') * pow(2, (strlen(bin2) - 1 - i));
    }
    
    // 2. 2진수로 바꾸기
    while(1){
        answer[indx++] = num % 2 + '0';
        num /= 2;
        if (num == 0) break;
    }
    answer[indx] = '\0';
    
    // 3. 배열 뒤집기
    for (int i=0; i <strlen(answer)/2; i++) {
        char temp = answer[i];
        answer[i] = answer[(strlen(answer) - 1) - i];
        answer[(strlen(answer) - 1) - i] = temp;
    }
    
    return answer;
}