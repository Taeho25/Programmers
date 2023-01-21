#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0, num = 0, pm = 1;
    
    for (int i=0; i<strlen(s); i++){
        // 부호 확인
        if (s[i] == '-'){
            i++;
            pm = -1;
        }
        else pm = 1;
        
        // 'Z': num에 저장된 값 빼기, 아니면: 숫자 확인
        if (s[i] == 'Z'){
            answer -= num;
            i++;
        }
        else{
            num = 0;
            while(s[i] != ' ' && s[i] != '\0') num = num*10 + (s[i++]-'0');
            num *= pm;
            answer += num;
        }
    }
    
    return answer;
}