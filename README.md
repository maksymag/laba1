#include <stdio.h> 
  
int main() 
{ 
    double x1, x2, delta; 
    scanf("%lf", &x1); 
    scanf("%lf", &x2); 
    scanf("%lf", &delta); 
    int N; 
    for ( N = 0; N < 10; N++ ) { int y=x1+delta*N; y<=x2;  
    printf("+----------+----------+----------+\n");  
    printf("|         ");  printf ("%d", N); printf("+        "); printf("%d", y);  printf("+          "); printf("%d", y);  printf("|\n"); 
    printf("+----------+----------+----------+\n");  
      getchar(); 
    } 
   
}
