#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*Programa de facturación y calculadora*/
using namespace std;
int main() 
{
	int op, num1, num2, dinero;
	char funcion;
	float total;
	do
	{
	cout<<"\nBienvenido al sistema de facturacion y calculadora.\nPresione \na - para operar \nz - para salir\n";
	cin>>funcion;
	
	if (funcion==('a'))
	{
	cout<<"\nElija la operacion que desea realizar: \n1 - para suma \n2 - para resta \n3 - para multiplicacion \n4 - para division \n5 - ingreso de dinero \n6 - retiro de dinero\n";
	cin>>op;
		if (op==1)
		{
		cout<<"\nUsted eligio la opcion de suma ";
		cout<<"\nIntroduzca el primer numero entero: ";
		cin>>num1;
		cout<<"\nIntroduzca el segundo numero entero: ";
		cin>>num2;
		total=num1+num2;
		cout<<"\nEl total de la suma es: " <<total;
		}
			else if (op==2)
			{
			cout<<"\nUsted eligio la opcion de resta ";
			cout<<"\nIntroduzca el primer numero entero: ";
			cin>>num1;
			cout<<"\nIntroduzca el segundo numero entero: ";
			cin>>num2;
			total=num1-num2;
			cout<<"\nEl total de la resta es: " <<total;
			}
				else if (op==3)
				{
				cout<<"\nUsted eligio la opcion de multiplicacion ";
				cout<<"\nIntroduzca el primer numero entero: ";
				cin>>num1;
				cout<<"\nIntroduzca el segundo numero entero: ";
				cin>>num2;
				total=num1*num2;
				cout<<"\nEl total de la multiplicacion es: " <<total;
				}
					else if (op==4)
					{
					cout<<"\nUsted eligio la opcion de division ";
					cout<<"\nIntroduzca el primer numero entero: ";
					cin>>num1;
					cout<<"\nIntroduzca el segundo numero entero: ";
					cin>>num2;
					total=num1-num2;
					cout<<"\nEl total de la division es: " <<total;
					}
						else if (op==5)
						{
						cout<<"\nUsted eligio la opcion de ingreso de dinero ";
						cout<<"\nIntroduzca la cantidad de dinero que desea ingresar: ";
						cin>>dinero,
						cout<<"\nUsted ingreso en la cuenta: " <<dinero;
						}
							else if (op==6)
							{
							cout<<"\nUsted eligio la opcion de retiro de dinero ";
							cout<<"\nIntroduzca la cantidad de dinero que desea retirar: ";
							cin>>dinero,
							cout<<"\nUsted retiro de la cuenta: " <<dinero;
							}
								else if (op>=7)
								{
									cout<<"\nUsted eligio una opcion invalida.";
								}
		}
		if (funcion=='z')
		{
		cout<<"\nHasta la proxima.";
		return 0;
		}
		}
		while (op>=1 || op<=6);
	}
