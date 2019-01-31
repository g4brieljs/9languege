/*
Write a program that reading de la entrada estàndar el precio de un producto y muestre
en salida estàndar el precio del producto al aplicarle el IVA
*/

#include <iostream>

using namespace std;

int main(){
	
	int p1, iva = 0.18, impuesto = 0;	

	cout<<"Digite el precio de su producto para aplicarle el Iva Dominicano";
	cin<<p1;
	
	impuesto = p1 * impuesto;

	cout<<"\n El total de su compra màs impuestos son "<<impuesto<<endl;

	return 0;

}