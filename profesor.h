#ifndef MOSTRAR_PROFESORES_H
#define MOSTRAR_PROFESORES_H


typedef struct {
    char nombre[20];
    char carrera[20];
    int cantMaterias;
    struct {
        char nombreMateria[20];
        char paralelo[20];
    } materias[3];
} Profesor;

void registrarProfesores(Profesor* profesores, int cantidad);
 void mostrarProfesores(Profesor* profesores, int cantidad);

#endif
