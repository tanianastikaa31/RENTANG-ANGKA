
#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
double NilaiUjian;
char skor;
cout<<"TANIA NASTIKA" ; 
cout<<" Masukan Nilai Ujian : ";
cin>>NilaiUjian;

if(NilaiUjian >= 95)
skor= 'A' ;
else

if(NilaiUjian >= 85)
skor= 'B';
else

if(NilaiUjian >= 75)
skor= 'C';
else 

if(NilaiUjian >= 65)
skor= 'D';
else
skor= 'E';
    
cout<<" Skor : "<<skor<<endl;
getch () ;
}
