/* �������� ����� ������� ��������� ���������� �� ������
��������� �������������� �������� ������������� �����������.  */

#include <iostream>
using namespace std;

void pryamougolnik(int h, int w, char s){
	for(int i=0; i<h; i++)	{
		if(i==0){
		for(int i = 0; i<w; i++){
			cout<<s;
		}
		cout<<endl;
	} else if((i!=0) && (i!=h-1)){
		cout<<s;
		for(int i = 0;i<w-2;i++){
			cout<<" ";
		}
		cout<<s<<endl; 
	}
	else if(i==h-1){
		for(int i = 0;i<w;i++){
			cout<<s; 
		}
	}	
	}
}
int main()
{
	int h;
	int w;
	char s;
	cin>>h>>w>>s; 
	pryamougolnik(h,w,s); 
}
