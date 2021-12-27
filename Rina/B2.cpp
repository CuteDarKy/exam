#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void status(int age){
    if((age<0)||(age>120)) cout<<"repit";

    if((age>0)&&(age<8)) cout<<"Doshcol";
    if((age>7)&&(age<12)) cout<<"Nach sh";
    if((age>11)&&(age<16)) cout<<"Sr sh";
    if((age>15)&&(age<19)) cout<<"St sh";
    if((age>16)&&(age<22)) cout<<"Student";
    if((age>21)&&(age<65)) cout<<"Rab";
    if(age>64) cout<<"Pens"; 
}

int main(){
SetConsoleOutputCP(1251);
setlocale(LC_ALL,"Russian");
int age = 12;
status(age);
    return 0;
}
