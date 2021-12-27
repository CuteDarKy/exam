#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void count(int a){
    int check = 0;
    for(int i=1; i<=a; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=a; i>0; i-=2){
        cout<<i<<" ";
        if(i-2==0) cout<<1;        
    }
    cout<<endl;
}

int main(){
SetConsoleOutputCP(1251);
int number = 34;
count(number);
    return 0;
}