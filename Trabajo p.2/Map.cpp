#include "Map.h"
//todos los includes que quermos a�adir, los a�adiremos al Header
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
		//print 1� columna
		for (int j = 0; j < 5; j++) {
			printf("   |");
		}
		printf("\n|");

		//print 2� columna (MIDDLE PART)
		for (int j = 0; j < 5; j++) {
			char charactertoprint = ' ';
			if (p.position.x == j && p.position.y == i)
				charactertoprint = 'P';
			printf(" %c |", charactertoprint);
		}
		printf("\n|");
		//print 3� columna
		for (int j = 0; j < 5; j++) {
			printf("___|");
		}
		printf("\n");
	}
}

