//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main(){
    int time;
    scanf ("%d",&time);
    int minutes=time%60;
    int hours=minutes%60;
    int seconds=time%10;
    printf("%d : %d : %d",hours,minutes,seconds);
    return 0;
}