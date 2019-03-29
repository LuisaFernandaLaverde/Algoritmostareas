#include<stdio.h>/*libreria de entrada y salida de datos*/
#include<conio.h>/*libreria de entrada y salida de datos*/


int main()/*inicio del programa*/
{
    float cal1=0,cal2=0,cal3=0,cal4=0,promedio=0;/*declaracion de variables*/
    
    printf("Programa para calcular el promedio de una materia\n\n");/*muestra en pantalla el mensaje*/
    printf("\n Favor ingresar el primera nota:\n\n");/*muestra en pantalla la solicitud de la primera nota*/
	scanf ("%f",&cal1);/*captura la nota en la variable cal1*/
	
    printf("\n Favor ingresar el segunda nota:\n\n");/*muestra en pantalla la solicitud de la segunda nota*/
	scanf ("%f",&cal2);/*captura la nota en la variable cal2*/
	
	printf("\n Favor ingresar la tercera nota:\n\n");/*muestra en pantalla la solicitud de la tercera nota*/
	scanf ("%f",&cal3);/*captura la nota en la variable cal3*/
	
	printf("\n Favor ingresar la cuarta nota:\n\n");/*muestra en pantalla la solicitud de la cuarta nota*/
	scanf ("%f",&cal4);/*captura la nota en la variable cal4*/
	
	promedio=(cal1+cal2+cal3+cal4)/4;/*Se realiza el proceso para calcular el promedio*/
	
	if(promedio>=00&&promedio<=29){/*inicio de la condicion si el promedio obtenido es menor o igual a 29*/
		printf("ntLo siento, tu promedio de %.2f no es aprobatorio",promedio); /*si se cumple la condicion muesra por pantalla el promedio y no fue aprobado*/
	}/*fin de la condicio if*/
	else{/*si no se cumple la condicion*/
		printf("ntFelicidades, pasaste con un %.2f",promedio);/*muestra por pantalla que el usuario aprobo*/
	}/*fin de la condicion else*/
	getch();/*espera a que presiones una tecla y termina */
	  
    
}/*fin del programa*/
