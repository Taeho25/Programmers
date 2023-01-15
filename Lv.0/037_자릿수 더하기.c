#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    // 방법 1.    
    // while(1){
    //     if (n / 10 != 0){
    //         answer += (n % 10);
    //         n /= 10;
    //     }
    //     else{
    //         answer += n;
    //         break;
    //     }
    // }

    // 방법 2.
    // while(n > 0){
    //     answer += (n % 10);
    //     n /= 10;
    // }

    // 방법 3.
    for ( ; n; n/=10) {
        answer += (n % 10);
    }
     
    return answer;
}