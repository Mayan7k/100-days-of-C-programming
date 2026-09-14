//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>

int main(){
    int len,wid;
    scanf("%d %d",&len,&wid);
    printf("area= %d",len*wid);
    printf("perimeter= %d",2*(len+wid));
    return 0;
}
