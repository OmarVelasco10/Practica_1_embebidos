/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CLASES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
class class_serial {             // Nombre de la clase.

  public:                         // Variables públicas.
    char byte_recibido;           // Recibe los bytes provenientes del puerto serial.
    String read_serial;           // String donde se almacenan los bytes recibidos.
    uint8_t x;                    // Ejemplo variable sin signo de 8 bits.

  public:                         // Métodos públicos. // [tipo de variable que retorna] + [nombre del método] + [(] + (parametros) +  [)] + [;]
    void post_data ( String );    //Método que recibe valor tipo cadena y retorna un vacío
    uint64_t get_max ( int );     //Método que recibe entero de 64 bits sin signo y retorna un entero
    int64_t get_min( int );       //Método que recibe entero de 64 bits con signo y retorna un entero
    void get_data( void );        //Método que recibe valor vacío y retorna una cadena
    void SerialEvent ( void );    //Método que recibe y retorna vacío

};
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MÉTODOS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void class_serial::post_data ( String read_serial ) {         //Inicia método class_serial::post_data
  String opcion1 = read_serial;                               //La cadena de "read_serial" se iguala con "option1"
  int64_t resultado = -1;                                     //Se crea la variable "resultado" de 64 bits la cual es igualada a -1

  if (opcion1.equals("uint8_t")) {                            //Se crea un if el cual verifica que el string "option1" sea igual a "uint8_t"
    Serial.print("El valor máximo es: ");
    Serial.println(get_max(8) + resultado);                   //Se imprime el número mayor de los 8 bits
    Serial.println("El valor mínimo es: 0");
    return;

  }
  if (opcion1.equals ("uint16_t")) {                           //Se verifica que el string "option1" sea igual a "uint16_t"
    Serial.print("El valor máximo es: ");
    Serial.println(get_max(16) + resultado);                   //Se imprime el número mayor de los 16 bits
    Serial.println("El valor mínimo es: 0");
    return;

  }
  if (opcion1.equals ("uint32_t")) {                           //Se verifica que el string "option1" sea igual a "uint32_t"
    Serial.print("El valor máximo es: ");
    Serial.println(get_max(32) + resultado);                   //Se imprime el número mayor de los 32 bits
    Serial.println("El valor mínimo es: 0");
    return;

  }
  if (opcion1.equals ("uint64_t")) {                           //Se verifica que el string "option1" sea igual a "uint64_t"
    Serial.print("El valor máximo es: ");
    Serial.println(get_max(64));                               //Se imprime el número mayor de los 64 bits
    Serial.println("El valor mínimo es: 0");
    return;

  }
  if (opcion1.equals("int8_t")) {                              //Se verifica que el string "option1" sea igual a "int8_t"
    Serial.print("El valor mínimo es: - ");                    //En la cadena impresa al final se coloca el signo "-" para indicar la parte negativa de los 8 bits
    Serial.println(get_min(8));                                //Se imprime el número menor de los 8 bits y se suma la variable "resultado" que es igual a "-1"
    Serial.print("El valor máximo es:  ");
    Serial.println(get_min(8) + resultado);                    //Se imprime el número mayor de los 8 bits
    return;

  }
  if (opcion1.equals("int16_t")) {                             //Se verifica que el string "option1" sea igual a "int16_t"
    Serial.print("El valor mínimo es: - ");                    //En la cadena imprimida al final se coloca el signo "-" para indicar la parte negativa de los 16 bits
    Serial.println(get_min(16));                               //Se imprime el número menor de los 16 bits y se suma la variable "resultado" que es igual a "-1"
    Serial.print("El valor máximo es: ");
    Serial.println(get_min(16) + resultado);                   //Se imprime el número mayor de los 16 bits
    return;

  }
  if (opcion1.equals("int32_t")) {                             //Se verifica que el string "option1" sea igual a "int32_t"
    Serial.print("El valor mínimo es: - ");                    //En la cadena imprimida al final se coloca el signo "-" para indicar la parte negativa de los 32 bits
    Serial.println(get_min(32));                               //Se imprime el número menor de los 32 bits y se suma la variable "resultado" que es igual a "-1"
    Serial.print("El valor máximo es:  ");
    Serial.println(get_min(32) + resultado);                   //Se imprime el número mayor de los 32 bits
    return;

  }
  if (opcion1.equals("int64_t")) {                             //Se verifica que el string "option1" sea igual a "int64_t"
    Serial.print("El valor mínimo es: ");                      //Se imprime la parte negativa de los 64 bits
    Serial.println(get_min(64) - resultado);                   //Se imprime el número menor de los 64 bits y se suma la variable "resultado" que es igual a "-1"
    Serial.print("El valor máximo es:  ");
    Serial.println(get_min(64));                               //Se imprime el número mayor de los 64 bits
    return;
  }

}                                                              //Final método class_serial:post_data

int64_t class_serial::get_min (int exponente  ) {              //Método para obtener los números de los bits con signo
  return (int64_t)(pow(2, exponente - 1));
}


uint64_t class_serial::get_max ( int exponente ) {             //Método para obtener los números de los bits sin signo
  return (uint64_t)(pow(2, exponente));

}

void class_serial::get_data( void ) {                          //Método para obtener los datos introducidos
  if (Serial.available() != 0) {                               //if que verifica si el buffer tiene datos en el puerto serial
    read_serial = Serial.readStringUntil('\n');                //Lee caracteres del buffer del serial y se colocan en "read_serial"
    Serial.println(read_serial);                               //Imprime la variable cadena "read_serial"
    post_data (read_serial);                                   //"read_serial" se coloca en el método "post_data"

  }
}


/*  Mientras existan datos en el buffer esta función va a invocarse en cada byte,
    es decir si el mensaje "HOLA" llega al puerto serial, la función primero leerá la letra "H";
    para la letra "O", la función "Serial.available (  )" verificará si todavía existe información en el buffer
    posteriormente llamará de nuevo la función "SerialEvent" y leerá la letra O, y así sucesivamente hasta
    que ya no existan caracteres en el buffer.
*/
void class_serial::SerialEvent ( void ) {
  /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Leer información del puerto serial~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/




}
