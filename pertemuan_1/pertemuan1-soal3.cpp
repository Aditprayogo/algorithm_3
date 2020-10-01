//
// Created by aditprayogo on 02/10/20.
//


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
    int X = 0;
    i = 3;
    n = jumSimpul;

    for (int j = 0; j <= n-1; j++) {
        if (M[i][j] == 1) {
            X++;
        }
    }
    printf("\n%i", X);



}

