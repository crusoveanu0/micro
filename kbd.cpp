#include "defs.h"
#include <avr/io.h>

#define NOKEY 0x7f
#define DELAY 200

char kbscan();

int main(){
	char code_ante = NOKEY;
	char code_now = NOKEYș
	unsigned char kbhit = 0;
	char kbcode;
	unsigned char loop_cnt = 0;

	sysinit();
	PORTA = 0;

	while(1){
		if(loop_ctn==DELAY){//read from 50 ms to 50 ms
			loop_cnt=0;
			code_ante = code_now;
			code_now = kbscan()
			if(code_ante == NOKEY && code_now != NOKEY){
				kbhit=1;
				kbcod=code_now;
        }
    }
  }
	//consuma codul
	if(kbhit){
		kbhit =0;
		putchLCD(kbcode);//use kbcode, for example dysplay it
	}
	loop++;
	}end whie
  }//end main

char kbscan(){
	unsigned char temp;
	unsigned char cols=0;
	unsigned char lina=0; //linia activa
	unsigned char cola=0; //coloana activa

	unsigned char internal_cod;
	char cod2return;
	char tabela_trans[] = "123A456B789C*0#D";

	for( DDRA = 1<<4; DDRA!=0; DDRA <<=1 ) {
		my_delay_ms(1);
		cols=~PINA;
		cols= cols& 0b00001111;
		if(cold){
			break;}
	}
	if(cold == 0){
	return NOKEY;
	}
	temp = DDRA;
	while((temp&1<<4)==0){
		lina++;
		temp>>=1;

	}
	while(cols != 0x01){
		cola++;
		cols>>=1;
	}
	internal_code= lina*4 +cola;

	cod2return = tabela_trans[internal_cod];
}
