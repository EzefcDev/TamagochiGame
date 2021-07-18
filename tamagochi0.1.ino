/*Tamagotchi con codigo optimizado*/

//Definimos salidas de deco
const int a0 = 10;
const int a1 = 11;
const int a2 = 12;
//Definimos salidas
const int a = 9;
const int b = 8;
const int c = 7;
const int d = 6;
const int e = 5;
const int f = 4;
const int g = 3;
const int h = 2;
//Defino matriz
             /*  0    1    2    3    4    5    6   7  | 8    9    10  11    12   13   14  15 | 16   17  18   19   20   21    22  23 | 24   25  26   27    28   29   30  31 |  32   33   34  35   36   37   38   39 | 40  41   42    43  44   45   46    47  | 48   49   50   51   52   53   54   55  | 56   57  58    59   60   61   62   63  | 64   65  66   67   68    69   70   71 |  72   73  74   75   76   77   78    79 | 80   81   82   83   84    85   86   87 |  88   89   90   91   92   93   94   95 |  96   97   98   99  100  101  102  103 | 104  105  106  107  108  109  110  111 | 112  113  114  115  116  117  118  119 | 120  121  122  123  124  125  126  127 | 128  129  130  131  132  133  134   135 | 136  137  138  139  140  141  142  143 | 144  145  146  147  148  149  150  151 | 152  153  154  155  156  157  158  159 | 160  161  162  163  164  165  166  167 | 168  169  170  171  172  173  174  175*/
boolean va[176]={LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW,  LOW, LOW, LOW, LOW,HIGH,HIGH,HIGH,HIGH,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean vb[176]={LOW, LOW, LOW,HIGH,HIGH, LOW, LOW,LOW, LOW, LOW,HIGH, LOW, LOW,HIGH, LOW,LOW, LOW,HIGH, LOW, LOW, LOW, LOW,HIGH,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW,  LOW, LOW, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW,  LOW, LOW, LOW,HIGH,HIGH, LOW, LOW, LOW,  LOW, LOW,HIGH, LOW, LOW,HIGH,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW,HIGH,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW,HIGH,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW, LOW,HIGH,HIGH, LOW, LOW, LOW,  LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH, LOW,  LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH, LOW, LOW, LOW, LOW,  LOW, LOW, LOW,HIGH,HIGH, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean vc[176]={LOW, LOW,HIGH, LOW, LOW,HIGH, LOW,LOW, LOW, LOW,HIGH, LOW, LOW,HIGH, LOW,LOW, LOW, LOW,HIGH, LOW, LOW,HIGH, LOW,LOW, LOW,HIGH,HIGH, LOW, LOW,HIGH,HIGH,LOW, LOW,HIGH,HIGH, LOW, LOW,HIGH,HIGH,LOW,  LOW, LOW, LOW, LOW, LOW,HIGH, LOW, LOW,  LOW, LOW,HIGH, LOW,HIGH,HIGH, LOW, LOW,  LOW, LOW,HIGH, LOW,HIGH,HIGH, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW,HIGH, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW, LOW,HIGH, LOW,HIGH, LOW, LOW,  LOW, LOW,HIGH, LOW, LOW,HIGH, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW,HIGH, LOW, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW,HIGH, LOW, LOW, LOW, LOW,  LOW, LOW,HIGH, LOW, LOW,HIGH, LOW, LOW,  LOW, LOW,HIGH,HIGH, LOW,HIGH,HIGH, LOW,  LOW, LOW,HIGH,HIGH, LOW, LOW, LOW, LOW,  LOW, LOW,HIGH,HIGH, LOW, LOW, LOW, LOW,  LOW, LOW,HIGH,HIGH, LOW, LOW, LOW, LOW};
boolean vd[176]={LOW,HIGH, LOW, LOW, LOW, LOW,HIGH,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW,  LOW, LOW, LOW, LOW,HIGH,HIGH,HIGH,HIGH,  LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW, LOW,  LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW,HIGH, LOW,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW,HIGH, LOW,HIGH,  LOW, LOW, LOW, LOW,HIGH, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW, LOW, LOW,  LOW,HIGH,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW,HIGH, LOW, LOW,HIGH, LOW, LOW,HIGH,  LOW,HIGH, LOW, LOW,HIGH, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW,HIGH, LOW, LOW, LOW,  LOW, LOW, LOW, LOW,HIGH, LOW, LOW, LOW};
boolean ve[176]={LOW,HIGH, LOW, LOW, LOW, LOW,HIGH,LOW, LOW,HIGH, LOW, LOW, LOW, LOW,HIGH,LOW, LOW, LOW, LOW,HIGH,HIGH, LOW, LOW,LOW, LOW, LOW, LOW,HIGH,HIGH, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, HIGH,HIGH,HIGH,HIGH, LOW, LOW, LOW, LOW,  LOW,HIGH,HIGH,HIGH, LOW, LOW, LOW, LOW,  LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW,HIGH, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW, LOW,HIGH, LOW,HIGH, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW, LOW, LOW,  LOW, LOW,HIGH, LOW,HIGH,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean vf[176]={LOW,HIGH, LOW, LOW, LOW, LOW,HIGH,LOW, LOW, LOW,HIGH, LOW, LOW,HIGH, LOW,LOW, LOW, LOW,HIGH, LOW, LOW,HIGH, LOW,LOW, LOW, LOW,HIGH, LOW, LOW,HIGH, LOW,LOW, LOW, LOW, LOW,HIGH,HIGH, LOW, LOW,LOW,  LOW, LOW,HIGH, LOW, LOW, LOW, LOW, LOW,  LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW, LOW,  LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW,HIGH, LOW,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW,HIGH, LOW,HIGH,  LOW,HIGH,HIGH, LOW, LOW, LOW,HIGH,HIGH,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW, LOW, LOW,  LOW, LOW,HIGH, LOW, LOW,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW, LOW,HIGH, LOW,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH, LOW,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean vg[176]={LOW, LOW, HIGH,LOW, LOW,HIGH, LOW,LOW, LOW, LOW, LOW,HIGH,HIGH, LOW, LOW,LOW, LOW,HIGH, LOW, LOW, LOW, LOW,HIGH,LOW, LOW, LOW, LOW,HIGH,HIGH, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW,  LOW,HIGH, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,  LOW, LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,  LOW, LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,  LOW,HIGH,HIGH, LOW, LOW, LOW,HIGH,HIGH,  LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH, LOW,  LOW, LOW,HIGH, LOW, LOW, LOW, LOW, LOW,  LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW, LOW,  LOW, LOW, LOW,HIGH, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW, LOW, LOW,HIGH, LOW, LOW, LOW,  LOW, LOW, LOW, LOW,HIGH, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
boolean vh[176]={LOW, LOW, LOW,HIGH,HIGH, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,LOW, HIGH,HIGH,HIGH,HIGH, LOW, LOW, LOW, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW,  LOW, LOW, LOW,HIGH,HIGH, LOW, LOW, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW,  LOW, LOW, LOW,HIGH,HIGH,HIGH,HIGH, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW,HIGH, LOW, LOW, LOW, LOW,HIGH, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW,  LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
//Definimos secuencia deco
boolean va2[8]={LOW,LOW,LOW,LOW,HIGH,HIGH,HIGH,HIGH};                                                  
boolean va1[8]={LOW,LOW,HIGH,HIGH,LOW,LOW,HIGH,HIGH};
boolean va0[8]={LOW,HIGH,LOW,HIGH,LOW,HIGH,LOW,HIGH};
//Definimos variables de cambio
int cambio = 0;
//Definimos random
int randomPin ;
//Definimos estados
int vida;

void setup() {
  // Inicializamos salidas
  pinMode(a0,OUTPUT);
  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
  //Establecemos la semilla para aleatoridad
  randomSeed(analogRead(A5));
}

void loop() {
    empezar();// esperamos hasta que la funcion detecte la presion del boton inicio 
    vida =10; //inicializamos la vida
    cambio=20;
  while(vida > 0){
    while(cambio == 20){
      //CARA FELIZ 
      vueltas(8,16,2000);    
      cambio = 40;
      randomPin = random(1,5);
      vida = vida - 1;
      //CARA TRISTE
      while(cambio==40){
       caras(16,24);
       int dato = analogRead(A0);  //conexion del menu de estados y contador de vida    
       if(dato > 500 && dato < 520 ){
        cambio = 1;
        delay(50);
        vida = vidaCalculo(cambio);
       }
       if(dato > 330 && dato < 350){
        cambio = 2;
        delay(50);
        vida = vidaCalculo(cambio);
       }
       if(dato > 244 && dato < 264){
        cambio = 3;
        delay(50);
        vida = vidaCalculo(cambio);
       }
       if(dato > 190 && dato < 210){
        cambio = 4;
        delay(50);
        vida = vidaCalculo(cambio);
        }
       //Boton de estado de vida
       if(dato > 136 && dato < 170){
        delay(50);
            if(vida >= 9){
              vueltas(144,152,500);
            }
            if(vida <9 && vida >=7){
              vueltas(152,160,500);
            }
            if(vida <7 && vida >=4){
              vueltas(160,168,500);
            }
            if(vida <4 && vida >=0){
              vueltas(168,176,500);
            }
        }
       //imagen de comer
       while(cambio==1){
        for(int f =0; f<=30 ; f++){ //tiempo de secuencia, se le suman los loop de cada imagen
          vueltas(48,56,20);
          vueltas(56,64,20);
        }
        cambio = comprobar(1);                      
        }
       //imagen de dormir
       while(cambio==2){
        for(int f =0; f<=30 ; f++){//tiempo de secuencia, se le suman los loop de cada imagen
          vueltas(24,32,20);
          vueltas(32,40,20);
          vueltas(40,48,20);
        }                      
        cambio = comprobar(2);
        }
       //imagen de bañar
       while(cambio==3){
        for(int f =0; f<=30 ; f++){//tiempo de secuencia, se le suman los loop de cada imagen
          vueltas(64,72,20);
          vueltas(72,80,20);
          vueltas(80,88,20);
        }                      
        cambio = comprobar(3);
        }
        //imagen del juego( piedra, papel, o tijera)
       while(cambio == 4){
        int total = 0;
        int fin = 0;
        while(fin < 3){
          for(int f = 0; f <= 5 ; f++){
            vueltas(96,104,20);
            vueltas(104,112,20);
            vueltas(88,96,20);
          }
          digitalWrite(a0,LOW);
          digitalWrite(a1,LOW);
          digitalWrite(a2,LOW);
          digitalWrite(a,LOW);
          digitalWrite(b,LOW);
          digitalWrite(c,LOW);
          digitalWrite(d,LOW);
          digitalWrite(e,LOW);
          digitalWrite(f,LOW);
          digitalWrite(g,LOW);
          digitalWrite(h,LOW);
          //mostrar eleccion
          int yo = 0;
          while(yo == 0){ 
            int selec = analogRead(A0);
            if(selec > 330 && selec < 350){
             vueltas(96,104,200);
             yo = 1;
             delay(50);
           }
           if(selec > 244 && selec < 264){
            vueltas(104,112,200);
            yo = 2; 
            delay(50);
           }
           if(selec > 190 && selec < 210){
            vueltas(88,96,200);
            yo = 3;
            delay(50);
            }
          }
          //mostrar pc
          int pc = 0;        
          while(pc == 0){ 
            int randomPc = random(1,4);
            if(randomPc == 1){
             vueltas(96,104,200);
             pc = 1;
             delay(50);
           }
           if(randomPc == 2){
            vueltas(104,112,200);
            pc = 2; 
            delay(50);
           }
           if(randomPc == 3){
            vueltas(88,96,200);
            pc = 3;
            delay(50);
            }
          }
          //quien gana
          if((yo == 1 && pc == 3)||(yo == 2 && pc == 1)||(yo == 3 && pc == 2)){
            vueltas(120,128,200);
             total= total + 1;
            }
          if((pc == 1 && yo == 3)||(pc == 2 && yo == 1)||(pc == 3 && yo == 2)){
            vueltas(112,120,200);
            total= total - 1;
            }
          if(yo==pc){
            vueltas(8,16,200);
            }
           fin++;//manejo cantidad de vueltas
           }
        //muestra el resultado
        if(total >= 0){
          vueltas(120,128,300);
            }
        if(total < 0){
          vueltas(112,120,300);
           }                     
       cambio = comprobar(4);
        }
       }
      }        
   }
    for(int f =0; f<=5 ; f++){
      vueltas(128,136,200);
      vueltas(136,144,200);
     }
}

/*Funcion que esta a la espera de pulsar el boton*/
void empezar(){
  int start = 0;
  while(start == 0){
    caras(0,8);
    int dato = analogRead(A0);
    if(dato > 500 && dato < 520){
      start = 1;
      dato = 0;
      delay(50);
    }   
   }
  }
  
/*Funcion imagenes*/
void caras(int inicio_vector, int fin_vector){
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,LOW);
  for(int i=inicio_vector;i<fin_vector;i++){
    digitalWrite(a0,va0[i-inicio_vector]);
    digitalWrite(a1,va1[i-inicio_vector]);
    digitalWrite(a2,va2[i-inicio_vector]);
    digitalWrite(a,va[i]);
    digitalWrite(b,vb[i]);
    digitalWrite(c,vc[i]);
    digitalWrite(d,vd[i]);
    digitalWrite(e,ve[i]);
    digitalWrite(f,vf[i]);
    digitalWrite(g,vg[i]);
    digitalWrite(h,vh[i]);
    delay(1);
    }
  }
  
/*Funcion para comprobar el estado*/
int comprobar(int estado){
  int resultado;
  if(randomPin == estado){
    resultado = 20;
  }
  else{
    resultado =40;
  }
  if(vida < 0){
    resultado = 0;
  }
  return resultado;
}

/*Funcion de calculo de vida*/
int vidaCalculo(int valor){
  if(randomPin == valor){
    vida = vida + 1;
    return vida;
   }
   else{
    vida = vida - 1;
    return  vida;
   }
  }

/*Funcion para la velocidad de las imagenes*/
void vueltas(int inicio, int ultimo,int vuelta ){
  for(int i = 0; i <= vuelta ; i++){
    caras(inicio,ultimo);
   } 
  }



  
