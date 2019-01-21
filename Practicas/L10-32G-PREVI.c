#include <xc.h>

void configPIC (){
    PORTD = 0;
    PORTB = 0;
    PORTA = 0;

    TRISD = 0x00;
    TRISB = 0xFF;
    TRISA = 0x00;

    ANSELA = 0x00; //Dig
    ANSELD = 0x00; //Dig
    ANSELB = 0xFF; //Analog

    ADCON0 = 0x33; //AN12 / ENABLE ADC / GO
    ADCON1 = 0x80; //REFERENCE (VSS, VD)
    ADCON2 = 0x11;
}


void main (void){
    configPIC();

    while(1){
        ADCON0bits.GO = 1; //Petició de conversió
        while(ADCON0bits.GO) {} //Espera activa
        int valor = ((5*ADRESH)/255.0)*1000;
        __delay_ms(200);
        printnum(valor);
    }
}