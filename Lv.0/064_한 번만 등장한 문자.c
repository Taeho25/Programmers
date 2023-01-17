#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * strlen(s) + 1);
    
    // 방법 1.
    // int indx = 0;
    // for (int i=0; i<26; i++){
    //     int cnt = 0;
    //     for (int j=0; j<strlen(s); j++){
    //         if (s[j] == 'a' + i) cnt++;
    //         if (cnt > 2) break;
    //     }
    //     if (cnt == 1) answer[indx++] = 'a' + i;
    // }
    // answer[indx] = '\0';
    
    // 방법 2.
    int cnt[26] = {0};
    int indx = 0;
    for (int i=0; s[i]; i++) cnt[s[i] - 'a']++;
    for (int i=0; i<26; i++) if (cnt[i] == 1) answer[indx++] = i + 'a';
    answer[indx] = NULL;
    
    return answer;
}