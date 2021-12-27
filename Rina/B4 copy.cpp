#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int maximum(int Array){
    int *Arr = new int*[]
    int maxx = 10^100;
    int size = sizeof(Array)/sizeof(Array[0]);
    for(int i=0; i<size; i++){
        if(Array[i]>maxx) maxx = Array[i];
    }
    return maxx;
}

int main(){
SetConsoleOutputCP(1251);
int maxx;
int Array[8] = {12, 33, 677, 43, 11, 8888, 12, 11};
maxx = maximum(Array);
cout<<maxx<<endl;
 
    return 0;
}