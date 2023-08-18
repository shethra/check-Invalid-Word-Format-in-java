
#include<stdio.h>
#include<string.h>
int main(){
    char S[100];
    int L,N;
    scanf("%s %d %d",S,&L,&N);
    int i, j;
    int len = strlen(S);

    for (i = 0; i < L; i++) {
        int newsize = len*3;
        char newS[newsize];
        int inx = 0;

        for (j = 0; j < len; j++) {
            if (S[j] == 'x') {
                strcpy(newS + inx, "xyz");
                inx += 3;
            } else if (S[j] == 'y') {
                strcpy(newS + inx, "yxz");
                inx += 3;
            } else if (S[j] == 'z') {
                strcpy(newS + inx, "zxy");
                inx += 3;
            }
            
        }

        newS[inx] = '\0';
        strcpy(S, newS);
        len = strlen(S);
        
    }

    printf("%c",S[N]); 
}