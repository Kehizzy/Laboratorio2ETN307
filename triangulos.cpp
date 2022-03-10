// Ejercicio 1 
//               Resolución de triángulos con 3 datos
//Univ. Kehizzy Griffiths Alba
//Univ. Hugo Bolivar Pablo
#include <iostream>
#include <cstdlib>
#include <math.h>
#define pi 3.141592654
using namespace std;
int main ()
{
	//Se definen las variables que se usarán en el programa
	float a,b,c,alfa,beta,gamma,alfag,betag,gammag;
	float area,sup,mA,mB,mC;
	//Se dan las instrucciones del programa
	cout<<"El siguiente programa busca obtener los valores de los lados (a,b,c), los angulos (alfa,beta,gamma),"<<endl;
	cout<<"las medianas (mA,mB,mC),el area y la superficie de un triangulo teniendo solamente tres de estos datos."<<endl;
	cout<<""<<endl;
    cout<<"A continuacion complete los valores que conoce y si los desconoce complete con un 0"<<endl; //Se pide rellenar los datos que se conozcan
	cout<<"Lado a: ";cin>>a;
	cout<<"Lado b: ";cin>>b;
	cout<<"Lado c: ";cin>>c;
	cout<<"Alfa(angulo opuesto al lado a): ";cin>>alfa;
	cout<<"Beta(angulo opuesto al lado b): ";cin>>beta;
	cout<<"Gamma(angulo opuesto al lado c): ";cin>>gamma;

	if(a!=0)
	{
		if(b!=0)
		{
			if(c!=0)    //Primer caso cuando se tiene los tres lados
			{
				alfa=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
			    beta=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
			    gamma=acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a));
			}
			else
			{
			    if(alfa!=0) //Dos lados (a,b) y el ángulo alfa
			    {
				   beta=asin((b*sin(alfa))/a);
				   gamma=pi-alfa-beta;
				   c=(sin(gamma)*a)/sin(alfa);
			    }
			    else
			    {
			    	if(beta!=0)  //Dos lados (a,b) y el ángulo beta
			    	{
			    		alfa=asin((a*sin(beta))/b);
					    gamma=pi-alfa-beta;
					    c=(sin(gamma)*a)/sin(alfa);
				    }
				    else
				    {
				    	if(gamma!=0)  //Dos lados (a,b) y el ángulo gamma
				    	{
				    		c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(gamma));	
				        	alfa=asin((a*sin(gamma))/c);
					        beta=pi-alfa-gamma;
						}
				    }
				}				
			}
			
			                area=0.5*a*c*sin(beta);
			                sup=a+b+c;
				            mA=0.5*sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2));
				            mB=0.5*sqrt(2*(pow(a,2)+pow(c,2))-pow(b,2));
			                mC=0.5*sqrt(2*(pow(a,2)+pow(b,2))-pow(c,2));
			                alfag=alfa*180/pi;
			                betag=beta*180/pi;
			                gammag=gamma*180/pi;
			                cout<<"Las variables completas son:"<<endl;
			                cout<<"Lado a:"<<a<<"         Lado b:"<<b<<"            Lado c:"<<c<<endl;
			                cout<<"Alfa:"<<alfa<<"="<<alfag<<"      Beta: "<<beta<<"="<<betag<<"   Gamma: "<<gamma<<"="<<gammag<<endl;
			                cout<<"mA: "<<mA<<"         mB: "<<mB<<"            mC: "<<mC<<endl;
			                cout<<"Area: "<<area<<"       Superficie: "<<sup<<endl;
		}
		else
		{
			if(c!=0)
			{
				if(alfa!=0)    //Dos lados (a,c) y el ángulo alfa
			    {
				   gamma=asin((c*sin(alfa))/a);
				   beta=pi-alfa-gamma;
				   b=(sin(beta)*a)/sin(alfa);  
				}
				else
			    {
			    	if(beta!=0)   //Dos lados (a,c) y el ángulo beta
				    {
				    	b=sqrt(pow(a,2)+pow(c,2)-2*a*c*cos(beta));
					    alfa=asin((a*sin(beta))/b);
					    gamma=pi-alfa-beta;
					}
				    else
				    {
				    	if(gamma!=0)    //Dos lados (a,c) y el ángulo gamma
				        {
				        	alfa=asin((a*sin(gamma))/c);
					        beta=pi-alfa-gamma;
					        b=(sin(beta)*a)/sin(alfa);	
				        }
				    }
				}
				            area=0.5*a*c*sin(beta);
			                sup=a+b+c;
				            mA=0.5*sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2));
				            mB=0.5*sqrt(2*(pow(a,2)+pow(c,2))-pow(b,2));
			                mC=0.5*sqrt(2*(pow(a,2)+pow(b,2))-pow(c,2));
			                alfag=alfa*180/pi;
			                betag=beta*180/pi;
			                gammag=gamma*180/pi;
			                cout<<"Las variables completas son:"<<endl;
			                cout<<"Lado a:"<<a<<"         Lado b:"<<b<<"            Lado c:"<<c<<endl;
			                cout<<"Alfa:"<<alfa<<"="<<alfag<<"      Beta: "<<beta<<"="<<betag<<"   Gamma: "<<gamma<<"="<<gammag<<endl;
			                cout<<"mA: "<<mA<<"         mB: "<<mB<<"            mC: "<<mC<<endl;
			                cout<<"Area: "<<area<<"       Superficie: "<<sup<<endl;				
			}
			else
			{
				if(alfa!=0)    
	            {
	            	if(beta!=0)    //Un lado (a) y dos ángulos (alfa, beta)
	    	        {
	    	        	b=(sin(beta)*a)/sin(alfa);
	    	        	gamma=pi-alfa-beta;
	    	        	c=(sin(gamma)*a)/sin(alfa);
			        }
		        	else
			        {
			        	if(gamma!=0)    //Un lado (a) y dos ángulos (alfa, gamma)
				        {
				        	c=(sin(gamma)*a)/sin(alfa);
					        beta=pi-alfa-gamma;
					        b=(sin(beta)*a)/sin(alfa);
				        }
			        }
		        }
		        else
		        {
		        	if(beta!=0)
			        {
			        	if(gamma!=0)    //Un lado (a) y dos ángulos (beta)
				        {
				        	alfa=pi-beta-gamma;
					        c=(sin(gamma)*b)/sin(alfa);
					        b=(sin(beta)*a)/sin(alfa);
						}
		        	}
		        }
			       area=0.5*a*c*sin(beta);
			       sup=a+b+c;
				   mA=0.5*sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2));
				   mB=0.5*sqrt(2*(pow(a,2)+pow(c,2))-pow(b,2));
			       mC=0.5*sqrt(2*(pow(a,2)+pow(b,2))-pow(c,2));
			       alfag=alfa*180/pi;
			       betag=beta*180/pi;
			       gammag=gamma*180/pi;
			       cout<<"Las variables completas son:"<<endl;
			       cout<<"Lado a:"<<a<<"         Lado b:"<<b<<"            Lado c:"<<c<<endl;
			       cout<<"Alfa:"<<alfa<<"="<<alfag<<"      Beta: "<<beta<<"="<<betag<<"   Gamma: "<<gamma<<"="<<gammag<<endl;
			       cout<<"mA: "<<mA<<"         mB: "<<mB<<"            mC: "<<mC<<endl;
			       cout<<"Area: "<<area<<"       Superficie: "<<sup<<endl;
			}
		}
	}
	else
	{
		if(b!=0)
		{
			if(c!=0)
			{
				if(alfa!=0)   //Dos lados (b,c) y alfa
				{
					a=sqrt(pow(b,2)+pow(c,2)-2*c*b*cos(alfa));
					beta=asin((b*sin(alfa))/a);
					gamma=pi-alfa-beta;	
				}
				else
				{
					if(beta!=0)   //Dos lados (b,c) y beta
					{
						gamma=asin((c*sin(beta))/b);
					    alfa=pi-beta-gamma;
					    a=(sin(alfa)*b)/(sin(beta));
					}
					else
					{
						if(gamma!=0)   //Dos lados (b,c) y gamma
						{
							beta=asin((b*sin(gamma))/c);
							alfa=pi-gamma-beta;
							a=(sin(alfa)*b)/(sin(beta));
						}
					}
				}
			}
			else
			{
				if(alfa!=0)
				{
					if(beta!=0)    //Un lado (b) y dos ángulos (alfa, beta)
					{
						gamma=pi-alfa-beta;
						c=(sin(gamma)*b)/(sin(beta));
						a=(sin(alfa)*b)/(sin(beta));
					}
					else
					{
						if(gamma!=0)   //Un lado (b) y dos ángulos (alfa, gamma)
						{
							beta=pi-alfa-gamma;
							c=(sin(gamma)*b)/(sin(beta));
						    a=(sin(alfa)*b)/(sin(beta));
						}
					}
				}
				else
				{
					if(beta!=0)
					{
						if(gamma!=0)    //Un lado (b) y dos ángulos (beta, gamma)
						{
							alfa=pi-beta-gamma;
							c=(sin(gamma)*b)/(sin(beta));
						    a=(sin(alfa)*b)/(sin(beta));
						}
					}
				}
			}
			                area=0.5*a*c*sin(beta);
			                sup=a+b+c;
				            mA=0.5*sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2));
				            mB=0.5*sqrt(2*(pow(a,2)+pow(c,2))-pow(b,2));
			                mC=0.5*sqrt(2*(pow(a,2)+pow(b,2))-pow(c,2));
			                alfag=alfa*180/pi;
			                betag=beta*180/pi;
			                gammag=gamma*180/pi;
			                cout<<"Las variables completas son:"<<endl;
			                cout<<"Lado a:"<<a<<"         Lado b:"<<b<<"            Lado c:"<<c<<endl;
			                cout<<"Alfa:"<<alfa<<"="<<alfag<<"      Beta: "<<beta<<"="<<betag<<"   Gamma: "<<gamma<<"="<<gammag<<endl;
			                cout<<"mA: "<<mA<<"         mB: "<<mB<<"            mC: "<<mC<<endl;
			                cout<<"Area: "<<area<<"       Superficie: "<<sup<<endl;
		}
		else
		{
			if (c!=0)
			{
				if(gamma!=0)
			    {
			    	if(beta!=0)    //Un lado (c) y dos ángulos (gamma y beta)
				    {
				    	alfa=pi-beta-gamma;
					    b=(sin(beta)*c)/(sin(gamma));
					    a=(sin(alfa)*c)/(sin(gamma));
				    }
				    else
				    {
				    	if(alfa!=0)    //Un lado (c) y dos ángulos (gamma y alfa)
					    {
					    	beta=pi-alfa-gamma;
						    b=(sin(beta)*c)/(sin(gamma));
					        a=(sin(alfa)*c)/(sin(gamma));
					        
					    }
				    }
			    }
			    else
			    {
			    	if(alfa!=0)
				    {
				    	if(beta!=0)    //Un lado (c) y dos ángulos (alfa y beta)
					    {
					    	gamma=pi-alfa-beta;
						    b=(sin(beta)*c)/(sin(gamma));
					        a=(sin(alfa)*c)/(sin(gamma));
					    }
				    }
			    }
				
				   area=0.5*a*c*sin(beta);
			       sup=a+b+c;
				   mA=0.5*sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2));
				   mB=0.5*sqrt(2*(pow(a,2)+pow(c,2))-pow(b,2));
			       mC=0.5*sqrt(2*(pow(a,2)+pow(b,2))-pow(c,2));
			       alfag=alfa*180/pi;
			       betag=beta*180/pi;
			       gammag=gamma*180/pi;
			       cout<<"Las variables completas son:"<<endl;
			       cout<<"Lado a:"<<a<<"         Lado b:"<<b<<"            Lado c:"<<c<<endl;
			       cout<<"Alfa:"<<alfa<<"="<<alfag<<"      Beta: "<<beta<<"="<<betag<<"   Gamma: "<<gamma<<"="<<gammag<<endl;
			       cout<<"mA: "<<mA<<"         mB: "<<mB<<"            mC: "<<mC<<endl;
			       cout<<"Area: "<<area<<"       Superficie: "<<sup<<endl;			

			}
			else
			{
				if(alfa!=0)
	            {
	            	if(beta!=0)
		            {
		            	if(gamma!=0)    //Tres ángulos
			            {
			            	cout<<"Hay soluciones infinitas para estos datos"<<endl;
			            }
				    }	 
		        }	
            }
		
		}
	}			       
			       
	return 0;
}
	
	
	
	
	

