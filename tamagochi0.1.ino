/*Programa para probar el cambio de imagen*/

//Definimos salidas de deco
const int a0 = 10;
const int a1 = 11;
const int a2 = 12;
//Definimos salidas
const int a = 13;
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
    empezar();
    vida =10; //inicializamos la vida
    cambio=20;
  while(vida > 0){
    while(cambio == 20){
      //CARA FELIZ     
      for(int i = 0; i <= 8000 ; i++){
        caras(8,16);
        }
      cambio = 40;
      randomPin = random(1,5);
      vida = vida - 1;
      //CARA TRISTE
      while(cambio==40){
       caras(16,24);
       int dato = analogRead(A0);       
       if(dato > 500 && dato < 520 ){
        cambio = 1;
        delay(50);
        if(randomPin == 1){
          vida = vida + 1;
          }
         else{
           vida = vida - 1;
          }
       }
       if(dato > 330 && dato < 350){
        cambio = 2;
        delay(50);
        if(randomPin == 2){
          vida = vida + 1;
          }
         else{
           vida = vida - 1;
          }
       }
       if(dato > 244 && dato < 264){
        cambio = 3;
        delay(50);
        if(randomPin == 3){
          vida = vida + 1;
          }
         else{
           vida = vida - 1;
          }
       }
       if(dato > 190 && dato < 210){
        cambio = 4;
        delay(50);
        if(randomPin == 4){
          vida = vida + 1;
          }
         else{
           vida = vida - 1;
          }
        }
       //Boton de estado de vida
       if(dato > 136 && dato < 170){
        delay(50);
            if(vida >= 9){
              for(int i = 0; i <= 500 ; i++){
                caras(144,152);
              }
            }
            if(vida <9 && vida >=7){
              for(int i = 0; i <= 500 ; i++){
                caras(152,160);
              }
            }
            if(vida <7 && vida >=4){
             for(int i = 0; i <= 500 ; i++){
                caras(160,168);
              }
            }
            if(vida <4 && vida >=0){
             for(int i = 0; i <= 500 ; i++){
                caras(168,176);
              }
            }
        }
       //imagen de comer
       while(cambio==1){
        for(int f =0; f<=100 ; f++){
          for(int i = 0; i <= 50 ; i++){
           caras(48,56);
           } 
           for(int t = 0; t <= 50 ; t++){
             caras(56,64);     
           }
        }
        if(randomPin == 1){
          cambio=20;
          }
         else{
           cambio=40;
          }
        if(vida < 0){
          cambio = 0;
          }                      
        }
       //imagen de dormir
       while(cambio==2){
        for(int f =0; f<=50 ; f++){
          for(int i = 0; i <= 50 ; i++){
           caras(24,32);
           } 
           for(int t = 0; t <= 50 ; t++){
             caras(32,40);     
             t++;
           }
           for(int e = 0; e <= 50 ; e++){
               caras(40,48);
             }
        }                      
        if(randomPin == 2){
          cambio=20;
          }
         else{
           cambio=40;
          }
        if(vida < 0){
          cambio = 0;
          }
        }
       //imagen de bañar
       while(cambio==3){
        for(int f =0; f<=50 ; f++){
          for(int i = 0; i <= 50 ; i++){
           caras(64,72);
           } 
           for(int t = 0; t <= 50 ; t++){
             caras(72,80);     
           }
           for(int e = 0; e <= 50 ; e++){
               caras(80,88);
             }
        }                      
        if(randomPin == 3){
          cambio=20;
          }
         else{
           cambio=40;
          }
        if(vida < 0){
          cambio = 0;
          }
        }
        //imagen de jugar
       while(cambio==4){
        int total = 0;
        int fin = 0;
        while(fin<3){
          for(int f =0; f<=5 ; f++){
            for(int i = 0; i <= 50 ; i++){
             caras(96,104);
             } 
             for(int t = 0; t <= 50 ; t++){
               caras(104,112);     
             }
             for(int e = 0; e <= 50 ; e++){
                 caras(88,96);
               }
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
             for(int i = 0; i <= 200 ; i++){
               caras(96,104);           
               }
             yo = 1;
             delay(50);
           }
           if(selec > 244 && selec < 264){
            for(int i = 0; i <= 200 ; i++){
                 caras(104,112);                
               }
            yo = 2; 
            delay(50);
           }
           if(selec > 190 && selec < 210){
            for(int i = 0; i <= 200 ; i++){
                   caras(88,96);
                 }
            yo = 3;
            delay(50);
            }
          }
          //mostrar pc
          int pc = 0;        
          while(pc == 0){ 
            int randomPc = random(1,4);
            if(randomPc ==1){
             for(int i = 0; i <= 50 ; i++){
               caras(96,104);           
               }
             pc = 1;
             delay(50);
           }
           if(randomPc ==2){
            for(int i = 0; i <= 200 ; i++){
                 caras(104,112);                
               }
            pc = 2; 
            delay(50);
           }
           if(randomPc ==3){
            for(int i = 0; i <= 200 ; i++){
                   caras(88,96);
                 }
            pc = 3;
            delay(50);
            }
          }
          //quien gana
          if(yo==1 && pc == 3){
            for(int i = 0; i <= 200 ; i++){
              caras(120,128);
              total= total + 1;
             }
            }
          if(yo==2 && pc == 1){
            for(int i = 0; i <= 200 ; i++){
              caras(120,128);
              total= total + 1;
             }
            }
          if(yo == 3 && pc == 2){
            for(int i = 0; i <= 200 ; i++){
              caras(120,128);
              total= total + 1;
             }
            }
          if(pc == 1 && yo == 3){
            for(int i = 0; i <= 200 ; i++){
              caras(112,120);
              total= total - 1;
             }
            }
           if(pc == 2 && yo == 1){
            for(int i = 0; i <= 200 ; i++){
              caras(112,120);
              total= total - 1;
             }
            }
           if(pc == 3 && yo == 2){
            for(int i = 0; i <= 200 ; i++){
              caras(112,120);
              total= total - 1;
             }
            }
          if(yo==pc){
            for(int i = 0; i <= 200 ; i++){
              caras(8,16);
             }
            }
            fin++;
           }
        //muestra el resultado
        if(total >= 0){
            for(int i = 0; i <= 300 ; i++){
              caras(120,128);
             }
            }
        if(total < 0){
            for(int i = 0; i <= 300 ; i++){
              caras(112,120);
             }
           }                     
        if(randomPin == 4){
          cambio=20;
          }
         else{
           cambio=40;
          }
        if(vida < 0){
          cambio = 0;
          }
        }
       }
      }        
   }
    for(int f =0; f<=5 ; f++){
        for(int i = 0; i <= 200 ; i++){
             caras(128,136);
             } 
         for(int t = 0; t <= 200 ; t++){
               caras(136,144);     
             }
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
