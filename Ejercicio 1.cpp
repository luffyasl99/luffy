#include <iostream>
using namespace std;
int main()
{
int n1;
int suma=0;
do
{
	cout<<"Digite el valor: ";
	cin>> n1;
		if (n1>=0)
		{
			suma+=n1;
		
		}
	
		cout<<"La suma obtenida es: "<<suma<<endl;
}	while (n1>=0);
return 0;
}
