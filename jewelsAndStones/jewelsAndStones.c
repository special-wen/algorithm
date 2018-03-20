//
// Created by zxw on 18-3-20.
//

#include <stdio.h>
#include <string.h>

int numJewelsInStones(char* J, char* S);

int main(void){
    char J[2000] = {"z"};
    char S[2000] = {"ZZZZZZZZ"};
    int number = numJewelsInStones(J, S);
    printf("%d",number);
}

int numJewelsInStones(char* J, char* S) {
    int J_length = strlen(J);
    int S_length = strlen(S);
    int count = 0;

//    printf("%d %d",J_length,S_length);

    for (int i = 0; i < J_length; ++i) {
        for (int j = 0; j < S_length; ++j) {
            if (J[i] == S[j]){
                count++;
            }
        }
    }
    return  count;
}

