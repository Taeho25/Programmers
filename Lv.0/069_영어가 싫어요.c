#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    long long answer = 0;
    char temp[50];
    
    for (int i=0; numbers[i]; i++){
        temp[i] = numbers[i];
        
        if (temp[i-3]=='z' && temp[i-2]=='e' && temp[i-1]=='r' && temp[i]=='o'){
            answer = answer*10 + 0;
        }
        else if (temp[i-2]=='o' && temp[i-1]=='n' && temp[i]=='e'){
            answer = answer*10 + 1;
        }
        else if (temp[i-2]=='t' && temp[i-1]=='w' && temp[i]=='o'){
            answer = answer*10 + 2;
        }
        else if (temp[i-4]=='t' && temp[i-3]=='h' && temp[i-2]=='r' 
                 && temp[i-1]=='e' && temp[i]=='e'){
            answer = answer*10 + 3;
        }
        else if (temp[i-3]=='f' && temp[i-2]=='o' && temp[i-1]=='u' && temp[i]=='r'){
            answer = answer*10 + 4;
        }
        else if (temp[i-3]=='f' && temp[i-2]=='i' && temp[i-1]=='v' && temp[i]=='e'){
            answer = answer*10 + 5;
        }
        else if (temp[i-2]=='s' && temp[i-1]=='i' && temp[i]=='x'){
            answer = answer*10 + 6;
        }
        else if (temp[i-4]=='s' && temp[i-3]=='e' && temp[i-2]=='v' 
                 && temp[i-1]=='e' && temp[i]=='n'){
            answer = answer*10 + 7;
        }
        else if (temp[i-4]=='e' && temp[i-3]=='i' && temp[i-2]=='g' 
                 && temp[i-1]=='h' && temp[i]=='t'){
            answer = answer*10 + 8;
        }
        else if (temp[i-3]=='n' && temp[i-2]=='i' && temp[i-1]=='n' && temp[i]=='e'){
            answer = answer*10 + 9;
        }
    }
    
    return answer;
}