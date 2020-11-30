#include <stdio.h>
#include <string.h>

void nombrePropio(){
    char Cadena[1000];
    printf("Ingrese la palabra que desa convertir\n");
    fflush(stdin);
    fgets(Cadena,1000,stdin);
    int tamanhio =( strlen(Cadena))-1;
    for (int i = 0; i < strlen(Cadena); ++i) {
        int Ascci = Cadena[i];
        if (Cadena!=0){
            if (i==0  && (Ascci >= 97 && Ascci <=122)){
                Cadena[i] = Cadena[i]-32;
            }
            if ( i == tamanhio && (Cadena[i-1]>='A' && Cadena[i-1]<='Z')){
                Cadena[i-1] = Cadena[i-1]+32;
            }
            if (Ascci >= 65 && Ascci <=90 & i!=0  && Cadena[i-1]!= ' ') {
                Cadena[i] = Cadena[i]+32;
            }if ( Cadena[i+2]== ' ' && Cadena[i]==' ' && (Cadena[i+1]>='A' && Cadena[i+1]<='Z')){
                Cadena[i+1] = Cadena[i+1] + 32;
            }
            if ( Cadena[i+2]!= ' ' && Cadena[i]==' ' ){
                if ( Cadena[i] == ' '){
                    Ascci = Cadena[i+1];
                    if (Ascci>= 97 && Ascci <=122){
                        Cadena[i+1] = Cadena[i+1]-32;
                    }
                }
            }
        }
    }
    printf("La cadena convertida a nombre propio queda asi:\n-------------------------------------------------------------------------------------------------------------------\n%s------------------------------------------------------------------------------------------------------------------- \n" , Cadena);
}

void contarPalabraEnCadena(){
    char palabra[1000];
    char cadena[1000];
    int contadorPrincipal=0;
    int contador=0;

    printf("Ingrese la palabra:\n");
    fflush(stdin);
    gets(palabra);
    printf("Ingrese la cadena a buscar:\n");
    fflush(stdin);
    gets(cadena);
    for (int i = 0; i < strlen(palabra); ++i) {
        for (int j = 0; j < strlen(cadena); ++j) {
            if (palabra[j+i]==cadena[j]||palabra[j+i]-32==cadena[j]||palabra[j+i]==cadena[j]-32){
                contador++;
            }
        }
        if (contador==strlen(cadena)){
            contadorPrincipal++;
        }
        contador=0;
    }
    printf("La palabra se repite %i veces\n", contadorPrincipal);
}

void encriptar(){
    char cadena[1000]="";
    fflush(stdin);
    printf("Ingrese la cadena a encriptar\n");
    gets(cadena);
    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i]!=' '){
            cadena[i]=cadena[i]-strlen(cadena)+i;
        }else{
            cadena[i]=32;
        }
    }
    printf("La cadena encriptada es: %s\n", cadena);
}

void desencriptar(){
    char cadena[1000]="";
    fflush(stdin);
    printf("Ingrese la cadena a desencriptar\n");
    gets(cadena);
    for (int i = strlen(cadena)-1; i >=0 ; i--) {
        if (cadena[i]!=32){
            cadena[i]=cadena[i]+strlen(cadena)-i;
        }else{
            cadena[i]=' ';
        }
    }
    printf("La cadena desencriptada es: %s\n", cadena);
}

void llenarCaracteres(){
    fflush(stdin);
    int numeroRepeticiones = 0, sentido=0;
    char palabra[1000]="", caracter=' ' ;
    printf("Ingrese la cadena principal:\n");
    scanf("%[^\n]", & palabra);
    printf("Ingrese el caracter - Recuerde que solo se tomara el primer caracter que se ingresa: \n");
    fflush(stdin );
    scanf("%c" , &caracter);
    printf("Ingrese el n%cmero de repeticiones:\n",163);
    fflush(stdin );
    scanf("%i" , &numeroRepeticiones);
    printf("Ingrese el sentido que quiere a%cadir los caracteres (1 Para derecha, 2 Para izquierda)\n",164);
    fflush(stdin);
    scanf("%i" , &sentido);
    while (sentido != 1 && sentido != 2){
        printf("Ingrese una opci%cn valida\n", 162);
        printf("Ingrese el sentido que quiere a%cadir los caracteres (1 Para derecha, 2 Para izquierda)\n" ,164);
        fflush(stdin);
        sentido = 0;
        scanf("%i" , &sentido);
    }
    char Repetidos[1000]="";
    for (int i = 0; i < numeroRepeticiones; ++i) {
        Repetidos[i] =  caracter;
    }
    printf("%d", sentido);
    if (sentido==1){
        printf("La palabra final queda as%c: %s%s\n" ,161, palabra, Repetidos);
    }else if (sentido == 2){
        printf("La palabra queda as%c: %s%s\n" ,161,Repetidos, palabra);
    }
}

void borrarCaracter(){
    char palabra[1000],palabraModificada[1000]="";
    char caracter[1];
    int contador=0;
    printf("Ingrese la cadena\n");
    fflush(stdin);
    gets(palabra);
    printf("Ingrese el caracter a borrar - Recuerde que solo se tomara el primer caracter que se ingresa: \n");
    fflush(stdin);
    gets(caracter);

    for (int i = 0; i < strlen(palabra);i++) {
        if (palabra[i]!=0){
            if (palabra[i]!=caracter[0]&&(palabra[i]!=caracter[0]-32)) {
                palabraModificada[contador]=palabra[i];
                contador++;
            }
        }
    }
    printf("La palabra modificada es: %s\n", palabraModificada);
}

void interseccion(){
    char palabra[1000]="";
    char palabraDos[1000]="";
    char palabraModificada[1000]="";
    char palabraFinal[1000]="";
    int contador=0;
    int contadorDos=0;

    printf("Ingrese la cadena uno \n");
    fflush(stdin);
    gets(palabra);
    printf("Ingrese la cadena dos a comparar\n");
    fflush(stdin);
    gets(palabraDos);
    for (int i = 0; i < strlen(palabra); ++i) {
        if (palabra[i]>= 'A' && palabra[i]<='Z'){
            palabra[i] = palabra[i] + 32;
        }
    }

    for (int i = 0; i < strlen(palabraDos); ++i) {
        if (palabraDos[i]>= 'A' && palabraDos[i]<='Z'){
            palabraDos[i] = palabraDos[i] + 32;
        }
    }

    for (int i = 0; i < strlen(palabra); ++i) {
        for (int j = 0; j < strlen(palabraDos); ++j) {
            if (palabra[i]==palabraDos[j]){
                palabraModificada[contador]=palabra[i];
                contador++;
                break;
            }
        }
    }
    contador=0;
    while(palabra[contador])
    {
        if(!strchr(palabraFinal,palabraModificada[contador])&&!strchr(palabraFinal-32,palabraModificada[contador]))
            palabraFinal[contadorDos++]=palabraModificada[contador];
        contador++;
    }
    printf("La intersecci%c de las dos cadenas es la siguiente: adena%s\n", 162,palabraFinal);
}

void diferenciaEntreCadenas(){
    char palabra[1000];
    char palabraDos[1000];
    int contador=0;
    int k=0;
    printf("Ingrese la cadena uno \n");
    fflush(stdin);
    gets(palabra);
    printf("Ingrese la cadena a comparar\n");
    fflush(stdin);
    gets(palabraDos);
    for (int i = 0; i < strlen(palabraDos);i++) {
        contador=0;
        for (int j = 0; j <strlen(palabra) ; ++j) {
            if (palabra[j]!=palabraDos[i]&&(palabra[j]!=palabraDos[i]-32)&&(palabra[j]-32!=palabraDos[i])) {
                palabra[contador]=palabra[j];
                contador++;
            }else{
                palabra[strlen(palabra)-k]=' ';
                k++;
            }
        }
        k=0;
    }
    contador=0;
    char palabraFinal[1000]="";
    for (int i = 0; i < strlen(palabra); ++i) {
        if ((palabra[i]>='A'&&palabra[i]<='z')||palabra[i]==' '){
            palabraFinal[contador]=palabra[i];
            contador++;
        }
    }
    printf("La diferencia entre las dos cadenas es: %s\n", palabraFinal);
}

void eliminarCaracteresIzquierdaDerecha(){
    char  cadenaUno[1000], cadenaDos[1000];
    int poscion;
    printf("Ingrese la cadena Uno\n");
    fflush(stdin);
    gets(cadenaUno);
    printf("Ingrese la cadena Dos\n");
    gets(cadenaDos);
    printf("1. Para izquierda o 2. Para derecha\n");
    fflush(stdin);
    scanf("%i", &poscion);
    while (poscion != 1 && poscion != 2){
        printf("Ingrese una opci%cn valida\n", 162);
        printf("1. Para izquierda o 2. Para derecha\n");
        fflush(stdin);
        poscion = 0;
        scanf("%i" , &poscion);
    }

    int posicionInicio=0;
    int condicion=0;
    if ( poscion == 1 ){
        for (int i = 0; i < strlen(cadenaUno); i++) {
            for (int j = 0; j < strlen(cadenaDos); ++j) {
                if (cadenaDos[j] == cadenaUno[i] || (cadenaDos[j]-32 == cadenaUno[i]) || (cadenaDos[j] == cadenaUno[i]-32) ||
                    (cadenaDos[j]== ' ' || cadenaUno[i]==' ')  ){
                    posicionInicio++;
                    cadenaUno[i] = ' ';
                    break;
                }if (j== strlen(cadenaDos) -1){
                    condicion = 1;
                    break;
                }
            } if (condicion ==1){
                break;
            }
        }
        char cadenaFinal[1000]="";
        int contador=0;
        for (int i = posicionInicio; i < strlen(cadenaUno); ++i) {
            cadenaFinal[contador] = cadenaUno[i];
            contador++;
        }
        if (strlen(cadenaFinal)!=0){
        printf("La cadena con los caracteres eliminados a la izquierda queda de la siguienre manera: %s\n" , cadenaFinal);
        } else{
            printf("Todos los caracteres de la cadena uno son comunes con los de la cadena dos\n");
        }
    }else if ( poscion == 2 ){
        for (int i = strlen(cadenaUno)-1; i > 0; i--) {
            for (int j = 0; j < strlen(cadenaDos); ++j) {
                if (cadenaDos[j] == cadenaUno[i] || (cadenaDos[j]-32 == cadenaUno[i]) || (cadenaDos[j] == cadenaUno[i]-32) ||
                    (cadenaDos[j]== ' ' || cadenaUno[i]==' ')  ){
                    cadenaUno[i] = ' ';
                    break;
                }if (j== strlen(cadenaDos) -1){
                    condicion = 1;
                    break;
                }
            } if (condicion ==1){
                break;
            }
        }
        printf("La cadena con los caracteres eliminados a la derecha queda de la siguienre manera: %s\n" , cadenaUno);
    }
}

void menu(){
    int option=0;
    while (option != 10){

        printf("Ingrese la opci%cn deseada:\n1.Convertir en nombre propio\n"
               "2.Contar palabras en una cadena\n3.Encriptar cadena\n4.Desencriptar cadena"
               "\n5.Llenar caracteres\n6.Borrar caracteres\n7.Intersecci%cn\n8.Diferencia entre dos cadenas"
               "\n9.Borrar caracteres por izquierda o derecha\n10.Salir\n",162,162);

        fflush(stdin);
        scanf("%i",&option);


        if((option>0&&option<=10)){
            switch (option) {

                case 1:nombrePropio();
                    break;

                case 2:contarPalabraEnCadena();
                    break;

                case 3:encriptar();
                    break;

                case 4:desencriptar();
                    break;

                case 5:llenarCaracteres();
                    break;

                case 6:borrarCaracter();
                    break;

                case 7:interseccion();
                    break;

                case 8:diferenciaEntreCadenas();
                    break;

                case 9:eliminarCaracteresIzquierdaDerecha();
                    break;

                case 10:

                    break;

                default :

                    break;
            }
        }else{
            printf("**********Ingrese una opci%cn valida**********\n\n",162);
        }
    }
}

int main() {
    menu();
    return 0;
}