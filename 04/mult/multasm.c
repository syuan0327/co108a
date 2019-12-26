#include <stdio.h>

int main() {
    int R0 = 3; 
    int R1 = 5;
    int R2 = 0;// @2, M=0
    
 WHILE:   // (WHILE)
    //while (R0 > 0) {
      if (R0<=0) goto EXIT; // @0, D=M, @EXIT, D;JLE, 
      R2 = R2 + R1;//@R1,D=M,@R2,M=D+M
      R0 = R0 - 1;//@R0,M=M-1
      printf("R0=%d R1=%d R2=%d\n", R0, R1, R2);
    // }
    goto WHILE; // @WHILE, 0;JMP
EXIT: // (EXIT)
    printf("R2=%d\n", R2);
}