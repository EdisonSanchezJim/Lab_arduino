#include "library.h"
#include "lib_grupo4.h"

/*permite que un programa use todos los
nombres en cualquier encabezado estándar de C++
como <iostream>*/
using namespace std;

int participantes_info(unsigned int *id,string *nombre, int i)
{	
	cout<<"Participante #"<<i+1<<endl;
		
	cout<<"Ingrese el nombre: ";
	cin>>(*nombre);
		
	cout<<"Ingrese su identificacion: ";
	cin>>(*id);
			
	cout<<"\n";
}