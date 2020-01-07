#include<stdio.h>

int main()
{
    array=SCREEN;
    n = 8192; //螢幕大小
    i = 0;
    while(i<n)
    {
        if(*KBD != 0) 
        {
            array[i] = -1;
            i=i+1   ;
        }
       else array[i] = 0;
    }

}