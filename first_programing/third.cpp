/*
Write a program that reading de la entrada est�ndar el precio de un producto y muestre
en salida est�ndar el precio del producto al aplicarle el IVA
*/

#include <iostream>

using namespace std;

int main(){
	
	int p1, iva = 0.18, impuesto = 0;	

	cout<<"Digite el precio de su producto para aplicarle el Iva Dominicano";
	cin<<p1;
	
	impuesto = p1 * impuesto;

	cout<<"\n El total de su compra m�s impuestos son "<<impuesto<<endl;

	return 0;

}