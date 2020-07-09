#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c,d,i;
/*
como dito no enunciado		a	c
as variáveis a,b,c,d são	-	-
os valores das frações		b	d
*/
cout << " Considere a/b e c/d."<<endl;
//-------------obter as frações---------------
// para obter os valores dertro do alcance 
// foi usado o mesmo esquema do problema do drone
	while(i==0){
	cout << " Digite a: ";
	cin >> a;
	if((a>=1)&&(a<=100)){i=1;
	}else{
	cout << " Número inválido, tente denovo."<<endl;	
	}}
	i=0;
//--------------------------------------------
	while(i==0){
	cout << " Digite b: ";
	cin >> b;
	if((b>=1)&&(b<=100)){i=1;
	}else{
	cout << " Número inválido, tente denovo."<<endl;	
	}}
	i=0;
//--------------------------------------------
	while(i==0){
	cout << " Digite c: ";
	cin >> c;
	if((c>=1)&&(c<=100)){i=1;
	}else{
	cout << " Número inválido, tente denovo."<<endl;	
	}}
	i=0;
//--------------------------------------------
	while(i==0){
	cout << " Digite d: ";
	cin >> d;
	if((d>=1)&&(d<=100)){i=1;
	}else{
	cout << " Número inválido, tente denovo."<<endl;	
	}}
	//aqui o "i" não precisa mais retornar a "0"
//-------------Cálculo------------------------
	int Dividendo,Divisor;
	//Dndo: Dividendo final
	//Dsor: Divisor final

//--------para encontrar a fração------------

//https://www.youtube.com/watch?v=6uGblJOIdEw
	if(b!=c){
		Dividendo = a*d + b*c;  
		Divisor = b * d;	
	}else{
		Dividendo = a + c;
		Divisor = b;
	}
//-----------para simplificar----------------

    int mdc,num2;
	
	
	
	mdc = Dividendo;
	num2 = Divisor;
	
    do {
        i = mdc % num2;

        mdc = num2;
        num2 = i;

    } while (i != 0);
    
    Dividendo = Dividendo/mdc;
    Divisor = Divisor/mdc;
    
//--------------------------------------------
	//---para mostrar apenas o dividendo se for n/1
	
	if(Divisor==1){
		cout << Dividendo;
	}else{
		cout <<" "<< Dividendo<<" / "<<Divisor;
	}
	
	return 0;
}
