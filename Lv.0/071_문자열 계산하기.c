#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0, num = 0;
    char cal_type = '+';   // ''+', '-'
    
    for (int i=0; i<strlen(my_string); i++){
        // 숫자 확인
        if ('0' <= my_string[i] && my_string[i] <= '9'){
            while(my_string[i] != ' ' && my_string[i] != '\0'){
                num = num*10 + (my_string[i++] - '0');
            }
        }
        
        // 계산 형태에 따른 계산
        if (num != 0){
            if (cal_type == '+') answer += num;
            else if (cal_type == '-') answer -= num;
            num = 0;    
        }
        
        // 계산 형태 저장
        if (my_string[i] == '+') cal_type = '+';
        else if (my_string[i] == '-') cal_type = '-';
    }
    
    return answer;
}