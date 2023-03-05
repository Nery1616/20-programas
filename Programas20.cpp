#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void gotoxy(int x1, int y1){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x1;
    dwPos.Y = y1;
    SetConsoleCursorPosition(hcon,dwPos);

}

int main(int argc, char const *argv[]){
	char punto;
	int u=10, w=10;
	int opcion;
	cout<<"______BIENVENIDO______"<<endl;
	cout<<"Ingrese un numero del 1 al 20 para seleccionar el programa que quiere ejecutar.... "<<endl;
	cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros "<<endl;
	cout<<"2. Determinar si un numero es par o impar "<<endl;
	cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa "<<endl;
	cout<<"4. Determinar si una palabra o un numero es palindromo. "<<endl;
	cout<<"5. Conversion de numeros arabigos a romanos (minimo 1,000) "<<endl;
	cout<<"6. Conversion de numeros enteros a letras "<<endl;
	cout<<"7. Conversion de numeros enteros con decimal a letras "<<endl;
	cout<<"8. Una tabla de multiplicar "<<endl;
	cout<<"9. Todas las tablas de multiplicar del 1 al 10 "<<endl;
	cout<<"10. Crear de forma grafica la multiplicacion manual "<<endl;
	cout<<"11. Conversion de numeros decimales a binario "<<endl;
	cout<<"12. Conversion de numeros decimales a hexadecimales "<<endl;
	cout<<"13. Crear Figuras Geometricas Basicas. "<<endl;
	cout<<"14. Mover un punto en toda la pantalla "<<endl;
	cout<<"15. Simulacion de un Cajero (Automata) "<<endl;
	cout<<"16. Calcular la hipotenusa "<<endl;
	cout<<"17. Leer cual numero es mayor. "<<endl;
	cout<<"18. Encontrar los resultados por la formula general "<<endl;
	cout<<"19. Escribir un programa que introduzca un mes (1-12) y visualice el numero de dias de ese mes"<<endl;
	cout<<"20. Escribir una funcion que convierta una temperatura dada en grados celcius a grados fahrenheit "<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1:
				double a,b, sum,res,mul,div; //No use un int ya que no especificaba que los numeros que se ingresaran seran enteros.
	
				cout<<"Ingrese el primer numero: "<<endl;
				cin>>a;
				cout<<"Ingrese el segundo numero: "<<endl;
				cin>>b;
				
				sum= a+b;
				res= a-b;
				mul= a*b;
				div= a/b;
				
				cout<<"La suma de los numeros es: "<<sum<<endl;
				cout<<"La resta de los numeros es: "<<res<<endl;
				cout<<"La multiplicacion de los numeros es: "<<mul<<endl;
				cout<<"La division de los numeros es: "<<div<<endl;
				break;
		case 2:
				int c;
	
				cout<<"Ingrese un numero: "<<endl;
				cin>>c;
				
				if(c==0){
					cout<<"El numero ingresado es cero ";
				}
				else if (c%2==00){
					cout<<"El numero ingresado es par: ";
				}
				else {
					cout<<"El numero ingresado es impar: ";
				}
				break;
		case 3:
			int num;
			double d,e,f,km,mi,mts,pul,lb,kil;
			
			cout<<"Ingrese una opcion: "<<endl;
			cout<<"1. kilometros a millas y viceversa"<<endl;
			cout<<"2. metros a pulgadas y viceversa"<<endl;
			cout<<"3. libras a kilos y viceversa"<<endl;
			cin>>num;
			
				"/n";
			
				
			switch (num){
				case 1:
					
					cout<<"__Kilometros a millas, millas a kilometros__ "<<endl;
					cout<<"Ingrese una cantidad: "<<endl;
					cin>>d;
					km=d* 1.60934;
					mi=d* 0.621371;
					cout<<"kilometros a millas: "<<mi<<" Mill"<<endl;
					cout<<"millas a kilometros: "<<km<<" Km"<<endl;
					break;
				
				case 2:
					cout<<"__Metros a pulgadas, pulgadas a metros__"<<endl;
					cout<<"Ingrese una cantidad: "<<endl;
					cin>>e;
					mts=e*0.0254;
					pul=e*39.3701;
					cout<<"Metros a pulgadas: "<<pul<<" Pul"<<endl;
					cout<<"pulgadas a metros: "<<mts<<" Mts"<<endl;
					break;	
					
				case 3:
					cout<<"__Libras a kilos, kilos a libras__"<<endl;
					cout<<"Ingrese una cantidad: "<<endl;
					cin>>f;
					lb=f*2.20462;
					kil=f*0.453592;
					cout<<"Libras a kilos: "<<kil<<" Kls"<<endl;
					cout<<"Kilos a libras: "<<lb<<" Lbs"<<endl;
					break;
					
				default:
					cout<<"Lo siento, No existe esta opcion. "<<endl;}
					break;		
				
		case 4:
		{
			string dato;
			string resultado;
			int i=0;
			
			cout<<"Ingrese un numero o palabra para verificar si es palindromo: "<<endl;
			cin>>dato;
			
			for(i= dato.size() -1;i>=0; i--){
				resultado += dato[i];
			}
			if(dato==resultado){
				cout<<"El dato ingresado "<<dato<<" es palindromo"<<endl;
			}
			else {
				cout<<"El dato ingresado "<<dato<<" no es palindromo"<<endl;
			}
				}
					break;
		case 5:
			int numero, uni,dec,cen,mil;
			cout<<"Digite un numero: "<<endl;
			cin>>numero;
			
			uni= numero%10;numero/=10;
			dec= numero%10;numero/=10;
			cen= numero%10;numero/=10;
			mil= numero%10;numero/=10;
			
			switch(mil){
				case 1: cout<<"M";	break;
				case 2: cout<<"MMM"; break;
				case 3: cout<<"MMMM"; break;
			}
			
			switch(cen){
				case 1:cout<<"C";break;
				case 2:cout<<"CC";break;
				case 3:cout<<"CCC";break;
				case 4:cout<<"CD";break;
				case 5:cout<<"D";break;
				case 6:cout<<"DC";break;
				case 7:cout<<"DCC";break;
				case 8:cout<<"DCCC";break;
				case 9:cout<<"CM";break;	
			 }
			 
			 switch(dec){
			 	
			 	case 1:cout<<"X";break;
				case 2:cout<<"XX";break;
				case 3:cout<<"XXX";break;
				case 4:cout<<"XL";break;
				case 5:cout<<"L";break;	
				case 6:cout<<"LX";break;
				case 7:cout<<"LXX";break;
				case 8:cout<<"LXXX";break;
			 	case 9:cout<<"XC";break;
			 }
			 
			 switch(uni){
			 	case 1:cout<<"I";break;
			 	case 2:cout<<"II";break;
				case 3:cout<<"III";break;
				case 4:cout<<"IV";break;
				case 5:cout<<"V";break;
				case 6:cout<<"VI";break;
				case 7:cout<<"VII";break;
				case 8:cout<<"VIII";break;
				case 9:cout<<"IX";break;	
			 } 
			break;
		case 6:
			{
				    {
		     double valor;
		     int miles,cientos,unidades,decimales;
		     char numeros[100][20] = 
		     {
		     {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
		     {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
		     {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
		     {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
		     {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
		     {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
		     {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
		     {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
		     {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
		     {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
		      };
		     char centenas[10][20] = 
		     {
		     {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
		     };
		     std::cout << "Ingrese el numero que quiere transcribir: ";
		     std::cin >> valor;
		     miles = ((int)valor)/1000;
		     cientos = (((int)valor)%1000)/100;
		     unidades = ((int)valor)%100;
		     decimales = ((int) (valor*100.0))%100 ;
		     if (miles)
		     std::cout << numeros[miles] << " mil ";
		     if (cientos)
		     std::cout << centenas[cientos] << " ";
		     if (unidades) 
		     std::cout << numeros[unidades];
		     if (decimales)
		      {
		     if(miles || cientos || unidades)
		     {
		     std::cout << " con ";
		     }
		     std::cout << numeros[decimales] << " centimos.";
		     }
		     std::cout << std::endl;
		     system("pause");
		     return 0;
			 } 
		 	}
			break;
		case 7:
			    {
			     double valor;
			     int miles,cientos,unidades,decimales;
			     char numeros[100][20] = 
			     {
			     {""},{"uno"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
			     {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
			     {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
			     {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
			     {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
			     {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
			     {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
			     {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
			     {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
			     {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
			      };
			     char centenas[10][20] = 
			     {
			     {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
			     };
			     std::cout << "Ingree el numero para transcribir en letras: ";
			     std::cin >> valor;
			     miles = ((int)valor)/1000;
			     cientos = (((int)valor)%1000)/100;
			     unidades = ((int)valor)%100;
			     decimales = ((int) (valor*100.0))%100 ;
			     if (miles)
			     std::cout << numeros[miles] << " mil ";
			     if (cientos)
			     std::cout << centenas[cientos] << " ";
			     if (unidades) 
			     std::cout << numeros[unidades];
			     if (decimales)
			      {
			     if(miles || cientos || unidades)
			     {
			     std::cout << " con ";
			     }
			     std::cout << numeros[decimales] << " centimos.";
			     }
			     std::cout << std::endl;
			     system("pause");
			     return 0;
				 } 
			break;
		case 8:
			int g,h,resultado;
			cout<<"Ingrese un numero entero, para ver su respectiva tabla de multiplicar: "<<endl;
				cin>>g;
				
				for(h=1;h<=12;h++){
					resultado= g*h;
					cout<<g<<"x"<<h<<"="<<resultado<<endl;
				}
			break;
		case 9:
			{
				int j,k,resul;
	
				do{
					cout<<"Ingrese un numero de 1 a 10 para conocer su tabla de multiplicacion: "<<endl;
					cin>>j;
				}while((j<1)||(j>10));
				
				for(k=1;k<=12;k++){
					resul= j*k;
					cout<<j<<"x"<<k<<"="<<resul<<endl;					
				}
			}	
			break;
		case 10:
			     {
			     int num1 = 45, num2 = 32, resultado, espacio = 0;
			     cout << "  " << num1 << endl;
			     cout << "x " << num2 << endl;
			     cout << "-----" << endl;
			     while (num2 > 0) {
			        resultado = num1 * (num2 - int(num2));
			        num2 = int(num2);
			        espacio += 1;
			        for (float i = 0; i < espacio; i += 1) {
			            cout << " ";
			        }
			        cout << resultado << endl;
			        resultado = num1 * num2;
			        for (float i = 0; i < espacio; i += 1) {
			            cout << " ";
			        }
			        cout << resultado << endl;
			        for (float i = 0; i < espacio; i += 1) {
			            cout << " ";
			        }
			        cout << "-----" << endl;
			        num2 /= 10;
			     }
			     resultado = num1 * int(num2);
			     for (float i = 0; i < espacio; i += 1) {
			        cout << " ";
			     }
			     cout << resultado << endl;
			     cout << "-----" << endl;
			     cout << " " << num1 * num2 << endl;
			}
			break;
		case 11:
			int decimal;
			short binario[6];
		
			
			cout<<"Ingrese el valor en decimal para su conversion a binario: "<<endl;
			cin>>decimal;
			
			for(int i=0;i<6;i++){
				binario[i]=decimal % 2;
				decimal /= 2;
			}
			
			cout<<"El numero en binario es: "<<endl;
			for(int i=5;i>=0;i--){
				cout<<binario[i];
			}
			break;
		case 12:
				{
				    int exa[20];
				    int decimal, residuo, resultado, i = 0;
				
				    cout << "Introduce el numero decimal para convertirlo a hexadecimal: " << endl;
				    cin >> decimal;
				
				    do
				    {
				        residuo = decimal % 16;
				        resultado = decimal / 16;
				        exa[i] = residuo;
				        decimal = resultado;
				        i++;
				    } while (resultado > 15);
				
				    exa[i] = resultado;
				
				    cout << "El resultado en hexadecimal es: ";
				
				    for (int j = i; j >= 0; j--)
				    {
				        if (exa[j] == 10)
				        {
				            cout << "A";
				        }
				        else if (exa[j] == 11)
				        {
				            cout << "B";
				        }
				        else if (exa[j] == 12)
				        {
				            cout << "C";
				        }
				        else if (exa[j] == 13)
				        {
				            cout << "D";
				        }
				        else if (exa[j] == 14)
				        {
				            cout << "E";
				        }
				        else if (exa[j] == 15)
				        {
				            cout << "F";
				        }
				        else
				        {
				            cout << exa[j];
				        }   
				    }
				    return 0;
				}
			break;
		case 13:
			{
				int opcion;
				
				cout<<"________FIGURAS GEOMETRICAS_________"<<endl;
				cout<<"1. Triangulo"<<endl;
				cout<<"2. Cuadrado"<<endl;
				cin>>opcion;
				
				switch(opcion){
					case 1:
							int a,b,fil;
							cout<<"Ingrese el numero de filas que quiere que tenga la figura triangular "<<endl;
							cin>>fil;
				
								for(a=0;a<fil;a++){
					
								    for(b=0;b<fil-a;b++){
								       cout<<" ";
								       }
									   for(b=0;b<a*2+1;b++){
										cout<<"*";
										}
											cout<<endl;
										}
										break;
					case 2:
							int i,j,fila;
							cout<<"Ingrese el numero de filas que quiere que tenga la figura cuadrada "<<endl;
							cin>>fila;
				
								for(i=0;i<=fila;i++){
					
								for(j=0;j<=fila;j++){
								    cout<<"* ";
								}
								cout<<endl;
								}
								break;
							
							}
						}
			break;
		case 14:
			{	
             while (punto!='z')
                {
                    system("cls");
                    
                      
                    gotoxy(u,w); cout<<".";
                    punto=getch();
                    switch (punto)
                    {
                    case 'w':
                        w--;
                        break;
                        case 's':
                        w++;
                        break;
                        case 'a':
                        u--;
                        break;
                        case 'd':
                        u++;
                        break;
                    
                    default:
                        break;
                    }

    
                    }
                    system("pause");
                       
			}
			
			break;
		case 15:
			{		
				int opcion;
				float saldo_inicial=3000.55,extra,saldo=0,retiro;
				
				cout<<"______BIENVENIDO AL CAJERO______"<<endl;
				cout<<"1. Consultar su saldo"<<endl;
				cout<<"2. Ingresar dinero a su cuenta"<<endl;
				cout<<"3. Retirar dinero de su cuenta"<<endl;
				cout<<"4. Salir"<<endl;
				cin>>opcion;
				
				switch(opcion){
					case 1:
						cout<<"El saldo en su cuenta es: "<<saldo_inicial<<" Q"<<endl;
						break;
					case 2:
						cout<<"Ingrese la cantidad de dinero que quiere depositar en su cuenta: "<<endl;
						cin>>extra;
						saldo=saldo_inicial + extra;
						cout<<"Su saldo ahora es de: "<<saldo<<" Q"<<endl;
						break;
					case 3:
						cout<<"Ingrese la cantidad de dinero que quiere retirar de su cuenta: "<<endl;
						cin>>retiro;
						
						if(retiro>saldo_inicial){
							cout<<"¡Usted no tiene esa cantidad en su cuenta por ahora!"<<endl;
						}else{
							saldo=saldo_inicial-retiro;
							cout<<"El saldo total de su cuenta es: "<<saldo<<" Q"<<endl;
						}
						break;
						
				}	
						}
			break;
		case 16:
			float m,n,hipo;
	
			cout<<"Digite el valor del cateto opuesto: "<<endl;
			cin>>m;
			
			cout<<"Digite el valor del cateto adyacente: "<<endl;
			cin>>n;
			
			hipo= sqrt (pow(m,2)+pow(n,2));
			
			cout<<"El valor de la hipotenusa es: "<<hipo<<endl;
			break;
		case 17:
				float o,p;
	
			cout<<"Ingrese un numero: "<<endl;
			cin>>o;
			
			cout<<"Ingrese otro numero: "<<endl;
			cin>>p;
			
			if(o=p){
				cout<<o<<" es igual a "<<p<<endl;
			}else if (o>p){
				cout<<o<<" es mayor a "<<p<<endl;
			}
			else {
				cout<<p<<" es mayor a "<<o<<endl;
			}
			break;
		case 18:
			{
				float re1=0,re2=0;
				int q,r,s;
				
				cout<<"Ingrese el valor de a: "<<endl;
				cin>>q;
				cout<<"Ingrese el valor de b: "<<endl;
				cin>>r;
				cout<<"Ingrese el valor de c: "<<endl;
				cin>>s;
				
				re1=(-r+(sqrt(pow(r,2)-4*q*s)))/(2*q);
				re2=(-r-(sqrt(pow(r,2)-4*q*s)))/(2*q);
				
				cout<<"El resultado de x1 es: "<<re1<<endl;
				cout<<"El resultado de x2 es: "<<re2<<endl;
			}break;
		case 19:
				int mes;

				cout<<"Ingrese un mes de 1-12 ";
				 
				cin>>mes;
				
				switch(mes){
				case 1:
					cout<<"Enero tiene 31 dias"<<endl;break;
				case 2:
					cout<<"Febrero tiene 28 dias"<<endl;break;
				case 3:
					cout<<"Marzo tiene 31 dias"<<endl;break;
				case 4:
					cout<<"Abril tiene 30 dias"<<endl;break;
				case 5:
					cout<<"Mayo tiene 31 dias"<<endl;break;
				case 6:
					cout<<"Junio tiene 30 dias"<<endl;break;
				case 7:
					cout<<"Julio tiene 31 dias"<<endl;break;
				case 8:
					cout<<"Agosto tiene 31 dias"<<endl;break;
				case 9:
					cout<<"Septiembre tiene 30 dias"<<endl;break;
				case 10:
					cout<<"Octubre tiene 31 dias"<<endl;break;
				case 11:
					cout<<"Noviembre tiene 30 dias"<<endl;break;
				case 12:
					cout<<"Diciembre tiene 31 dias"<<endl;break;
				default:
				    cout<<"Error mes no encontrado"<<endl;break;}
					break;
		case 20:
				float Gc,Gf;
	
				cout<<"Ingrese los grados celcius"<<endl;
				cin>>Gc;
				
				Gf= (Gc*9/5)+32;
				
				cout<<"Los grados fahrenheit son: "<<Gf<<endl;
			break;
	}
	getch();
	return 0;
	}
	