#include <stdio.h>

int main (){
int a [8]= {2,3,4,5,6,7,8};
int b [8]= {65, 73,85,90,5,10,15};
for (int i= 0 ; i < 7 ;i++)
    printf ("%d\t", a[i]/ b[i]);
}
