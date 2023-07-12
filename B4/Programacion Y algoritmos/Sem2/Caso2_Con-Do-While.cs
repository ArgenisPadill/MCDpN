using System;

class Program
{
    static void Main(string[] args)
    {
        int angulo = 0;  
        // Declaración de una variable entera llamada "angulo"
        char respuesta;  
        // Declaración de una variable de caracter llamada "respuesta"
        
        // Un bucle do-while, que se ejecutará al menos una vez y seguirá ejecutándose hasta que la condición ya no se cumpla
        do {
            // Solicita al usuario que introduzca un ángulo
            Console.Write("Escribe el angulo: \n");  
            // Lee la entrada del usuario, la convierte a un número entero y la almacena en la variable "angulo"
            angulo = Int32.Parse(Console.ReadLine());  

            // Calcula en qué sección de 360 grados se encuentra el ángulo
            // Usamos el módulo de 360 para tratar con ángulos que exceden una vuelta completa.
            // Luego se divide por 90 para obtener la sección (0 a 3, que representan los cuatro cuadrantes)
            int seccion = (angulo % 360) / 90; 

            // Un switch que ejecutará distintos bloques de código dependiendo del valor de la variable "seccion"
            switch (seccion) { 
                case 0:  
                    // Si el ángulo es 0 grados, entonces está en el eje x positivo
                    if(angulo == 0) 
                        Console.WriteLine("El angulo está en el eje x positivo"); 
                    else
                        // De lo contrario, está en el primer cuadrante
                        Console.WriteLine("El angulo está en el cuadrante I");
                    break; 
                case 1: 
                    // Si el ángulo es 90 grados, entonces está en el eje y positivo
                    if((angulo % 360) == 90) 
                        Console.WriteLine("El angulo está en el eje Y positivo"); 
                    else
                        // De lo contrario, está en el segundo cuadrante
                        Console.WriteLine("El angulo está en el cuadrante II");
                    break; 
                case 2: 
                    // Si el ángulo es 180 grados, entonces está en el eje x negativo
                    if((angulo % 360) == 180) 
                        Console.WriteLine("El angulo está en el eje x negativo"); 
                    else
                        // De lo contrario, está en el tercer cuadrante
                        Console.WriteLine("El angulo está en el cuadrante III");
                    break; 
                case 3: 
                    // Si el ángulo es 270 grados, entonces está en el eje y negativo
                    if((angulo % 360) == 270) 
                        Console.WriteLine("El angulo está en el eje Y negativo"); 
                    else
                        // De lo contrario, está en el cuarto cuadrante
                        Console.WriteLine("El angulo está en el cuadrante IV"); 
                    break;
            }
            
            // Pregunta al usuario si desea introducir otro ángulo
            Console.Write("¿Desea introducir otro angulo? (s/n): "); 
            // Lee la entrada del usuario y la convierte a un caracter, almacenándola en la variable "respuesta"
            respuesta = Char.Parse(Console.ReadLine());
            
        // Continúa el bucle si la respuesta es 's' o 'S' (indicando que sí)
        } while (respuesta == 's' || respuesta == 'S'); 
    }
}
