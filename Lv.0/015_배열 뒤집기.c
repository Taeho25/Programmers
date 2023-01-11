#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // int크기*배열길이 만큼 동적 메모리 할당
    int *answer = malloc(sizeof(int) * num_list_len);   
    
    for (int i=0; i<num_list_len; i++){
        answer[num_list_len - i - 1] = num_list[i];
    }
    //free(answer);   // 동적할당 메모리 해제
    
    return answer;
}