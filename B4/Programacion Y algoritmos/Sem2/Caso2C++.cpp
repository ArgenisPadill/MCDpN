#include <stdio.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
int angulo=0;
int residuo=0;
printf("Escribe el angulo: \n");
scanf("%d",&angulo);
residuo=(angulo%360);
if(angulo==0)
printf("Se encuentra en el origen en X y Y \n");
else
if ((angulo>0&&angulo<90) || (residuo>0&&residuo<90))
printf ("El angulo está en el cuadrante I \n");
else
if((angulo==90) || (residuo==90))
printf("El angulo está en el eje Y positivo\n");
else
if ((angulo>90&&angulo<180) || (residuo>90&&residuo<180))
printf("El angulo está en el cuadrante II\n");
else
if((angulo==180) || (residuo==180))
printf ("El angulo está en el eje x negativo\n");
else
if ((angulo>180&&angulo<270) || (residuo>180&&residuo<270))
printf("El angulo está en el cuadrante III\n");
else
if((angulo==270) || (residuo==270))
printf("El angulo está en el eje Y negativo\n");
else
if ((angulo>270&&angulo<360) || (residuo>270&&residuo<360))
printf("El angulo está en el cuadrante IV\n");
else
if((angulo==360) || (residuo==0))
printf("El angulo está en el eje x positivo\n");
system("PAUSE");
return 0;
}