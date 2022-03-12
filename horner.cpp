// Ejercicio 3 
//            División de polinomios Método Horner   
//Univ. Kehizzy Griffiths Alba
//Univ. Hugo Bolivar Pablo

#include <iostream>
#include<math.h>

using namespace std;
double a, b, c, d, e, p, q, r;
double A, B, C, P, Q;
int main(){
cout<<"El siguiente programa esta hecho para resolver divisiones de polinomios de grado 4 en el numerador y "<<endl;
cout<<"de grado 2 en el denominador; si sus polinomios son de menor grado por favor complete con 0"<<endl;
cout<<"los polinomios son de la forma:         ax^4+bx^3+cx^2+dx+e"<<endl;
cout<<"                                       ----------------------"<<endl;
cout<<"                                             px^2+qx+r"<<endl;
cout<<"Ingrese valores para el numerador"<<endl<<endl;
cout<<"Ingrese un valor para a: "; cin>>a;
cout<<"Ingrese un valor para b: "; cin>>b;
cout<<"Ingrese un valor para c: "; cin>>c;
cout<<"Ingrese un valor para d: "; cin>>d;
cout<<"Ingrese un valor para e: "; cin>>e;

cout<<"\nIngrese valores para el denominador"<<endl<<endl;
cout<<"Ingrese un valor para p: "; cin>>p;
cout<<"Ingrese un valor para q: "; cin>>q;
cout<<"Ingrese un valor para r: "; cin>>r;

A=a/p;
B=((b*p)-(a*q))/(p*p);
C=((c*(p*p))-(a*p*r)+(a*(q*q))-(b*p*q))/(p*p*p);

P=((d*(p*p*p))+(2*a*q*p*r)-(b*r*(p*p))+(b*p*(q*q))-(a*(q*q*q))-(c*q*(p*p)))/(p*p*p);
Q=((e*(p*p*p))+(b*q*p*r)-(a*r*(q*q))+(a*p*(r*r))-(c*r*(p*p)))/(p*p*p);

cout<<"El Cociente es = " <<A<<B<<C<<endl;
cout<<"El Residuo es = " <<P <<Q <<endl;

return 0;
}
