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

    if (M[0][1] == 1) {
        printf("\n Busur A-B ada");
        if(M[1][2] == 1) {
            printf("\n Busur B-C ada");
        } else {
            printf("\n Busur B-C ada");
        }
    } else {
        printf("\n Busur B-C tidak ada");
    }
}

