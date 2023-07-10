#include "estudiantes.h"
#include "profesor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  // printf("Menu de registro\n Profesor: -p\n Estudiante: -e\n Ambos: -a\n");

  // //ejemplo de Formato usado ./main -p 4
  // int opt;

  // while((opt = getopt(argc, argv, "p:e:a:")) != -1) {
  //   Profesor* profesores = NULL;
  //   Estudiante* estudiantes = NULL;
  //   switch (opt) {
  //     int numeroPersonas;
  //     case 'p':
  //       if(atoi(optarg)<2){
  //         printf("La cantidad de personas a ingresar deben ser mayor o igual
  //         a 2\n"); exit(1);
  //       }
  //       numeroPersonas= atoi(optarg);
  //       profesores = (Profesor*)malloc(numeroPersonas * sizeof(Profesor));
  //       registrarProfesores(profesores, numeroPersonas);
  //       mostrarProfesores(profesores, numeroPersonas);
  //       free(profesores);
  //       break;
  //     case 'e':
  //       if(atoi(optarg)<2){
  //         printf("La cantidad de personas a ingresar deben ser mayor o igual
  //         a 2\n"); exit(1);
  //       }
  //       numeroPersonas=atoi(optarg);
  //       estudiantes = (Estudiante*)malloc(numeroPersonas *
  //       sizeof(Estudiante)); registrarEstudiantes(estudiantes,
  //       numeroPersonas); mostrarEstudiantes(estudiantes, numeroPersonas);
  //       free(estudiantes);
  //       break;
  //     case 'a':
  //       if(atoi(optarg)<2){
  //         printf("La cantidad de personas a ingresar deben ser mayor o igual
  //         a 2\n"); exit(1);
  //       }
  //       numeroPersonas=atoi(optarg);
  //       profesores = (Profesor*)malloc((numeroPersonas - (numeroPersonas-1)
  //       )* sizeof(Profesor)); registrarProfesores(profesores, numeroPersonas
  //       - (numeroPersonas-1)); estudiantes =
  //       (Estudiante*)malloc((numeroPersonas - 1) * sizeof(Estudiante));
  //       registrarEstudiantes(estudiantes, numeroPersonas -1);
  //       mostrarProfesores(profesores, numeroPersonas - (numeroPersonas-1));
  //       mostrarEstudiantes(estudiantes, numeroPersonas - 1);
  //       free(profesores);
  //       free(estudiantes);
  //       break;
  //     case ':':
  //       printf("Opción: %c Falta argumento\n", optopt);
  //       break;
  //     case '?':
  //       printf("Opción no valida: %c\n", optopt);
  //       break;
  //       }
  //   }

  // for (; optind < argc; optind++) {
  //   printf("Argumentos sobrante: %s\n", argv[optind]);
  // }

  // return 0;

  Estudiante estudiante1;
  Profesor profe1;
  const char *nombresMaterias[] = {"electricidad", "poo", "quimica"};
  const char *creditos[] = {"6", "4", "5"};
  crearEstudiante(&estudiante1, "irving", "3", "compu", 2, nombresMaterias,creditos);

  mostrarEstudiante(&estudiante1);

  const char *nombresMaterias2[] = {"Materia 1", "Materia 2", "Materia 3"};
  const char *paralelos[] = {"7", "9", "8"};
  crearProfesores(&profe1, "Juan", "fiec", 3, nombresMaterias2, paralelos);
  mostrarProfesor(&profe1);
}
