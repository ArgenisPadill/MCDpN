#include <iostream> 
// Incluye la biblioteca de entrada y salida estándar de C++.

int main(int argc, char *argv[]) 
// Punto de entrada principal para el programa.
{
    int angulo = 0; 
    // Define y establece la variable 'angulo' a 0.
    char respuesta; 
    // Define la variable 'respuesta' que almacenará la respuesta del usuario.
    
    do {
        std::cout << "Escribe el angulo: \n"; 
        // Imprime una indicación para que el usuario escriba el ángulo.
        std::cin >> angulo; 
        // Lee la entrada del usuario como un número entero y lo asigna a la variable 'angulo'.

        int seccion = (angulo % 360) / 90; 
        // Calcula en qué sección (0, 1, 2 o 3) se encuentra el ángulo.

        switch (seccion) { 
            case 0:  
                if(angulo == 0) 
                    std::cout << "El angulo está en el eje x positivo\n"; 
                else
                    std::cout << "El angulo está en el cuadrante I \n";
                break; 
            case 1: 
                if((angulo % 360) == 90) 
                    std::cout << "El angulo está en el eje Y positivo\n"; 
                else
                    std::cout << "El angulo está en el cuadrante II\n";
                break; 
            case 2: 
                if((angulo % 360) == 180) 
                    std::cout << "El angulo está en el eje x negativo\n"; 
                else
                    std::cout << "El angulo está en el cuadrante III\n";
                break; 
            case 3: 
                if((angulo % 360) == 270) 
                    std::cout << "El angulo está en el eje Y negativo\n"; 
                else
                    std::cout << "El angulo está en el cuadrante IV\n"; 
                break;
        }
        
        std::cout << "¿Desea introducir otro angulo? (s/n): "; 
        // Pregunta al usuario si desea introducir otro ángulo.
        std::cin >> respuesta; 
        // Lee la respuesta del usuario y la almacena en 'respuesta'.
        // La razón por la que se eliminó el espacio antes de %c es porque std::cin >> ignora el espacio en blanco automáticamente.
    } while (respuesta == 's' || respuesta == 'S'); 

    return 0; 
    // Fin del programa principal, retorna 0 para indicar que el programa se ejecutó correctamente.
}
