#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void tabl(int a, int b){
    for(int j=1; j<=9; j++){
        for(int i=1; i<=a; i++){
            if ((i==a)&&(j>b)) break;
            else cout<<i<<" * "<<j<<" = "<<i*j<<"\t";
        }
        cout<<endl;
    }
}

int main(){
SetConsoleOutputCP(1251);
int a = 9, b = 5;
tabl(a,b);
    return 0;
}
