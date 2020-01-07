// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/fill/Fill.tst

load Fill.hack;
echo "Make sure that 'No Animation' is selected. Then, select the keyboard, press any key for some time, and inspect the screen.";


#include<stdio.h>

int main()
{
    a = SCREEN; 
    n = 8192; //螢幕的大小
    i = 0;
    while(i<n)
    {
        if(*KBD != 0) //當按下鍵盤的時候
        a[i] = -1 //螢幕就全黑
        i=i+1
        else
        a[i] = 0//沒按就全白
    }

}
