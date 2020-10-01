#include <iostream>
#include <stdio.h>

int main() {
    int M[5][5] =
            {0,1,0,1,0,
             1,0,1,0,1,
             0,1,0,1,1,
             1,0,1,0,1,
             0,1,1,1,0};

    int jumSimpul = 5;
    int n,i,j,k;
    char NM[6] = "ABCDE";

    int X = 0, Y = 9;
    n = jumSimpul;

    for (int i = 0; i <= n-1; i++) {
        X = 0;
        for (int j = 0; j <= n-1; j++) {
            if (M[i][j] == 1) {
                X = X + 1;
            }
        }
        if (X < Y) Y = X;
    }
    printf("\n%i", Y);
}

