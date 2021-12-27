/* Написать метод, реализующую вычисление таблицы <...> b=2, x на интервале от 0 до 3pi
с шагом 0.1pi. X, a и b являются передаваемыми параметрами метода.
Метод возвращает посчитанные значения. Показать пример использования реализованного метода. */

#include <iostream>
#include <cmath>

using namespace std;

const int P = 3.14;

void mu(int b){
	float y;
	for(float x = 0; x < 3; x += 0.1) {
		y = 1 + sin(pow(b,3)+pow(x*P,3));
		cout <<x<<" P "<<"     "<<y<<endl;
	}
}

int main()
{
	int b = 2;
	mu(b);
}
