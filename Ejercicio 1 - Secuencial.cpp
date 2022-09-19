#include <iostream>
/* Acceso a espacio de nombres para librerias estandar C++ */
#include <math.h>

using namespace std;
/* Funcion main es para dar el punto de inicio o ejecucion del programa */
int main() {
	/* Declaracion de variables */
	int a = 8;
	int b = 5;
	
	/* Calculo Hipotenusa al cuadrado */
	int h2 = pow(a, 2)+pow(b, 2);
	/* Raiz de h para obtener hipotenusa */
	double h = sqrt(h2);
	cout << "La hipotenusa es: " << h;
	return 0;
}
