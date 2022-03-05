/*****************************************************************************
*                                                                            *
*      NOMBRE:      Práctica 1.1.                                            *
*      FECHA:       28 de febrero de 2022.                                   *
*      VERSIÓN:     1.0.                                                     *
*                                                                            *
*      AUTOR:       Equipo 2                                 *
*      E-MAIL:      "ovelasco@ucol.mx "                                *
*      COMPAÑÍA:    Universidad de Colima - Facultad de Telemática.          *
*                                                                            *                                 *
*      Nombre:      ESP8266.                                                 *
*                                                                            *
******************************************************************************
*                                                                            *
*      DESCRIPCIÓN DEL PROGRAMA: Arquitectura de software para 
*      el uso de métodos y clases para la resolución de problemas.   
*      Dedicando timepo a la investigación e implementación de funciones     *  
*                                                                            *
******************************************************************************/

/*NOTAS:
 * ESP8266 requiere instalar el json de su placa.
*/


#include "libreria_ejemplo.h" //incluimos la libreria donde tenemos nuestra clase y metódos

/*~~~~~~~~~~~~~~~~~~~~~~~INSTANCIAR UNA CLASE PARA USARLA~~~~~~~~~~~~~~~~~~~~~~~*/
  /*
   * (Nombre de la clase) + (espacio en blanco) + (nombre de la instancia) + (;)
   * Ejemplo:
   * class_ejemplo cj;
   */
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class_serial cs;        // Instancia clase "class_serial".
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONFIGURACIÓN INICIAL~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void setup( void ) {

  Serial.begin ( 115200 ); // Configuración BaudRate, un sistema puede tener varios puertos seriales físicos.
  delay(1000); //Asignamos un delay de un segundo

}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~CICLO INFINITO DE TRABAJO~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void loop ( void ) {
  

  cs.get_data(); //Mandamos llamar al metodo que realiza las demás operaciones y manda a llamar a los demás metódos

  
}
