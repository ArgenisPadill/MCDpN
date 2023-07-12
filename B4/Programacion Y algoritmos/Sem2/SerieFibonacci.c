// Importamos la librería stdio.h que nos proporciona las funciones para
// realizar operaciones de entrada/salida
#include <stdio.h>

// Definimos la función main que es el punto de entrada al programa
int main() {
    // Definimos nuestras variables: n es el número de términos que queremos calcular,
    // t1 y t2 son los dos primeros términos de la serie de Fibonacci, y 
    // siguienteTermino es donde almacenaremos cada nuevo término calculado.
    int n, t1 = 0, t2 = 1, siguienteTermino = 0;

    // Pedimos al usuario que introduzca el número de términos que quiere
    printf("Ingrese el número de términos: ");
    // Usamos scanf para leer la entrada del usuario y almacenarla en la variable n
    scanf("%d", &n);

    // Verificamos que el número de términos que el usuario desea sea mayor que 0
    if (n > 0) {
        // Si lo es, comenzamos a imprimir la serie de Fibonacci
        printf("Serie de Fibonacci: ");

        // Este bucle se ejecuta desde 1 hasta n (el número de términos que queremos)
        for (int i = 1; i <= n; ++i) {
            // Si estamos en el primer término, imprimimos t1
            if(i == 1) {
                printf("%d, ", t1);
                continue;
            }
            // Si estamos en el segundo término, imprimimos t2
            if(i == 2) {
                printf("%d, ", t2);
                continue;
            }
            // Para todos los demás términos, calculamos el siguiente término
            // como la suma de los dos anteriores
            siguienteTermino = t1 + t2;
            // Ahora, actualizamos t1 y t2 para la siguiente iteración
            t1 = t2;
            t2 = siguienteTermino;

            // Imprimimos el término calculado
            printf("%d, ", siguienteTermino);
        }
    } else {
        // Si el usuario introdujo un número no mayor que 0, se imprime un mensaje de error
        printf("Por favor, ingrese un número mayor que 0.");
    }

    // Regresamos 0 para indicar que el programa ha terminado correctamente
    return 0;
}
