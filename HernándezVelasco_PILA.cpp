//HPC que permita simular el funcionamiento de una estructura PILA de un vector de 8 elementos enteros, toma en cuenta la siguiente descripción:1. Mostrar un menú de opciones DINÁMICO (recordar que es utilizando las flechas arriba y abajo para seleccionar y enter para ejecutar la opción) con las operaciones que se le pueden realizar a la PILA: 1. Insertar Elemento (PUSH), 2. Retirar Elemento (POP), 3. SALIR.
//Lehí Alejandro Hernández Velasco
// 27 de abril del 2020

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int x, int y){
	HANDLE a;
	a=GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD b;
	
	b.X=x;
	b.Y=y;
	
	SetConsoleCursorPosition
	(a,b);
}
void Menu(){
	int co;
		
		gotoxy(1,0);
		printf("%c",201);
		gotoxy(1,18);
		printf("%c",200);
		gotoxy(49,18);
		printf("%c",188);
		gotoxy(49,0);
		printf("%c",187);
			
			gotoxy(9,19);
			printf("Leh%c Alejandro Hern%cndez Velasco\n",161,160);
			gotoxy(21,20);
			printf("4%cD",167);
			gotoxy(16,21);
			printf("Programaci%cn",162);
			
			gotoxy(50,7);
			printf("		1");		
			gotoxy(50,8);
			printf("	       101");
			gotoxy(50,9);
			printf("	      10101");
			gotoxy(50,10);
			printf("	     1010101");
			gotoxy(50,11);
			printf("	    101010101");
			gotoxy(50,12);
			printf("	   101	   101");
			gotoxy(50,13);
			printf("	  10101	  10101");
			gotoxy(50,14);
			printf("	 1010101 1010101");
			gotoxy(50,15);
			printf("	10101010101010101");
			
		for(co=1;co<=17;co++){
			gotoxy(1,co);
			printf("%c",186);
		}
		for(co=1;co<=17;co++){
			gotoxy(49,co);
			printf("%c",186);
		}
		for(co=2;co<=48;co++){
			gotoxy(co,0);
			printf("%c",205);
		}
		for(co=2;co<=48;co++){
			gotoxy(co,18);
			printf("%c",205);
		}
}
void pila(){
	int co;
	
	for(co=30;co<=40;co++){
		gotoxy(co,2);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,4);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,6);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,8);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,10);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,12);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,14);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,16);
		printf("%c",196);
	}
	for(co=30;co<=40;co++){
		gotoxy(co,18);
		printf("%c",196);
	}
	gotoxy(29,2);
	printf("%c",218);
	gotoxy(29,18);
	printf("%c",192);
	gotoxy(41,2);
	printf("%c",191);
	gotoxy(41,18);
	printf("%c",217);	
	
	for(co=3;co<=17;co++){
		gotoxy(29,co);
		printf("%c",179);
	}
	for(co=3;co<=17;co++){
		gotoxy(41,co);
		printf("%c",179);
	}
}
int main (){
	
	int a[8]={0, 0, 0, 0, 0, 0, 0, 0}, p, y, s;
	char z;
	
	p=0;
	y=5;
	s=0;
	
	
	
	do{
		system("color 0A");
		Menu();
		pila();
		
		if(a[0]==0){
			gotoxy(30,17);
			printf(" ");
		}
		else{
			gotoxy(30,17);
			printf("%d",a[0]);
		}
		if(a[1]==0){
			gotoxy(30,15);
			printf(" ");
		}
		else{
			gotoxy(30,15);
			printf("%d",a[1]);
		}
		if(a[2]==0){
			gotoxy(30,13);
			printf(" ");
		}
		else{
			gotoxy(30,13);
			printf("%d",a[2]);
		}
		if(a[3]==0){
			gotoxy(30,11);
			printf(" ");
		}
		else{
			gotoxy(30,11);
			printf("%d",a[3]);
		}		
		if(a[4]==0){
			gotoxy(30,9);
			printf(" ");
		}
		else{
			gotoxy(30,9);
			printf("%d",a[4]);
		}		
		if(a[5]==0){
			gotoxy(30,7);
			printf(" ");
		}
		else{
			gotoxy(30,7);
			printf("%d",a[5]);
		}		
		if(a[6]==0){
			gotoxy(30,5);
			printf(" ");
		}
		else{
			gotoxy(30,5);
			printf("%d",a[6]);
		}		
		if(a[7]==0){
			gotoxy(30,3);
			printf(" ");
		}
		else{
			gotoxy(30,3);
			printf("%d",a[7]);
		}
		gotoxy(20,2);
		printf("PILAS");
		gotoxy(15,5);
		printf("1.Insertar");
		gotoxy(15,6);
		printf("2.Borrar");
		gotoxy(15,7);
		printf("3.Salir");
		gotoxy(12,y);
		printf("-->");
		
		z=getch();
			if(z==-32)
				z=getch();		
		
		switch(z){
			
			case 72:{
				
				if(y<=5){
					y=7;
				}
				else{
					y--;
				}
				break;
			}
			
			case 80:{
				if(y==7){
					y=5;
				}
				else{
					y++;
				}
				break;
			}
			
			case 13:
				switch (y){
					
					case 5:{
						
						if(p==8){
							gotoxy(15,15);
							printf("PILA LLENA");
							getch();
						}
						else{
							gotoxy(4,11);
							printf("Introduce un Elemento: ");
							scanf("%d",&a[p]);
							p++;
						}
						break;
					}
					case 6:{
						
						if(p==0&&a[0]==0){
							gotoxy(15,15);
							printf("PILA VACIA");
							getch();
						}
						else{
							p--;
							
							gotoxy(4,11);
							printf("Elemento Removido");
							
							a[p]=0;
						}
						break;
					}
					case 7:{
						s=1;
						break;
					}
					break;		
				}
		}
	system("cls");
	}while(s!=1);
	system("color 0A");
	
	gotoxy(15,15);
	printf("Programa Finalizado");
	gotoxy(1,20);	
}
