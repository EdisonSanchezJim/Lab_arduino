#ifndef lib_grupo4_h
#define lib_grupo4_h

//liberia c++
#include <iostream>


#define max 100

/*permite que un programa use todos los
nombres en cualquier encabezado estándar de C++
como <iostream>*/
using namespace std;

//clases
class participant
{
	private:
		unsigned int participant_id;
		string name;
		unsigned int times_pushed;

	public:
		participant(): participant_id(0), name(), times_pushed(0)
		{
		}	

		participant(unsigned int id, string nombre, unsigned int tp) : participant_id(id), name(nombre), times_pushed(tp){}
	
		

		void set_participant(unsigned int id, string name);
				
		void set_pushed (unsigned int tp);
		
		unsigned int get_participant_id();
		
		string get_name();
		
		unsigned int get_pushed();

		};

//funciones

int actividad_arduino(float  tiempo_preparacion, float ventana_tiempo_lectura);

int participantes_info(unsigned int *id,string *nombre, int i);



#endif