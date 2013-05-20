/* Manejo de stings */

#include <stdio.h>

char* string_concat(const char*, const char*);

int main (){
 
 printf("Probamos string_concat, que devuelve la concatenacion en la llamada.\n");
 char* nombre = "Ritchie";
 char* saludo = string_concat("Hola ", nombre);
 printf ("%s",saludo);
 return 0;
}
/*
* Retorna un String nuevo que es la concatenación
* de los dos Strings pasados por parametro
* Ejemplo:
* char* nombre = "Ritchie";
* char* saludo = string_concat("Hola ", nombre);
* =>
* saludo = "Hola Ritchie"
*/
char* string_concat(const char* cadena1, const char* cadena2)
      {return = cadena1,cadena2}
