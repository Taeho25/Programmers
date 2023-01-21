#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    
    // 방법 1.
    // int x_max = -256, x_min = 256, y_max = -256, y_min = 256;
    // for(int i=0; i<4; i++){
    //     if (x_max < dots[i][0]) x_max = dots[i][0];
    //     if (x_min > dots[i][0]) x_min = dots[i][0];
    //     if (y_max < dots[i][1]) y_max = dots[i][1];
    //     if (y_min > dots[i][1]) y_min = dots[i][1];
    // }
    // answer = (x_max - x_min) * (y_max - y_min);
    
    // 방법 2.
    for(int i=1; i<4; i++){
        // 한 점 기준으로 x좌표 y좌표가 다 다른 점
        if(dots[0][0] != dots[i][0] && dots[0][1] != dots[i][1]){
            answer = (dots[0][0] - dots[i][0]) * (dots[0][1] - dots[i][1]);
            break;
        }
    }
    answer = (answer < 0) ? -answer : answer;
    
    return answer;
}