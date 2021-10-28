#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    double x1, x2, delta, x, y;
unsigned int v, N, n;
do
{printf("Enter variant (1 or 2):");
scanf("%u", &v); 
  if (v!=1 && v!=2) {printf("Are you understand English language?\n");} 
  } while (v!=1 && v!=2);

printf("Enter x1:");
scanf("%lf", &x1); 

printf("Enter x2:");
   
    scanf("%lf", &x2);  

if (x1!=x2){

switch (v) 


{ case 1: v=1; 
printf("Enter N:");
    scanf("%uf", &N);
    delta=(x2-x1)/N; 

printf("x1=%lf\n", x1); printf("x2=%lf\n", x2); printf("delta=%lf\n", delta); printf("N=%u\n", N);

printf("+---------N+---------x1+-----y(x)+\n");
    for ( n = 0; n <=N; n++ ) { int y=x1+delta*n; y<=x2; 
  
    printf("+----------+----------+----------+\n");   
    printf("|         ");  printf ("%d", n);  if (y>9) { printf("+        ");} 
    else {printf("+         ");} 
    printf("%d", y);  
    if (y>9) { printf("+        ");} 
    else {printf("+         ");} 
    printf("%d", y);  printf("|\n");  
    printf("+----------+----------+----------+\n");   
      getchar();  
    }
break;

case 2: v=2; 
printf("Enter delta:");
    scanf("%lf", &delta); 
    N=(x2-x1)/delta;
    
    printf("x1=%lf\n", x1); printf("x2=%lf\n", x2); printf("delta=%lf\n", delta); printf("N=%u\n", N);
    
    if ((x2-x1)>0){
    if ((x2-x1)<N) {N=1; printf("building of tablica is impossible, program changed N to 1\n");} } 
    
    if ((x2-x1)<0)
    { if ((x1-x2)<N) {N=1; printf("building of tablica is impossible, program changed N to 1\n");} }
    printf("+---------N+---------X1+-----y(x)+\n");
    for ( n = 0; n <=N; n++ ) { int y=x1+delta*n; y<=x2;
     
    printf("+----------+----------+----------+\n");   
    printf("|         ");  printf ("%d", n); 
    if (y>9) 
    { printf("+        ");} 
    else {printf("+         ");} 
    
    printf("%d", y);  
    if (y>9) { printf("+        ");} 
    else {printf("+         ");} 
    printf("%d", y);  printf("|\n");  
    printf("+----------+----------+----------+\n");   
      getchar(); 
    }
break; 
default: printf("Ви жартуєте?");}
} 
else {printf("N=0, delta=0, building of tablica is imposible");} 
}
