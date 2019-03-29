#include <conio.h> /* es una biblioteca que contiene funciones de entrada y salida de datos. */
#include <stdio.h> /* La biblioteca <stdio.h> incluye una serie de funciones de entrada/salida. */
#include <math.h>


/* Inicio del programa */
int main()
{
    /* declaracion de variable  */
	char opcion; 
    float num1=0, num2=0 ,resto;

    do /* Incio del ciclo de repeticion este se mostrara hasta que el usuario digite 5  */
    {
    	/* Se realiza el menu que se va a mostrar al usuario  */
        printf( "\n****************************************");
        printf( "\n****************MENU********************" );
        printf( "\n**  1. Suma                           **", 163 );
        printf( "\n**  2. Resta                          **", 163 );
        printf( "\n**  3. Multiplicacion                 **", 163 );
        printf( "\n**  4. Division                       **", 163 );
        printf( "\n**  5. Salir                          **"      );
        printf( "\n****************************************");

        
        do /* Incio del ciclo de repeticion este se mostrara hasta que el usuario digite 5 y siempre mostrara para introducir una opcion  */
        {
            printf( "\n Favor Introduzca una opcion (1-5): ", 162 ); /* Se muestra la opcion elegida por el usuario */
            fflush( stdin );/* función fflush retorna cero si el stream fue despejado con éxito.*/
            scanf( "%c", &opcion); /* capturo la opcion que el usuario digito con mi variable opcion */

        } while ( opcion < '1' || opcion > '5' );/* cilo mientras que opcion sea menor que 1 o mayor que 5 */
        

        switch ( opcion ) /* Switch: Se utiliza para agilizar la toma de decisiones múltiples en este caso lee la opcion digitada para realizar la operacion */
        {
                      /* Opción 1: Sumar */
            case '1': printf( "\n   Introduzca el primer numero a sumar: " ); /* Solicito el primer numero a sumar */
                      scanf( "%f", &num1); /* Capturo el numero en mi variable num1 */
                      printf( "\n   Introduzca el segundo numero a sumar: " ); /* Solicito el segundo numero a sumar */
                      scanf( "%f", &num2);/* Capturo el numero en mi variable num2 */
                      printf( "\n   %f + %f = %f\n", num1, num2, num1 + num2 );/* muestro la operacion que se realizo (suma)con el resultado */
                      break; /* Rompe la opcion 1 despues de mostrar la operacion y vuelve a mostrar el menu nuevamente */

                      /* Opción 2: Restar */
            case '2': printf( "\n   Introduzca el primer numero a restar: " );/* Solicito el primer numero a restar */
                      scanf( "%f", &num1);/* Capturo el numero en mi variable num1 */
                      printf( "\n   Introduzca el segundo numero a restar: " );/* Solicito el segundo numero a restar */
                      scanf( "%f", &num2);/* Capturo el numero en mi variable num2 */
                      printf( "\n   %f - %f = %f\n", num1, num2, num1 - num2 );/* muestro la operacion que se realizo (resta)con el resultado */
                      break;/* Rompe la opcion 2 despues de mostrar la operacion y vuelve a mostrar el menu nuevamente */

                      /* Opción 3: Multiplicar */
            case '3': printf( "\n   Introduzca el primer numero a multiplicar: " );/* Solicito el primer numero a multiplicar */
                      scanf( "%f", &num1);/* Capturo el numero en mi variable num1 */
                      printf( "\n   Introduzca el segundo numero a multiplicar: " );/* Solicito el segundo numero a multiplicar */
                      scanf( "%f", &num2); /* Capturo el numero en mi variable num2 */
                      printf( "\n   %f * %f = %f\n", num1, num2, num1 * num2 );/* muestro la operacion que se realizo (multiplicacion)con el resultado */
                      break;/* Rompe la opcion 2 despues de mostrar la operacion y vuelve a mostrar el menu nuevamente */

                      /* Opción 4: Division */
            case '4': printf( "\n   Introduzca el primer numero a dividir : " );/* Solicito el primer numero a dividir */
                      scanf( "%f", &num1);/* Capturo el numero en mi variable num1 */
                      printf( "\n   Introduzca el segundo numero a dividir : " );/* Solicito el segundo numero a dividir */
                      scanf( "%f", &num2);/* Capturo el numero en mi variable num2 */
                      if ( num2 != 0 )/* condicion si el divisor (num2) es diferente de 0 */
                          printf( "\n   %f div %f = %f ( resto == %f )\n", num1, num2, num1 / num2 );/* Muestro la operacion y el resultado en dado caso que se cumpla la condicion */
                      else
					  
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" ); /* si no se cumple mi condicion y el numero ingresado es 0 entonces muestra error */
        		    	
		}
        

    } while ( opcion != '5' );  /* mientras que la opcion diferente de 5 muestre el menu si no es diferente de 5 se sale del programa*/

    return 0; /* Define la salida del programa */
}/* fin del programa */
