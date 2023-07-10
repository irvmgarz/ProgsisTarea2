#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiantes.h"


void registrarEstudiantes(Estudiante* estudiantes, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        scanf(" %s", estudiantes[i].nombre);

        printf("Ingrese el nivel del estudiante %d: ", i + 1);
        scanf(" %s", &estudiantes[i].nivel);

        printf("Ingrese la carrera del estudiante %d: ", i + 1);
        scanf(" %s", estudiantes[i].carrera);
        int numero;
        printf("Ingrese la cantidad de materias que toma (3-7): ");
        // scanf(" %d", &estudiantes[i].cantMaterias);
        scanf(" %d", &numero);
        while(numero < 3  || numero > 7 ){
           printf("Ingrese la cantidad de materias que toma (3-7):  ");
          scanf("%d", &numero);
        }
        int *cantMateriasEstudiante = &estudiantes[i].cantMaterias;
        *cantMateriasEstudiante = numero;

        for (int j = 0; j < estudiantes[i].cantMaterias; j++) {
            printf("Ingrese el nombre de la materia %d: ", j + 1);
            scanf(" %s", estudiantes[i].materias[j].nombreMateria);

            printf("Ingrese los créditos de la materia %d: ", j + 1);
            scanf(" %s", &estudiantes[i].materias[j].creditos);
        }

        printf("\n");
    }
}


// void mostrarEstudiantes(Estudiante* estudiantes, int cantidad) {
//     printf("Estudiantes: \n");
//     for (int i = 0; i < cantidad; i++) {
//         printf("Estudiante %d\n", i + 1);
//         printf("Nombre: %s\n", estudiantes[i].nombre);
//         printf("Nivel: %s\n", estudiantes[i].nivel);
//         printf("Carrera: %s\n", estudiantes[i].carrera);
//         printf("Materias tomando:\n");
//         for (int j = 0; j < estudiantes[i].cantMaterias; j++) {
//             printf("  - Materia %d: %s (Créditos %s)\n", j + 1, estudiantes[i].materias[j].nombreMateria, estudiantes[i].materias[j].creditos);
//         }
//         printf("\n");
//     }
// }