#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
	
	int n1,n2,n3,max,med,min;
	
	cout<<"Ingrese tres numeros: "<<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	
	if ((n1>n2)&&(n1>n3)){
		max=n1;
	}else if (((n1>n2)&&(n1<n3)||(n1<n2)&&(n1>n3))){
		med=n1;
	}else if ((n1<n2)&&(n1<n3)){
		min=n1;
	}
	if ((n2>n1)&&(n2>n3)){
		max=n2;
	}else if (((n2>n1)&&(n2<n3)||(n2<n1)&&(n2>n3))){
		med=n2;
	}else if ((n2<n1)&&(n2<n3)){
		min=n2;
	}	
	if ((n3>n2)&&(n3>n1)){
		max=n3;
	}else if (((n3>n2)&&(n3<n1)||(n3<n2)&&(n3>n1))){
		med=n3;
	}else if ((n3<n2)&&(n3<n1)){
		min=n3;
	}
	
	cout<<"Minimo-> "<<min<<endl;
	cout<<"Medio-> "<<med<<endl;
	cout<<"Maximo-> "<<max<<endl;
	
	system("Pause");
	return 0;
}
