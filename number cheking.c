#include <stdio.h>
int main (){
int max , min , mid ;
int number[10];
int i, j , temp;

printf ("Enter the 10 numbers : \n");
for (i = 0 ; i < 10 ; i++)
    scanf ("%d", &number[i]);

    for (i = 0 ; i < 9 ; i++){
        for (j = i + 1 ; j < 10 ; j++){
            if (number[i]> number[j]){
                temp = number[i];
                number[i] = number[j];
                number[j]= temp;

            }
        }
    }
    min = number[0];
    max = number[9];
    mid = number [4];

    printf ("The large  is %d \n ", max);
    printf ("The mid is %d \n", mid );
    printf ("The small  is %d \n", min);

}
