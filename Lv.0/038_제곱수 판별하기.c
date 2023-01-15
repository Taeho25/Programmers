#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    // 방법 1.
    // int cnt = 0;
    // for (int i=1; i<=n; i++){
    //     if (n % i == 0){
    //         cnt++;
    //     }
    // }
    // answer = (cnt % 2 == 1 ? 1 : 2);
    
    // 방법 2.
    answer = 2;
    for (int i=1; i<=n; i++){
        if (i * i == n){
            answer = 1;
            break;
        }
    }
    
    return answer;
}