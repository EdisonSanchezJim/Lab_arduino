#include "library.h"
#include "lib_grupo4.h"

//funciones de clase
void participant :: set_participant(unsigned int id, string nombre){
	participant_id = id;
	name=nombre;
}

void participant :: set_pushed (unsigned int tp){
	times_pushed = tp;
}

unsigned int participant :: get_participant_id(){
	return participant_id;
}

string participant :: get_name(){
	return name;
}

unsigned int participant :: get_pushed(){
	return times_pushed;
}


/*permite que un programa use todos los
nombres en cualquier encabezado estándar de C++
como <iostream>*/
using namespace std;

int actividad_arduino(float  tiempo_preparacion, float ventana_tiempo_lectura)
{
	int tp;
        int read_buf;
	struct termios tty;
	int serial_port;
        config_tty ("/dev/ttyS0", &tty, B9600, &serial_port);	
        sleep(tiempo_preparacion);
	write(serial_port, "s", sizeof(char));
        sleep(tiempo_preparacion);
        write(serial_port, "r", sizeof(char));
        sleep(ventana_tiempo_lectura);
        write(serial_port, "S", sizeof(char));
	tp = read(serial_port, &read_buf, sizeof(read_buf)); 
        sleep(tiempo_preparacion);
	printf("---------------------------------- \n\n");

	close(serial_port);

	//retorna las veces oprimidas
	return read_buf; //tp
}