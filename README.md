# Programmers
- Programmers 문제풀이
- https://school.programmers.co.kr/learn/challenges?order=acceptance_desc&page=1

## NOTE
- malloc 함수 (동적 할당)
    - 헤더파일 : <stdlib.h> or <malloc.h>
    - 정의 : void* malloc(size_t size)
    - ex
'''
int* answer = (int*)malloc(sizeof(int) * strlist_len);
'''
    - ex2
'''
char* answer = (char*)malloc(my_string_len + 1);
'''
- malloc 함수2 (2차원 배열 동적 할당)
    - ex
    '''
    int** answer = (int**)malloc(sizeof(int*) * num_list_len/n);
    for (int i=0; i<num_list_len/n; i++){
        answer[i] = (int*)malloc(sizeof(int) * n);
    }
    '''
- calloc 함수 (동적할당)
    - 헤더파일 : <stdlib.h>
    - 정의 : void* calloc(strlist_len, sizeof(int);
    - malloc은 할당된 공간의 값을은 바꾸지 않는다.
    - calloc은 할당된 공간의 값을 모두 0으로 바꾼다.
- strcpy 함수 (문자열 복사)
    - 헤더파일 : <string.h>
    - 정의 : char *strcpy(char *_Dest, char const *_Source);
    - ex) strcpy(answer, my_string);
- strlen 함수 (문자열 길이)
    - 헤더파일 : <string.h>
    - 정의 : size_t strlen(const *_Str);       // _Str : 문자열 포인터 or 문자열 배열
    - ex) my_string_len = strlen(my_string);
- strcmp 함수 (문자열 비교) 
    - 헤더파일 : <string.h>
    - 정의 : int strcmp(const char* str1, const char* str2);
    - ex) answer = strcmp("ABC", "ABC");
    - 같으면 0 반환


## 문제
- Lv.0 특정 문자 제거하기
