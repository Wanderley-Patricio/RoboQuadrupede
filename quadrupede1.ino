#include <Servo.h>

Servo servo_13;
Servo servo_12;
Servo servo_11;
Servo servo_10;
Servo servo_9;
Servo servo_8;
Servo servo_7;
Servo servo_6;
//======================
int max = 170;
int min = 15;
int j =0;

void setup()
{
  servo_13.attach(13);
  servo_12.attach(12);
  servo_11.attach(11);
  servo_10.attach(10);
  servo_9.attach(9);
  servo_8.attach(8);
  servo_7.attach(7);
  servo_6.attach(6);
}

void loop()
{
 // ombros_puma();
 //  centralizar_servos();
 //  delay(1000);
 while ( j==0){
   pontas_para_cima();
   delay(100);
   ombros_x();
   delay(1000);
 //  passo();
   delay(5000);
   j=1;
 }
  passo();

 
 
 //   pontas_para_meio(); 
 //    delay(5000);  
 //    pontas_para_baixo(); 
      
   
  // (LFP,  LBP, RBP,  RFP, LFL, LBL, RBL, RFL, S1, S2, S3, S4)
  //srv(15, 15 , 170, 170, 15,  15,  55,  15,  1,  3,  1,  1);
   // (ombroA,  ombroB, ombroC,  ombroD, pataA, pataB, pataC, pataD, S1, S2, S3, S4)
 // srv(a90, b90 , c120, d60, 170,  160,  25,  170,  1,  3,  1,  1);
//  srv( a180, b30, c150,  d30, 6,  124,  25,  170,  3,  1,  1,  1);
 // srv( a90, b60, c90,  d30, 42,  33,  33,  42,  3,  1,  1,  1);
 // srv(a120, b60, c180, d0,  42,  33,  6,   42,  1,  1,  3,  1);
 // srv(a120, b60, c180, d0,  42,  33,  33,  42,  1,  1,  3,  1);
 // srv(a150, b90, c150, d90, 42,  33,  33,  6,   1,  1,  1,  3);
 // srv(a150, b90, c150, d90, 42,  33,  33,  42,  1,  1,  1,  3);
 // srv(a180, b0,  c120, d60, 42,  6,   33,  42,  1,  3,  1,  1);
            /*servo_12.write(15);
            servo_10.write(15);
            servo_8.write(170);
            servo_6.write(170);
            teste_patas();
            delay(5000);
            servo_12.write(170);
            servo_10.write(170);
            servo_8.write(15);
            servo_6.write(15);
            teste_patas();
            delay(5000);*/
            
   /*ombros_puma();
   delay(5000);
   meio_puma();
   delay(5000);*/
   //moveombros(170);          

//  pontas_para_cima();
  /*
  teste_patas();
  teste_ombros();
  pontas_para_cima();
  pontas_para_baixo();
  delay(5000);
  ombros_puma();
  delay(1000);
  meio_puma();
  delay(1000);
  ombros_puma();
  pontas_para_meio();
  pata(13);
  pata(9);
  delay(5000);
  */
//  movepata (13,90);
 //movepatas(170);
// moveombros(170);
 // ombro(6);
//  pontas_para_cima();

 /* 
  pontas_para_baixo();
  delay(1000);
  pontas_para_cima();
  delay(1000);

  ombros_puma(); 
  delay(5000); 

  pontas_para_meio();
  delay(5000);

  pontas_para_cima();
  delay(5000);

  pontas_para_baixo();
  delay(5000);

  meio_puma();
  delay(5000);
  */

/*  simultaneamente nunca pode acontecer
  servo_12.write(15);
  servo_10.write(180);
  servo_8.write(12);
  servo_6.write(180);
  */
}

void pontas_para_cima(){
 servo_13.write(15);
 servo_11.write(170);
 servo_9.write(15);
 servo_7.write(15);  
}

void pontas_para_baixo(){
  servo_13.write(170);
  servo_11.write(15);
  servo_9.write(170);
  servo_7.write(170);
}

void meio_puma(){
  servo_8.write(15);
  servo_10.write(170);
  servo_8.write(170);
  servo_10.write(15);
  servo_6.write(170);
  servo_12.write(15); 
}

void pontas_para_meio(){
  servo_13.write(90);
  servo_11.write(90);
  servo_9.write(90);
  servo_7.write(90);
}

void pata_13(){
  for(int i=0;i<5;i++){
  servo_13.write(170);
  delay(200);
  servo_13.write(15);
  delay(200);} 
}

void teste_patas(){
   pata(13);
   pata(11);
   pata(9);
   pata(7);
}

void teste_ombros(){
  ombro(12);
  ombro(10);
  ombro (8);
  ombro (6);
  
}

 void pata (int x){
  if(x == 13){
  for(int i=0;i<3;i++){
  servo_13.write(170);
  delay(500);
  servo_13.write(15);
  delay(500);} 
  }else
      if(x == 11){
      for(int i=0;i<3;i++){
      servo_11.write(9);
      delay(500);
      servo_11.write(170);
      delay(500);}   
      }else
            if(x == 9){
            for(int i=0;i<3;i++){
            servo_9.write(170);
            delay(500);
            servo_9.write(15);
            delay(500);}
            }else
                  if(x == 7){
                  for(int i=0;i<3;i++){
                  servo_7.write(170);
                  delay(500);
                  servo_7.write(15);
                  delay(500);}    
      
 }
 }
 //=====================================
  void ombro (int y){
  if(y == 12){
  for(int i=0;i<2;i++){
  servo_12.write(15);
  delay(1000);
  servo_12.write(170);
  delay(1000);} 
  }else
      if(y == 10){
      for(int i=0;i<2;i++){
      servo_10.write(170);
      delay(1000);
      servo_10.write(15);
      delay(1000);}   
      }else
            if(y == 8){
            for(int i=0;i<2;i++){
            servo_8.write(15);
            delay(1000);
            servo_8.write(170);
            delay(1000);}
            }else
                  if(y == 6){
                  for(int i=0;i<2;i++){
                  servo_6.write(170);
                  delay(1000);
                  servo_6.write(15);
                  delay(1000);}    
      
 }
 }

 void movepata (int x,int ang){
    // colocar ifs
    for(int i=15;i<ang;i++){
            servo_13.write(i);
            delay(100);}
 }


 void movepatas (int ang){
    for(int i=15;i<ang;i++){
            servo_13.write(i);
            servo_11.write(180-i);
            servo_9.write(i);
            servo_7.write(i);
            delay(100);}
         for(int i=ang;i> 15;i--){
            servo_13.write(i);
            servo_11.write(180-i);
            servo_9.write(i);
            servo_7.write(i);
            delay(100);}    
 }

 void moveombros (int ang){
  if(ang<15){ang=15;}
  if(ang>170){ang=170;}
    for(int i=15;i<ang;i++){
            servo_12.write(185-i);
            servo_10.write(185-i);
            servo_8.write(i);
            servo_6.write(i);
            delay(20);}
         for(int i=ang;i> 15;i--){
            servo_12.write(185-i);
            servo_10.write(185-i);
            servo_8.write(i);
            servo_6.write(i);
            delay(20);}    
 }

 void centralizar_servos(){
//Patas
     servo_13.write((max/2)+15);
     servo_11.write(max/2);
     servo_9.write(max/2);
     servo_7.write((max/2)+4);
//Ombros
     servo_12.write((max/2)-5);
     servo_10.write(max/2);
     servo_8.write(max/2);
     servo_6.write((max/2)+10);    
 }

 void ombros_puma(){
     servo_12.write(max);
     servo_10.write(min-3);
     servo_8.write(max);
     servo_6.write(min);
}

void ombros_x(){
  for(int i=0;i<170;i++){
     servo_12.write(120);
     servo_10.write(50);
     servo_8.write(120);
     servo_6.write(50);
     delay(10);
  }
}

void passo(){
 //Pata A
  for(int i=15;i<50;i++){
            servo_7.write(i);//Pata
            delay(50);}
  for(int i=50;i>15;i--){
            servo_6.write(i);//Ombro
            delay(50);}          
  delay(1000);
  for(int i=50;i>15;i--){
            servo_7.write(i);//Pata
            delay(50);}
  for(int i=50;i<170;i++){
            servo_6.write(i);//Ombro
            delay(10);}
//==========================================================
//Pata B
  for(int i=15;i<50;i++){
            servo_9.write(i);//Pata
            delay(50);}
  for(int i=120;i>60;i--){
            servo_8.write(i);//Ombro
            delay(50);}          
  delay(1000);
 for(int i=50;i>15;i--){
            servo_9.write(i);//Pata
            delay(50);}
  for(int i=60;i<120;i++){
            servo_8.write(i);//Ombro
            delay(10);}
//==========================================================  
  //Pata A
  for(int i=15;i<50;i++){
            servo_7.write(i);//Pata
            delay(50);}
  for(int i=170;i>50;i--){
            servo_6.write(i);//Ombro
            delay(50);}          
  delay(1000);
  for(int i=50;i>15;i--){
            servo_7.write(i);//Pata
            delay(50);}
//==========================================================            
//Pata C
  for(int i=170;i>135;i--){
            servo_11.write(i);//Pata
            delay(50);}
  for(int i=50;i<110;i++){
            servo_10.write(i);//Ombro
            delay(50);}          
  delay(1000);
 for(int i=135;i<170;i++){
            servo_11.write(i);//Pata
            delay(50);}
  for(int i=110;i>50;i--){
            servo_10.write(i);//Ombro
            delay(10);} 
//==========================================================            
//Pata D  
for(int i=15;i<50;i++){
            servo_13.write(i);//Pata
            delay(50);}
  for(int i=120;i<150;i++){
            servo_12.write(i);//Ombro
            delay(50);}          
  delay(1000);
 for(int i=50;i>15;i--){
            servo_13.write(i);//Pata
            delay(50);}
  for(int i=150;i>30;i--){
            servo_12.write(i);//Ombro
            delay(10);}
//==========================================================  
/*//Pata C
  for(int i=170;i>135;i--){
            servo_11.write(i);//Pata
            delay(50);}
  for(int i=110;i>50;i--){
            servo_10.write(i);//Ombro
            delay(50);}          
  delay(1000);
 for(int i=50;i>15;i--){
            servo_11.write(185-i);//Pata
            delay(50);}*/
            
}
