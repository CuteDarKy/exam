/* Создайте класс утка с методами swim, и методами fly и quack. 
Показать пример использования реализованного класса. */

#include <iostream>
#include <string>
using namespace std;

class duck{
    public:
	    string name;
	
	    void swim(){
		    cout<<name<<" is swimming"<<endl;
	}
	    void fly(){
		    cout<<name<<" is flying"<<endl;
	}
	    void quack(){
		    cout<<name<<" is quacking"<<endl;
	}
};

int main(){
	duck the_best;
	the_best.name="Kryakva";
	the_best.swim();
	the_best.fly();
	the_best.quack();
}
