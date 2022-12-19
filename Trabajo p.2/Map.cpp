#include "Map.h"
//todos los includes que quermos añadir, los añadiremos al Header
//el cpp solamente tiene un include, su header

void PrintMap(Player p) {
	printf(" ");
	//print parte arriba
	for (int i = 0; i < 5; i++) {
		printf("___ ");
	}
	printf("\n");

	//print lineas
	for (int i = 0; i < 5; i++) {
		printf("|");
		//print 1ª columna
		for (int j = 0; j < 5; j++) {
			printf("   |");
		}
		printf("\n|");

		//print 2ª columna (MIDDLE PART)
		for (int j = 0; j < 5; j++) {
			char charactertoprint = ' ';
			if (p.position.x == j && p.position.y == i)
				charactertoprint = 'P';
			printf(" %c |", charactertoprint);
		}
		printf("\n|");
		//print 3ª columna
		for (int j = 0; j < 5; j++) {
			printf("___|");
		}
		printf("\n");
	}
}

