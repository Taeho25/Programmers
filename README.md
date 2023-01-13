# Programmers
Programmers 문제풀이

## NOTE
1. 동적할당 <stdlib.h> or <malloc.h>
    - void* malloc(size_t size)
    - ex1) int* answer = (int*)malloc(sizeof(int) * strlist_len);
    - ex2) char* answer = (char*)malloc(my_string_len + 1);
2. 문자열 복사 <string.h>
    - char *strcpy(char *_Dest, char const *_Source);
    - ex) strcpy(answer, my_string);
3. 문자열 길이 <string.h>
    - size_t strlen(const *_Str);       // _Str : 문자열 포인터 or 문자열 배열
    - ex) my_string_len = strlen(my_string);


## 문제
- Lv.0 031_특정 문자 제거하기
