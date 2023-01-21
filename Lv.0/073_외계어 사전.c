#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// spell_len은 배열 spell의 길이입니다.
// dic_len은 배열 dic의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int answer = 2;
    
    for (int i=0; i<dic_len; i++){
        if (strlen(dic[i]) != spell_len) continue;
        
        int using_spell[10] = {0}, cnt = 0;
        for (int d=0; d<spell_len; d++){
            for (int s=0; s<spell_len; s++){
                if (dic[i][d] == spell[s][0] && using_spell[s] == 0){
                    using_spell[s] = 1;
                    cnt++;
                }
            }
        }
        
        if (cnt == spell_len) {answer = 1; break;} 
    }
    
    return answer;
}