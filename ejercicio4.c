#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (int argc, char *argv[]) {

int a = atoi (argv[1]);
int b = atoi (argv[2]);
int c = atoi (argv[3]);

bool mayor = false;
mayor = c >= a + b;
mayor = b >= a + c;
mayor = a >= c + b; 

printf ("%s/n", mayor? "falso" : "verdadero");

}





