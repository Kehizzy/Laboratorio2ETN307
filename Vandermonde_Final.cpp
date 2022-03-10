// Ejercicio 2 
//               Generar matriz de vandermonde y su determinante
//Univ. Kehizzy Griffiths Alba
//Univ. Hugo Bolivar Pablo

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cmath>
using namespace std;

//Se llama a la función gotoxy para organizar mejor los valores en las matrices
COORD coord;

void gotoxy(int x, int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
	short int n, i, j, k,a; //Se definen las variables
	
	cout<<"Introduzca el tamaño de la matriz: ";
	cin>>n;  //Se obtiene el tamaño de la matriz
	
	float matriz[n][n];  //Se define la matriz de tamaño nxn
	float aux, pivote, pivote1,deter=1;  //Se definen las variables para la determinante iniciando en 1
	
	
	for(i=0; i<n; i++)  //Con este ciclo la primera fila de n columnas estara llena de 1
	{
		for(j=0; j<n; j++)
		{
			matriz[0][j]=1;
		}
	}
	cout<<"Introduzca los datos de la segunda fila de la matriz: "<<endl; //Se piden los valores para cada columna de la segunda fila
	for (i=1; i<2; i++)
	{
		for (j=0; j<n; j++)
		{
			gotoxy(4+j*4,5+i);
			cin>>a;
			matriz[1][j]=a;
		}
	}
	for(i=2; i<n; i++)  //Con este ciclo rellenamos las casillas desde la tercera fila
	{
		for(j=0; j<n; j++)
		{
			matriz[i][j]=pow((matriz[1][j]),i);  //Se da el valor para las casillas con la potenia de la fila y los datos de la segunda fila
		}
	}
		
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			gotoxy(50+j*4,5+i);
			cout<<matriz[i][j];   //Se muestra la matriz final de Vandermonde
		}
	}
	
	//Reducción de filas
	
	for (i=0; i<n; i++)
	{
		pivote=matriz[i][i];
		for (j=i+1; j<n; j++)
		{
			pivote1=matriz[j][i];  //Se definen el primer pivote que son los valores que queremos reducir a 0
			aux=pivote1/pivote;  //identificamos el valor que multiplicaremos para reducir a 0
			for (k=0; k<n; k++)
			{
				matriz[j][k]=matriz[j][k]-aux*matriz[i][k];  //Se reduce a 0 el elemento de la fila del pivote y se aplica a todos los elementos de la fila
			}
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			gotoxy(100+j*4,5+i);
			cout<<matriz[i][j];   //Mostramos la matriz reducida
		}
	}
	
	//Deter
	for (i=0; i<n; i++)  // recorre toda la diagonal
	{
			    deter*=matriz[i][i];  //Se multiplican los valores de la diagonal en la matriz reducida
	}
	
	cout<<"\n\n La determinante de la matriz es: "<<deter<<endl;  //mostramos el valore de la determinante
	
	
	return 0;
}
