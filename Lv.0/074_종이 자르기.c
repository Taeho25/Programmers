//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>

int solution(int M, int N) {
    int answer = M - 1 + (N - 1) * M;   // col_cut + row_cut
    
    return answer;
}