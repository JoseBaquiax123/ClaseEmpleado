#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nombres,apellidos,puesto;
	int codigoEmpleado,int sueldo;
	
	cout<<"Ingresar nombres:";
	cin>>nombres;
	cout<<"Ingresar apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar puesto: ";
	cin>>puesto;
	cout<<"Ingresar codigo de empleado: ";
	cin>>codigoEmpleado;
	cout<<"Ingresar sueldo: ";
	cin>>sueldo;
	
	Empleado obj = Empelado(nombres,apellidos,puesto,codigoEmpleado,sueldo);
	obj.mostrar();
	
	cout<<"Ingresar codigo de Empleado";
	cin>>codigoEmpleado;
	obj.setcodigoEmpleado(codigoEmpleado);
	obj.mostrar();
	
	
}
