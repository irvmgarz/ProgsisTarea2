#include "estudiantes.h"
#include "profesor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Estudiantes
// Crear estudiante
void crearEstudiante(Estudiante *estudiante, const char *nombre,
                     const char *nivel, const char *carrera, int cantMaterias,
                     const char *nombresMaterias[], const char *creditos[]) {
  strcpy(estudiante->nombre, nombre);
  strcpy(estudiante->nivel, nivel);
  strcpy(estudiante->carrera, carrera);
  estudiante->cantMaterias = cantMaterias;

  for (int i = 0; i < cantMaterias; i++) {
    strcpy(estudiante->materias[i].nombreMateria, nombresMaterias[i]);
    strcpy(estudiante->materias[i].creditos, creditos[i]);
  }
}
void mostrarEstudiante(Estudiante *estudiante) {
  printf("Nombre: %s\n", estudiante->nombre);
  printf("Nivel: %s\n", estudiante->nivel);
  printf("Carrera: %s\n", estudiante->carrera);
  printf("Cantidad de Materias: %d\n", estudiante->cantMaterias);

  for (int i = 0; i < estudiante->cantMaterias; i++) {
    printf("Materia %d: %s\n", i + 1, estudiante->materias[i].nombreMateria);
    printf("Créditos: %s\n", estudiante->materias[i].creditos);
  }
}

void eliminarMateriaEstudiante(Estudiante *estudiante,
                               const char *nombreMateria) {
  for (int i = 0; i < estudiante->cantMaterias; i++) {
    if (strcmp(estudiante->materias[i].nombreMateria, nombreMateria) == 0) {
      // Se encuentra la materia en el arreglo de materias del estudiante
      // Se realiza el desplazamiento de las materias restantes para
      // sobreescribir la                 materia eliminada
      for (int j = i; j < estudiante->cantMaterias - 1; j++) {
        strcpy(estudiante->materias[j].nombreMateria,
               estudiante->materias[j + 1].nombreMateria);
        strcpy(estudiante->materias[j].creditos,
               estudiante->materias[j + 1].creditos);
      }
      estudiante->cantMaterias--; // Se reduce la cantidad de materias
      break;                      // Se sale del bucle
    }
  }
}

void modificarNivel(Estudiante *estudiante, const char *nuevoNivel) {
  strcpy(estudiante->nivel, nuevoNivel);
}

// Profesor
void crearProfesores(Profesor *profe, const char *nombre, const char *carrera,
                     int cantMaterias, const char *nombreMateria[],
                     const char *paralelo[]) {
  strcpy(profe->nombre, nombre);
  strcpy(profe->carrera, carrera);
  profe->cantMaterias = cantMaterias;

  for (int i = 0; i < cantMaterias; i++) {
    strcpy(profe->materias[i].nombreMateria, nombreMateria[i]);
    strcpy(profe->materias[i].paralelo, paralelo[i]);
  }
}
void mostrarProfesor(Profesor *profe) {
  printf("Nombre: %s\n", profe->nombre);
  printf("Carrera: %s\n", profe->carrera);
  printf("Cantidad de Materias: %d\n", profe->cantMaterias);

  for (int i = 0; i < profe->cantMaterias; i++) {
    printf("Materia %d: %s\n", i + 1, profe->materias[i].nombreMateria);
    printf("Paralelo: %s\n", profe->materias[i].paralelo);
  }
}

void eliminarMateriaProfe(Profesor *profe, const char *nombreMateria) {
  for (int i = 0; i < profe->cantMaterias; i++) {
    if (strcmp(profe->materias[i].nombreMateria, nombreMateria) == 0) {
      // Se encuentra la materia en el arreglo de materias del estudiante
      // Se realiza el desplazamiento de las materias restantes para
      // sobreescribir la                 materia eliminada
      for (int j = i; j < profe->cantMaterias - 1; j++) {
        strcpy(profe->materias[j].nombreMateria,
               profe->materias[j + 1].nombreMateria);
        strcpy(profe->materias[j].paralelo, profe->materias[j + 1].paralelo);
      }
      profe->cantMaterias--; // Se reduce la cantidad de materias
      break;                 // Se sale del bucle
    }
  }
}