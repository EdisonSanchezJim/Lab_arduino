#include "library.h"
#include "lib_grupo4.h"

/*permite que un programa use todos los
nombres en cualquier encabezado estándar de C++
como <iostream>*/

using namespace std;

int main (int argc,char* argv[])
{
	//declaracion de variables
	int cantidad, tp;
	string nombre;
	unsigned int id;
        int read_buf;
	float tiempo_prep, ventanalec;

	//comprobación de argumentos
	if( argc =!3)
        {
                printf("\nError de cantidad de argumentos");
		exit(1);        
	}
	
	//asignacion de tiempo de prep
	tiempo_prep = atof(argv[1]);
	ventanalec = atof(argv[2]);	
	
	//solicitud de numero de participantes
	cout<<"Ingrese la cantidad de participantes: ";
	cin>> cantidad;	
	cout<<endl;
	participant participantes[cantidad];

 	//pedir datos de participantes
	for(int i = 0; i<cantidad; i++){
		participantes_info(&id, &nombre, i);
		participantes[i].set_participant(id, nombre);
		read_buf= actividad_arduino(tiempo_prep, ventanalec);
		participantes[i].set_pushed((char)read_buf);
		
	};

        //imprimir resultados
	for(int i = 0; i<cantidad; i++){
		cout<<"los resultados fueron:";
		cout<<"Participante #"<<i+1<<endl;
		cout<<"nombre: "<<participantes[i].get_name()<<endl;
		cout<<"con id: "<<participantes[i].get_participant_id()<<endl;
		cout<<"veces oprimidas: "<<participantes[i].get_pushed()<<endl;
		cout<<endl;
	};




	return 0;		
};

