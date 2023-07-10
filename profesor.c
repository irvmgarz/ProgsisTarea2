#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profesor.h"


void registrarProfesores(Profesor* profesores, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el nombre del profesor %d: ", i + 1);
        scanf(" %s", profesores[i].nombre);
        printf("Ingrese la carrera del profesor %d: ", i + 1);
        scanf(" %s", profesores[i].carrera);
        int numero; //3
        printf("Ingrese la cantidad de materias que dicta (2-3): ");
        //scanf("%d", &profesores[i].cantMaterias);
        scanf(" %d", &numero);
        while(numero < 2  || numero > 3 ){
           printf("Ingrese la cantidad de materias que dicta (2-3): ");
          scanf("%d", &numero);
        }
        int *cantMaterias = &profesores[i].cantMaterias;
        *cantMaterias = numero;
        for (int j = 0; j < profesores[i].cantMaterias; j++) {
            printf("Ingrese el nombre de la materia %d: ", j + 1);
            scanf(" %s", profesores[i].materias[j].nombreMateria);
            printf("Ingrese el paralelo de la materia %d: ", j + 1);
            scanf(" %s", &profesores[i].materias[j].paralelo);   
        }
      printf("\n");
    }
}

//   void mostrarProfesores(Profesor* profesores, int cantidad) {
//     printf("Profesores: \n");
//     for (int i = 0; i < cantidad; i++) {
//         printf("Profesor %d\n", i + 1);
//         printf("Nombre: %s\n", profesores[i].nombre);
//         printf("Carrera: %s\n", profesores[i].carrera);
//         printf("Materias dictando:\n");
//         for (int j = 0; j < profesores[i].cantMaterias; j++) {
//             printf("  - Materia %d: %s (Paralelo %s)\n", j + 1, profesores[i].materias[j].nombreMateria, profesores[i].materias[j].paralelo);
//         }
//         printf("\n");
//     }
// }

