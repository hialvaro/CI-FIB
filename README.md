# Resum per al primer parcial
## Què és un computador?
---
Un computador consta de hardware i software; El hardware es basa en quatre tipus de components:
 - Processador: Responsable de realitzar totes les operacions computacionals i la coordinació de l’ús dels recursos de l’ordinador. Un sistema computacional pot constar d’un o més processadors. Un processador pot realitzar tasques de propòsit general o de propòsit específic, com renderització gràfica, impressió...
  - Dispositius d’entrada: Un computador està dissenyat per a executar programes que manipules certes dades. Els dispositius d’entrada són necessaris per a entrar al programa i entrar-hi les dades per a ser processades. Teclats, ratolins, scanners, sensors...
   - Dispositius de sortida: Els resultats finals han de ser mostrats en una pantalla o impresos en paper per tal que l’usuari els pugui veure (LEDs, etc). Aquests són els dispositius de sortida.
    - Dispositius de memòria: Perquè els programes puguin ser executats i les dades puguin ser processades s’han de guardar en memòria perquè el processador pugui accedir-hi.

## El processador
---
El processador, també anomenat CPU està constituït al menys d’aquests tres components:
 - Registres: Un registre és un lloc d’emmagatzematge dins la CPU. S’utilitza per a contenir dades o adreces de memòria durant l’execució d’una instrucció. Com que els registres estan molt aprop de la CPU, permet un accés molt ràpid durant l’execució del programa. El nombre de registres varia molt entre processadors.
  - ALU (Arithmetic Logic Unit): La ALU realitza totes les computacions numèriques i lògiques. La ALU rep dades de la memòria, fa les operacions i si és necessari reescriu les dades a la memòria de nou.
   - Unitat de Control: La unitat de control conté la lògica de les instruccions del hardware. L’unitat de control descodifica i monitoritza les execucions de les instruccions. També actua com un àrbitre ja que varies porcions del computador necessiten els recursos de la CPU. Les activitats de la CPU estan sincronitzades amb el rellotge del sistema.
La unitat de control també conté un registre anomenat program counter (PC) que manté un seguiment de les adreces de les següents instruccions a ser executades.

## El microprocessador
---
Un microprocessador és un processador integrat en un sol circuit. Un microcomputador és un computador que utilitza un microprocessador com a CPU. La velocitat de rellotge ha anat millorant de manera increïble amb els anys, però la velocitat d’accés a memòria ha millorat molt poc; això provoca que el processador pot fer operacions aritmètiques en un cicle de rellotge però necessita forces cicles per accedir a les dades de memòria. Aquesta diferència fa que la rapidesa del rellotge sigui inútil per a millorar el rendiment.

La solució al problema, és afegir una petita memòria d’alta velocitat a la CPU; l’anomenada Memòria Cache. La CPU pot accedir a dades de la seva pròpia cache amb tan sols un o dos cicles perquè està molt aprop de la ALU.

## Els microcontroladors
---
Un microcontrolador (MCU) es un computador implementat en un sol circuit de gran escala integrat. Amés d’aquests components que estàn compresos en un microprocessador, un MCU també conté alguns dels següents elements:
 - Memòria
 - Temporitzadors, comptadors d’events, capturadors d’entrades, de sortides, comparadors de sortides, etc...
 - PWM
 - Conversos Analògic-Digital
 - Conversos Digital-Analògic
 - Controlador de memòria d’accés directe

### LA MEMÒRIA
Els programes i les dades estan emmagatzemats en memòria. Es classifica en dos tipus Random Access Memory (RAM) i Read-Only Memory (ROM).

_**RANDOM-ACESS MEMORY**_ (RAM)  
La memòria RAM, és **volàtil**; és a dir, no pot retenir les dades amb l’absència d’energia (electricitat). A la RAM també se l’anomena Memòria de Lectura/Escriptura, perquè **permet que el processador llegeixi i escrigui en la memòria**. Tant l’escriptura com la lectura suposen la mateixa quantitat de temps.
Sempre que el dispositiu tingui energia, el microprocessador pot escriure en una localització de la RAM i llegir de nou els mateixos continguts quan sigui necessari. Llegir la memòria és un procés no-destructiu; en canvi, quan el micro escriu dades a memòria, les dades antigues són substituïdes, i per tant destruïdes.

Existeixen dos tipus de RAM: **Static RAM** (SRAM) i **Dynamic RAM** (DRAM). La **SRAM** utilitza de quatre a sis transistors  per a guardar un bit d’informació; sempre que el dispositiu tingui energia, la informació de la SRAM no es veurà afectada (borrada). La **RAM dinàmica (DRAM)**, utilitza un transistor i un capacitor per a guardar un bit d’informació. La informació guardada en el capacitor (en forma de càrrega elèctrica) es perdrà amb el temps, així que és necessari una operació d’actualització per a mantenir els continguts d’aquesta.
La RAM, s’utilitza principalment per a guardar programes dinàmics i dades; un ordinador sovint vol córrer diferents programes a la vegada, i aquests programes normalment utilitzen diferents sets de dades. Els programes i les dades, doncs, han de carregar-se des de un disc dur o memòries secundaries cap a la RAM, és per això que se’ls hi diu dinàmiques.

_**READ-ONLY MEMORY**_ (ROM)  
La memòria ROM no és volàtil, si es treu l’energia de la ROM i després es torna a aplicar les dades originals encara seran allà.  Com implica el seu nom, la ROM només pot ser llegida; tot i que això no es del tot cert.
La majoria de ROM requereixen algoritmes especials i voltatge per a escriure dades al xip. Sense l’algoritme i el voltatge específics qualsevol intent de escriure-hi no tindrà èxit. Avui en dia hi ha molts diferents tipus de ROM:
 - Masked-programmed read-only memory:
   - Programada durant la fabricació.
 - Programable read-only memory
   - Rom que pot ser programada per a l’usuari final utilitzant un PROM (Programador de ROM)
   - Un cop programada no pot ser canviada.
 - Erasable programable read-only memory
   - Pot ser borrada amb llum ultraviolat
   - Després pot ser reescrita
 - Electrically erasable programable read-only memory
   - Pot ser borrada i reprogramada amb electricitat.
 - Flash Memory
   - Va ser creada per a incorporar els vantatges i treure les desavantatges de EPROM i EEPROM. La memòria flash pot ser borrada i reprogramada en el sistema sense un programa dedicat o un programador.

## El software del Computador
Els programes es coneixen com a software. Un programa es una sèrie d’instruccions que el computador pot executar, es guarda a la memòria del computador en forma de nombres binaris: Instruccions Màquina.
La llargada de una instrucció màquina d’un computador pot ser fixe o variable; si fixem la mida de les instruccions, fa que descodificar-les sigui molt més simple i per tant podem simplificar el disseny del processador; però té un gran desavantatge, la llargària del programa pot ser molt més llarga a causa de la ineficiència de la codificació de les instruccions. La gran majoria d’instruccions són de 16 bits, però n’hi ha quatre que són de 32 bits.  

_**LLENGUATGE ASSEMBLADOR**_  
Desenvolupar programes en llenguatge màquina (binari) és molt difícil; El llenguatge assemblador es va inventar per a simplificar la feina de programar. Els mnemònics són representacions en no-alt nivell del llenguatge màquina, per exemple en el PIC18:  

**Decf fp_cnt, F, A** significa “decrementa la variable lp_cnt localitzada al access bank 1 unitat”.  

Llenguatges com C, C++ o Java són llenguatges d’alt nivell, ja que s’acosten al anglès parlat i sovint una sola línia representa moltes instruccions en assemblador.

## Vista general del PIC18  
_**ORGANITZACIÓ DE MEMÒRIA**_  
La memòria consisteix en una seqüència de ubicacions directament adreçables. Una ubicació de memòria es referida com una unitat d’informació; en el PIC18, una ubicació de memòria conté 8 bits d’informació, és a dir, 1 Byte; la meitat (4bits) són 1 nibble. Una ubicació de memòria pot ser utilitzada per a guardar dades, instruccions, estats dels perifèrics, etc. Una unitat d’informació té dos components: La seva _adreça_ i el seu _contingut_.  

ADREÇA -> -> CONTINGUTS  

Cada ubicació de memòria, té una adreça que ha de ser proporcionada abans de que els seus continguts puguin ser accedits. La CPU es comunica amb la memòria primer identificant l’adreça i llavors passant-la per el bus d’adreçes; similar al fet que un carter necessita l’adreça per a donar la carta.  
Per tal de diferenciar els continguts d’un registre amb l’adreça d’un registre o una ubicació de memòria, utilitzarem les següents notacions:  
 - **[adreça de registre]**: Es refereix als continguts d’un registre; [WREG] es refereix als continguts del registre WREG; [0x20] es refereix als continguts del registre de propòsit general a l’adreça 0x20.
 - **Adreça**: Es refereix al registre o ubicació de memòria; 0x10 es refereix al registre de funció especial 0x10.  
 
 _**SEPARACIÓ DE LA MEMÒIRA DE DADES I LA MEMÒRIA DE PROGRAMES**_  
 
 El PIC18, assigna diferents espais de memòria a les dades i als programes i destina busos separats entre ells per què puguin accedir a la vegada.
El PIC18 té un PC de 21 bits dividit en tres registres: PCU, PCH i PCL. Entre ells, el PCL és accessible directament per l’usuari. El PCH i el PCL tenen 8 bits mentre que el PCU té 5 bits.  

_**MEMÒRIA DE DADES**_  
La memòria de dades del PIC18 està implementada com a SRAM, cada ubicació de memòria de dades és referida com a registre o registre de fitxers. El PIC18 suporta 4096 bytes de dades en memòria. Es requereixen 12 bits d’adreça per a seleccionar un dels registres.  

A causa de la mida limitada de les instruccions del PIC18 (16 bits la majoria), només 8 bits de l’instrucció queden lliures per a especificar el registre que operar. Com a resultat, els dissenyadors van dividir els 4096 bytes de la memòria de dades del PIC18 en 16 bancs (Banks). Només un sol banc de 256 registres pot estar actiu a l’hora. Quatre bits addicionals es posen en un registre especial anomenat BSR (Bank Select Register) per a seleccionar el banc actiu; l’usuari ha de canviar els continguts del BSR per a canviar el banc actiu.  

Hi ha dos tipus de registres: Registres de propòsit general (GPRs) i registres de funcions especials (SFRs). Els GPRs s’utilitzen per a guardar dades dinàmiques quan la CPU del PIC18 està executant un programa; els SFRs, són utilitzats per la CPU i els perifèrics per a controlar les ordres del MCU; els registres estan implementats com a SRAM.  

Els SFRs estan assignats de la més alta adreça cap avall, mentre que els GPRs comencen del l’adreça 0 cap a dalt.  

[memòria de dades eeprom ----------- 1.5.3 Han-Way Huang // per llògica es pot deduïr -> Electrically eraseable programable rom]  

_**ORGANITZACIÓ DE MEMÒIRA DE PROGRAMA**_  

El PIC18, com ja hem dit, té un PC de 21 bits i en conseqüència és capaç de adreçar els 2MB d’espai de memòria de programa. Si accedim una ubicació inexistent de memòria, llegirem tot 0s.  

La MCU del PIC18 té 31 entrades d’adreces de retorn (un stack) per a guardar adreces de retorn de crides a subrutines i interrupcions de processos. Aquesta pila no és part de l’espai de la memòria de programa.






# 6. Interrupcións

<br data-effect="slide"/>

Una interrupció és un mecanisme proveït per un microprocessador o un sistema per a sincronitzar operacións d'E/S, manejar condicións d'errors i events d'emergència, coordinar l'ús de recursos compartits...

## 1 - CONCEPTES BÀSICS.

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

## 2.INTERRUPCIÓNS EN EL PIC18
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
### Author: Alvaro Moreno
### Font: PIC Microcontroller - Han-Way Huang
---
