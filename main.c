#include "main.h"
#include <lcd.c>
int dizi[16];
int dizi1[16];
int i=0;

int k=0;
void sayigir(){


  output_high(PIN_B0);
  
    if( input(PIN_B4)==1)
  {dizi[i]=7;
 lcd_putc("7");
   
    i++;
    delay_ms(30);
    if(i>=5){
lcd_putc("\f  on tusuna bas");
   if(k==1){
    dizi1[i]=7;
lcd_putc("\f  = tusuna bas");}
    }
  }
    if( input(PIN_B5)==1)
    {
   
     dizi[i]=8; 

     lcd_putc("8");
      i++;
      delay_ms(30);
      if(i>=5){
lcd_putc("\f  on tusuna bas");
     if(k==1){
   dizi1[i]=8;
   lcd_putc("\f  = tusuna bas");}}
    }
   if( input(PIN_B6)==1)
    { 
    
      dizi[i]=9; 
        lcd_putc("9");
      i++;
      delay_ms(30);
      if(i>=5){
lcd_putc("\f  on tusuna bas");
      if(k==1){
       dizi1[i]=9;
       lcd_putc("\f  = tusuna bas");}
      }}
    output_low(PIN_B0);
    delay_ms(2);


    
       output_high(PIN_B1);
    if( input(PIN_B4)==1)
    {
    
     dizi[i]=4;
   
    lcd_putc("4");
        i++;
        delay_ms(30);
        if(i>=5){
lcd_putc("\f  on tusuna bas");
     if(k==1){
      dizi1[i]=4;
      lcd_putc("\f  = tusuna bas");}
        }}
    if( input(PIN_B5)==1)
    {
   
     dizi[i]=5;
       lcd_putc("5");
      i++;
      delay_ms(30);
      if(i>=5){
lcd_putc("\f  on tusuna bas");
     if(k==1){
     dizi1[i]=5;
     lcd_putc("\f  = tusuna bas");}}}
     
 if( input(PIN_B6)==1)
    {
   
     dizi[i]=6;
       lcd_putc("6");
      i++;
      delay_ms(30);
     if(i>=5){
lcd_putc("\f  on tusuna bas");
     if(k==1){
     dizi1[i]=6;
     lcd_putc("\f  = tusuna bas");}
     }}
    output_low(PIN_B1);
    delay_ms(2);
    
   
    

    output_high(PIN_B2);
    if( input(PIN_B4)==1)
     {
    
      dizi[i]=1;
       lcd_putc("1");
       i++;
       delay_ms(30);
       if(i>=5){
lcd_putc("\f  on tusuna bas");
     if(k==1){
      dizi1[i]=1;
      lcd_putc("\f  = tusuna bas");}
       }}
     if( input(PIN_B5)==1)
     { 
    
        dizi[i]=2;
        lcd_putc("2");
        i++;
        if(k==1){
        delay_ms(30);
        if(i>=5){
lcd_putc("\f  on tusuna bas");
         dizi1[i]=2;
         lcd_putc("\f  = tusuna bas");}
        }}
     if( input(PIN_B6)==1)
     { 
       
        dizi[i]=3;
           lcd_putc("3");
         i++;
         delay_ms(30);
         if(i>=5){
lcd_putc("\f  on tusuna bas");
        if(k==1){
         dizi1[i]=3;
         lcd_putc("\f  = tusuna bas");}
         }}
     output_low(PIN_B2);
     delay_ms(2);   
   
   
   
   output_high(PIN_B3);
    if( input(PIN_B5)==1)
  { 
    
     dizi[i]=0;
       lcd_putc("0");
      i++;
      delay_ms(30);
      if(i>=5){
lcd_putc("\f  on tusuna bas");
     if(k==1){
       dizi1[i]=0;
       lcd_putc("\f  = tusuna bas");}
      }}
      
  
   output_low(PIN_B3);
    delay_ms(2);
 
 
  }

int sayac=0;

    
void fonksiyon(){
 output_high(PIN_B3);
    if( input(PIN_B6)==1)
  { 
 
  i=0;
  delay_ms(20);
   lcd_putc("\f sifreyi giriniz");
     delay_ms(50);
k=1;
i=0;
int say=1;
   lcd_gotoxy(1,2);
   for(int i=0;i<4;i++){

    if(dizi[i]==dizi1[i])
    sayac++;}
while(True){
 sayigir();
 
    output_high(PIN_B3);
    if( input(PIN_B7)==1)
  {

   
    if(sayac==3)
   lcd_putc("\f sifre basarili"); 
   else{
   
   lcd_putc("\f sifre basarisiz");
    lcd_gotoxy(1,2);
    delay_ms(30);
    for (int i=0;i<4;i++)
    printf(lcd_putc,"%d",dizi1[i]); 
 While(True)
    sayigir();
    
    say++;}
    if(say==10)
    lcd_putc("\f sifre giremezsiniz");
   }}
   output_low(PIN_B3);
   
}
  }

  
  void fonk(){
   output_high(PIN_B3);
    if( input(PIN_B4)==1)
  {
    lcd_putc("\f SIFRENIZ:");
   lcd_gotoxy(0,2);
   for(int m=0;m<5;m++){printf(lcd_putc,"%d ",dizi[m]);}
   
    delay_ms(50);
 
 lcd_putc("\f = tusuna bas ");
 }
   output_low(PIN_B3);
  
  }
void main()
{
 
 set_tris_b(0xff); 
 set_tris_d(0x00); 
  set_tris_c(0xff); 
 lcd_init();
 
   lcd_putc("sifreyi belirle");
   lcd_gotoxy(0,2);
   




   
   while(True){

 sayigir();
   fonk();

  fonksiyon();
   }}
   
 






