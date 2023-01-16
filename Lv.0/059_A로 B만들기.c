#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    
    // 방법 1.
//     int answer = 0;
//     char b[1001], a[1001], temp;
    
//     strcpy(b, before);
//     strcpy(a, after);
    
//     for (int i=0; i<strlen(before); i++){            // 삽입정렬 후 비교
//         for (int j=strlen(before)-1; j>i; j--){
//             if (b[j] < b[j-1]){
//                 temp = b[j];
//                 b[j] = b[j-1];
//                 b[j-1] = temp;
//             }
//             if (a[j] < a[j-1]){
//                 temp = a[j];
//                 a[j] = a[j-1];
//                 a[j-1] = temp;
//             }
//         }
//     }
//     if (strcmp(b, a) == 0) answer = 1;
    
    // 방법 2.
    int answer = 1;
    int before_cnt[26] = {0}, after_cnt[26] = {0};
    
    for (int i=0; i<strlen(before); i++){               // 계수 정렬 후 비교
        before_cnt[before[i] - 97]++;
        after_cnt[after[i] - 97]++;
    }
    
    for (int i=0; i<26; i++){
        if (before_cnt[i] != after_cnt[i]){
            answer = 0;
            break;
        }
    }
    
    return answer;
}