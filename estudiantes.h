#ifndef MOSTRAR_ESTUDIANTES_H
#define MOSTRAR_ESTUDIANTES_H

typedef struct {
    char nombre[20];
    char nivel[7];
    char carrera[20];
    int cantMaterias;
    struct {
        char nombreMateria[20];
        char creditos[20];
    } materias[7];
} Estudiante;

void registrarEstudiantes(Estudiante* estudiantes, int cantidad);
void mostrarEstudiantes(Estudiante* estudiantes, int cantidad);

#endif