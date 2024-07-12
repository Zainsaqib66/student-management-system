#include <stdio.h>
int main (){
    int number , i , num;
    printf("Enter a number ");
scanf ("%d", &number );


for (i = 1 ; i <= 10 ; i++){
    printf ("%d * %d = %d\n", i , number, i * number );

}
printf ("Enter the second number");
scanf ("%d", &num);

for (i = 1 ; i <= 10 ; i++){
 printf ("%d * %d = %d\n", i , num, i * num );
}
return 0;
}
