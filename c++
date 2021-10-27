#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
 double x1, x2, delta; 
    cin>>x1;
    cin>>x2;
    cin>>delta;
    //задаємо 3 змінні, і вводимо їх з клавіатури
    int N;
    for ( N = 0; N < 10; N++ )
    //задаємо цикл for, де N це кількість повторів;  
    { int y=x1+delta*N; y<=x2;  
     cout<<"+----------+----------+----------+"<<endl;
     cout<<"|         ";
     cout<<N;  if (y>9) { cout<<"+        ";} 
    else {cout<<"+         ";} 
    cout<<y; 
    if (y>9) { cout<<"+        ";} 
    else {cout<<"+         ";}
    // за допомогою if та else я вирішив проблему зсуву таблиці при двозначних х та у;
    cout<<y;  cout<<"|"<<endl;  
    cout<<"+----------+----------+----------+\n";   
      getch();  
    } } 
