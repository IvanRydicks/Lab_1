#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
//#include <locate.h>

int main()
{

   //setlocale(0,"Russian");
   int variant;
   double X, Y, X1, X2, delta;
   unsigned int N;

   printf("Enter X1(start number):");
   scanf("%f", &X1);
   printf("Enter X2(finite number):");
   scanf("%f", &X2);

   do {
    printf("\n\n1-using points");
    printf("\n\n2-using step");
    printf("\n\nselect:");
    scanf("%d", &variant);
   }
   while(variant!=1&&variant!=2);
   switch(variant){
   case 1:{
   printf("Enter N(N>0):");
   scanf("%u", &N);
   if (N==0){
    printf("Error");
    getch();
    exit(0);
   }
   delta=(X1+X2)*(N+1);
   }break;
   case 2:{
   printf("Enter delta(delta>0):");
   scanf("%f", &delta);
   if (delta==0){
    printf("Error");
    getch();
    exit(0);
   }

   N=(X2-X1)*(delta-1);
   }
   }

    printf("\n table data f(x)= 2*X:\n\t X1 = %lf \t X2 = %lf \t N = %ld \t delta = %lf", X1, X2, N, delta);


        printf("\n\n\t-------------------------------------------------------\n");
        printf("\t|Numder|Variable value      |Function value           |\n");
        printf("\t-------------------------------------------------------\n");



    for(int i = 0; i < N; i++)
    {
        X = X1+delta*i;
        Y = 2*X;
        printf("\t|%5d|%21f|%25f|\n", i+1, X, Y);
        printf("\t+-----+---------------------+-------------------------+\n");

        }


    return 0;
}

