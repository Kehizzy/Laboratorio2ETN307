// Ejercicio 4 
//             Sistema de ecuaciones 2x2
//Univ. Kehizzy Griffiths Alba
//Univ. Hugo Bolivar Pablo

#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
	float a, b, c, d, e, f, x, y;   //Se definen lasvariables
	cout<<"El siguiente programa esta diseñado para resolver un sistema de ecuaciones de la forma"<<endl; // Se dan las instrucciones del programa
	cout<<"                      ax + by = c"<<endl;
	cout<<"                      dx + ey = f"<<endl;
	cout<<"A continuacion rellene los datos correspondientes para la primera ecuacion:"<<endl;
	cout<<"a: "; cin>>a; 	cout<<"b: "; cin>>b;  cout<<"c: "; cin>>c;  //Se leen los datos de los coeficientes primera ecuación
	cout<<"Y para la segunda ecuacion: "<<endl;
	cout<<"d: "; cin>>d; 	cout<<"e: "; cin>>e;  cout<<"f: "; cin>>f;  //Se leen los datos de los coeficientes segunda ecuación
	
	y=((c*d)-(f*a))/((d*b)-(a*e));  //Mediante suma de ecuaciones se despeja y
	x=(c-(b*y))/a;   //De la primeraecuación se despeja "x" y ya se cuenta con un valor de "y"
	
	cout<<"Las soluciones para el sistema de ecuaciones: "<<endl;  //Se muestra el sistema con los valores ingrasados
	cout<<"            "<<a<<"x + "<<b<<"y = "<<c<<endl;
	cout<<"            "<<d<<"x + "<<e<<"y = "<<f<<endl;
	cout<<"x = "<<x<<endl;  //Se dan las soluciones de "x" y "y"
	cout<<"y = "<<y<<endl;
}
