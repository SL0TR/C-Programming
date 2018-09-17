#include <stdio.h>

main () {
    char hexa;
    printf("Enter a hexa digit : ");
    hexa = getchar();
    hexa = toupper(hexa);
    switch(hexa) {
    case 'A' :
    case 'B'  :
    case 'C'  :
    case 'D'  :
    case 'E'  :
    case 'F'  :
    printf("Decilam value of  hexadecimal digit is : %d", hexa - 65 + 10);
    break;
    }

}
