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

    if (M[1][4] == 1) {
        printf("\n Busur B-D ada");
        if(M[1][3] == 1) {
            printf("\n Busur D-E ada");
        } else {
            printf("\n Busur B-E ada");
        }
    } else {
        printf("\n Busur A-E tidak ada");
    }
}

