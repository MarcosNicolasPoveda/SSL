/*
'Hello World!' en c
Poveda Marcos Nicolás
20240331
*/

#include <stdio.h>

int main()
{
    FILE *archivo = fopen("output.txt", "w");

    if (archivo == NULL)
    {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    fprintf(archivo, "Hello, world!\n");
    fclose(archivo);

    return 0;
}
