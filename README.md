# Programmers

Programmers 문제풀이(정답률 높은 순)

- Lv.0 : <https://school.programmers.co.kr/learn/challenges?order=acceptance_desc&page=1>

------


## NOTE


### 1. malloc 함수 (동적 할당)

- 헤더파일 : <stdlib.h> or <malloc.h>
- 정의 : void* malloc(size_t size)
    - size : 할당할 메모리에 들어갈  크기(바이트 단위)
    - void형 이기 때문에 사용시 반드시 형변환을 해야함.
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


### 2. calloc 함수 (동적할당)

- 헤더파일 : <stdlib.h>
- 정의 : void* calloc(size_t count, size_t size)
    - count : 할당할 메모리에 들어갈 데이터의 개수
    - size : 할당할 메모리에 들어갈 데이터의 크기(바이트 단위)
- malloc과 calloc의 차이
    - malloc은 할당된 공간의 값을 바꾸지 않는다.
    - calloc은 할당된 공간의 값을 모두 0으로 바꾼다.
- 예제

```c
int* answer = (int*)calloc(strlist_len, sizeof(int));
```


### 3. strcpy 함수 (문자열 복사)
- 헤더파일 : <string.h>
- 정의 : char *strcpy(char *_Dest, char const *_Source)
    - _Dest : 복사받을 문자열 포인터 or 문자열 배열
    - _Source : 복사할 문자열 포인터 or 문자열 배열
- 예제

```c
strcpy(answer, my_string);
```


### 4. strlen 함수 (문자열 길이)

- 헤더파일 : <string.h>
- 정의 : size_t strlen(const *_Str)
    - _Str : 문자열 포인터 or 문자열 배열
- 예제

```c
my_string_len = strlen(my_string);
```


### 5. strcmp 함수 (문자열 비교) 
- 헤더파일 : <string.h>
- 정의 : int strcmp(const char* str1, const char* str2)
    - str1 : 비교할 문자열 1
    - str2 : 비교할 문자열 2
- 예제

```c
answer = strcmp("ABC", "ABC");  // 같아서 answer에 0 반환

if (strcmp("ABC", "MZ") == 0) printf("같아요");
else printf("달라요");
```


### 6. memcpy 함수 (메모리 복사)
- 헤더파일 : <string.h>
- 정의 : void* memcpy (void* dest, const void* source, size_t size)
    - dest : 복사받을 데이터의 메모리 주소
    - source : 복사할 데이터의 메모리 주소
    - size : 복사할 데이터의 개수
- 예제

```c
memcpy(dest, src, sizeof(int) * src_len);   // dest : 복사받을 메모리를 가리키는 포인터
                                            // src : 복사할 메모리를 가리키는 포인터
                                            // src_len : 복사할 데이터의 길이
memcpy(dest, src, sizeof(src));             // 위와 동일하게 작동
```


------


## 문제

- Lv.0 특정 문자 제거하기
- Lv.0 이진수 바꾸기
- Lv.0 구슬을 나누는 경우의 수 (팩토리얼, 오버플로우, 부동소수)
