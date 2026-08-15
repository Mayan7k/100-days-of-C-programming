//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


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
