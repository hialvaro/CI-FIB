# CI - Interrupcións

<br data-effect="slide"/>

Una interrupció és un mecanisme proveït per un microprocessador o un sistema per a sincronitzar operacións d'E/S, manejar condicións d'errors i events d'emergència, coordinar l'ús de recursos compartits...

## CONCEPTES BÀSICS.

<br/>

## Què es una interrupció?
---
Una interrupció es un event que requereix que la CPU abandoni l'execució normal del programa i executi un servei relacionat amb l'event. Una interrupció pot ser generada internament (dins el xip) o externament (fora del xip). Una **interrupció externa** és generada quan els cirucits externs provoquen una senyal d'interrupció a la CPU. Una **interrupció interna** pot ser generada per el propi circuit del hardware del xip o per errors de software. En alguns microcontroladors, temporitzadors, funcions d'E/S i la CPU estàn incorporades en el mateix xip, i aquests subsistemes poden generar interrucions a la CPU. També poden ser causades per accións abnormals de l'execució del programa: _codis d'operació il·legals, overflows, divisións per zero..._  són les anomenades **interrupcións de software**. Els termes _traps_ o _excepcións_ també són utilitzats per a referir-se a les interrupcións de software.  

  
```
Exemple d'interrupció (analogia): 
Quan estàs sentat al teu escriptori llegint un llibre, i de cop sona el telèfon; segurament actuaràs de la següent manera:

1.  Recordar el nombre de pàgina o posar un punt de llibre a la pàgina que estàs llegint.
2. Agafar el telèfon i dir "Hola, etc etc..."
3. Escoltar la veu del telèfon per saber si la veu és familiar o has de preguntar qui és.
4. Parlar amb la persona.
5. Penjar el telèfon quan acabes de parlar.
6. Obrir el llibre de nou i tornar on ho havies deixat.
```


Amb aquest exemple podem explicar algunes coses molt similars a com un microprocessador actua amb una interrupció:

1. Com a estudiant, tu passes la major part del temps estudiant. Contestar una trucada, només passa ocasionalment. De manera similar, el microprocessador està normalment executant  programes la major part del temps. `Les interrupcións només forcen al mircroprocessador a parar l'execució de l'aplicació momentàniament i realitzar accións necessàries`.

2. Abans de agafar el telèfon, acabes de llegir la frase i llavors poses un punt de llibre per a recordar la pàgina que estaves llegint per acabar-la desrés de parlar per telèfon. La majoria dels microprocessadors necessiten identificar la causa de l'interrupció que estàn executant i `guardar l'adreça de la següent instrucció de memòria` (normalment a la pila) per tal de poder continuar amb el programa quan acabi l'interrupció.

3. Saps qui és la persona que et truca escoltant la seva veu a través del telèfon, o preguntat-li algunes coses per tal de saber qui és. De manera similar el micro `necessita identificar la causa de l'interrupció` abans de poder fer les accións apropiades. Això està dissenyat en el hardware del micro.

4.  Després d'identificar la persona que t'ha trucat, comences una conversa amb aquella persona amb els temes de conversa adequats. De manera similar `el micro actuarà de la manera apropiada per a la font de l'interrupció`

5. Quan acabes la conversa per telèfon, penjes, obres el llibre per la pàgina on havies deixat el punt i continues amb la lectura. Similarment, després de fer les accións necessàries i apropiades per l'interrupció, el micro tornarà a la següent instrucció on ha tingut lloc l'interrupció. Això és gràcies a que l'adreça on s'havia de continuar havia estat guardada a la memòria (stack).

## Emmascarament d'interrupcións
----
Depenent de la situació i l'aplicació, algunes interrupcións podrien ser no desitjades o necessàries i s'haurien de prevenir d'interrompre la CPU. La majoria dels microprocessadors i microcontroladors tenen l'opció d'ignorar aquestes interrupcións. Aquests tipus d'interrupcións s'anomenen **interrupcións emmascarables**. Hi ha alguns tipus d'interrupcións que no poden ser ignorats per la CPU i per les quals s'han de pendre mesures immediatament (**interrupcións no emmascarables**).  Un programa pot demanar a la CPU ignorar o fer cas a les interrupcións emmascarables a través de posar a 1 o 0 el  "_enable bit_". Una interrupció es marca com a **pendent** quan està activa però encara no ha estat tractada per la CPU. Una _interrupció pendent_ pot ser o no ser tractada per la CPU, depenen de l'_enable bit_ de l'interrupció.

<br/>

## Prioritat d'interrupcións
----

Pot ser que en un moment donat, la CPU rebi més d'una interrupcións pendents a la vegada. La CPU ha de **decidir quina interrupció ha de tractar primer**. La solució és prioritzar totes les fonts d'interrupcións. Una interrupció amb prioritat més alta sempre rebrà tractament que les de prioritat més baixa.

<br/>

## Vector d'interrupcións
----
Per a proveïr servei a una interrupció, el processador ha de saber l'adreça d'inici de la rutina de tractament. Aquesta adreça s'anomena **vector d'interrupcións**.

El pic18, només té dos vectors d'interrupció per a tractar totes les interrupcións. Aquestes interrupcións estàn classificades en alta i baixa prioritat.

<br/>

## INTERRUPCIÓNS EN EL PIC18
El PIC18 té les següents fonts d'interrupcións:  

 * INT pin (INT0 ... INT3)
 * Canvis de pins del PortB (qualsevol dels quatre ports superiors de PORTB)
 * Perifèrics del xip

### Registres relacionats amb interrupcións
----
Hi ha fins a 13 registres per a controlar les operacións d'interrupció. Aquests són:  

 * RCON
 * INTCONx (x = 2, 3; l'1 no porta x)
 * PIR1, PIR2 i PIR3
 * PIE1, PIE2, i PIE3
 * IPR1, IPR2 i IPR3

Cada font d'interrupcións te tres bits per a controlar les seves operacións, aquests són:

 * _Flag bit_: indica si un event d'interrupció ha passat.
 * _Enable bit_: habilita o deshabilita una interrupció.
 * _Priority bit_: Selecciona si és alta o baixa prioritat. Només funciona quan l'esquema de prioritats està activat.

### **Registre RCON**
Aquest registre té un bit (IPEN) per a activar l'esquema de prioritats. Els altres bits s'utilitzen per a indicar _causes de reset_. 

<br/>

### **Registres INTCON - Interrupt Control Registers**
Aquests registres conenen bits d'_enable, priority i flag_ per pins INT externs, pins PORTB canviats i interrupcións de Timer 0 (TMR0) per overflow.

El pin INT0 no té un _priority bit_ per a seleccionar la seva prioritat. De fet, aquest pin sempre està en **alta** prioritat, ja que apareix en els dos circuits d'alta i baixa prioritat.

`Quan l'esquema de prioritats està actiu, l'usuari ha de posar el git GIEH (bit 7) per tal de permetre les interrupcións de baixa prioritat. Posar el bit GIEL sense el bit GIEH no activarà les interrupcións de baixa prioritat.`

---
**BIT 7** de INTCON anomenat **GIE/GIEH** (Global interrupt enable bit)  
Si IPEN (Bit7 del RCON) = 0  

 * 0 desactiva totes les interrupcións
 * 1 les activa

Si IPEN (Bit 7 del RCON) = 1

 * 0: Desactiva totes les interrupcións.
 * 1: Activa totes les interrupcións **d'alta prioritat**.
----
**BIT 6** de INTCON anomenat **PEIE/GIEL** (Peripherial interrupt enable bit)
Si IPEN (Bit 7 del RCON) = 0

 * 0: Desactiva totes les interrupcións de perifèrics.
 * 1: Activa totes les interrupcións de perifèrics.

Si IPEN (Bit 7 del RCON) = 1

 * 0: Desactiva totes les interrupcións **de baixa prioritat**
 * 1: Activa totes les interrupcións **de baixa prioritat**

<br/>

### **Registres PIR1 . . . PIR3**
Aquests registres contenen els bits de _flag_ individuals per a les interrupcións perifèriques. Aquests _flag bits_ permeten a la rutina de tractament identificar la causa de l'interrupció. Segons el model de PIC18, els bits poden varirar.  

<br/>

### **Registres PIE1 . . . PIE3**
Contenen bits _enable_ individuals per a les interrupcións perifèriques. `quan el bit IPEN (Bit 7 del RCON) és 1, el bit PEIE ha de ser posat a 1 per a permetre qualsevol d'aquestes interrupcións perifèriques`.  

<br/>

### **Registres IPR1 . . . IPR3 - _Interrupt Priority Registers_**
Contenen els bits de prioritat individuals per a les interrupcións perifèriques. Aquests registres només etenn efecte quan el esquema de prioritats d'interrupcións està activat (IPEN = 1). Activant la prioritat d'interrupcións i posant el bit de prioritat associat, l'usuari pot posar qualsevol interrupció perifèrica a alta o baixa prioritat.

---
##CONTINUARÀ...##
---
