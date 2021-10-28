#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    double x1, x2, delta, x, y;
unsigned int v, N, n;
do
{printf("Enter variant (1 or 2):");
scanf("%u", &v); 
  if (v!=1 && v!=2) {printf("Are you understand English language?\n");} //вибір неправильного варіанту
  } while (v!=1 && v!=2);

printf("Enter x1:");
scanf("%lf", &x1); 

printf("Enter x2:");
   
    scanf("%lf", &x2);  //ввід мінімального та максимального значення х

if (x1!=x2){

switch (v) //вибір варіанту


{ case 1: v=1; //вибір 1-го варіанту
printf("Enter N:");
    scanf("%uf", &N);
    delta=(x2-x1)/N; //обрахунок зміни функції 

printf("x1=%lf\n", x1); printf("x2=%lf\n", x2); printf("delta=%lf\n", delta); printf("N=%u\n", N);

    for ( n = 0; n < N; n++ ) { int y=x1+delta*n; y<=x2; 
    printf("+---------N+---------x1+-----y(x)+\n");    //заголовок і початок побудови таблиці
    printf("+----------+----------+----------+\n");   
    printf("|         ");  printf ("%d", n);  if (y>9) { printf("+        ");} 
    else {printf("+         ");} 
    printf("%d", y);  
    if (y>9) { printf("+        ");} 
    else {printf("+         ");} 
    printf("%d", y);  printf("|\n");  
    printf("+----------+----------+----------+\n");   
      getchar();  //пауза до натискання кнопки
    }
break;

case 2: v=2; //вибір 2-го варіанту
printf("Enter delta:");
    scanf("%lf", &delta); //ввід різниці функції
    N=(x2-x1)/delta;
    
    printf("x1=%lf\n", x1); printf("x2=%lf\n", x2); printf("delta=%lf\n", delta); printf("N=%u\n", N);
    
    if ((x2-x1)>0){
    if ((x2-x1)<N) {N=1; printf("building of tablica is impossible, program changed N to 1\n");} } //це я намагався прибрати дробові N
    
    if ((x2-x1)<0)
    { if ((x1-x2)<N) {N=1; printf("building of tablica is impossible, program changed N to 1\n");} } //це я намагався прибрати дробові N
    
    for ( n = 0; n < N; n++ ) { int y=x1+delta*n; y<=x2;
    printf("+---------N+---------X1+-----y(x)+\n");     //заголовок і початок побудови таблиці
    printf("+----------+----------+----------+\n");   
    printf("|         ");  printf ("%d", n); 
    if (y>9) //це я прибрав зсув таблиці при двозначних х та у
    { printf("+        ");} //для гарного вигляду
    else {printf("+         ");} 
    
    printf("%d", y);  
    if (y>9) { printf("+        ");} //у мене х=у, тому це також прибирає зсув
    else {printf("+         ");} 
    printf("%d", y);  printf("|\n");  
    printf("+----------+----------+----------+\n");   
      getchar();  //пауза до натискання кнопки
    }
break; //зупинка алгоритму
default: printf("Ви жартуєте?");} //вивід у випадку вибору некоректного варіанту
} 
else {printf("N=0, delta=0, building of tablica is imposible");} //вивід у випадку х1=х2
}
