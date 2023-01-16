#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0, cnt;
    
    // 방법 1.
    // for (int i=4; i<=n; i++){
    //     cnt = 0;
    //     for (int j=1; j<=i; j++){        // 1부터 i까지 모두 확인
    //         if (i % j == 0) cnt++;       // 약수면 cnt 1 증가
    //         if (cnt >= 3) {              // 약수가 3개 이상이면 체크, 루프탈출
    //             answer++;
    //             break;
    //         }
    //     }
    // }    
    
    // 방법 2.
    for (int i=4; i<=n; i++){
        cnt = 0;
        for (int j=1; j<=i/2; j++){         // 1부터 i/2까지만 확인
            if (i % j == 0) cnt++;          // 약수면 cnt 1 증가
            if (cnt >= 2) {                 // 약수가 2개 이상이면 체크, 루프탈출
                answer++;                   // *약수는 쌍으로 존재한다는 점을 이용
                break;
            }
        }
    } 
    
    return answer;
}