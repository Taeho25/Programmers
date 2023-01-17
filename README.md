# Programmers

Programmers 문제풀이

https://school.programmers.co.kr/learn/challenges?order=acceptance_desc&page=1

------


## NOTE

#### 1. malloc 함수 (동적 할당)

- 헤더파일 : <stdlib.h> or <malloc.h>
- 정의 : void* malloc(size_t size)
- 예제

```c
// 정수형 변수 동적 할당
int* answer = (int*)malloc(sizeof(int) * strlist_len);

// 문자형 변수 동적 할당
char* answer = (char*)malloc(sizeof(char) * my_string_len + 1);     // char는 1바이트라서 sizeof(char)를 생략해도 무관

// 정수형 변수 2차원 배열 동적 할당
int** answer = (int**)malloc(sizeof(int*) * height);    // 배열의 세로 크기 height
for (int i=0; i<height; i++){
    answer[i] = (int*)malloc(sizeof(int) * width);      // 배열의 가로 크기 width
}
```

#### 2. calloc 함수 (동적할당)

- 헤더파일 : <stdlib.h>
- 정의 : void* calloc(strlist_len, sizeof(int);
- 예제

```c
int* answer = (int*)calloc(strlist_len, sizeof(int));
```
- malloc과 calloc의 차이
    - malloc은 할당된 공간의 값을 바꾸지 않는다.
    - calloc은 할당된 공간의 값을 모두 0으로 바꾼다.

#### 3. strcpy 함수 (문자열 복사)
- 헤더파일 : <string.h>
- 정의 : char *strcpy(char *_Dest, char const *_Source);
- 예제

```c
strcpy(answer, my_string);
```

#### 4. strlen 함수 (문자열 길이)

- 헤더파일 : <string.h>
- 정의 : size_t strlen(const *_Str);       // _Str : 문자열 포인터 or 문자열 배열
- 예제

```c
my_string_len = strlen(my_string);
```

#### 5. strcmp 함수 (문자열 비교) 
- 헤더파일 : <string.h>
- 정의 : int strcmp(const char* str1, const char* str2);
- 예제

```c
answer = strcmp("ABC", "ABC");  // 같아서 answer에 0 반환

if (strcmp("ABC", "MZ") == 0){
    printf("같아요");
}
else{
    printf("달라요");
}
```

------


## 문제
- Lv.0 특정 문자 제거하기
