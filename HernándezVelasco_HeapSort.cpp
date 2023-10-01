//HPC que realice el ordenamiento de un vector de 15 elementos aleatorios (entre el 0 y el 19) enteros, a través del Método de Ordenamiento HEAP SORT
//Lehí Alejandro Hernández Velasco
//30 de Mayo del 2020

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>

using namespace std;
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
	int co1,co2,co3,co4,co5;
		
	gotoxy(1,0);
	printf("%c",201);
	gotoxy(49,0);
	printf("%c",187);
			
	gotoxy(51,19);
	printf("Leh%cAlejandroHern%cndezVelasco\n",161,160);
	gotoxy(65,20);
	printf("4%cD",167);
	gotoxy(60,21);
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
			
	for(co1=1;co1<=22;co1++){
		gotoxy(1,co1);
		printf("%c",186);
	}
	for(co2=1;co2<=22;co2++){
		gotoxy(49,co2);
		printf("%c",186);
	}
	for(co3=2;co3<=48;co3++){
		gotoxy(co3,0);
		printf("%c",205);
	}
	for(co4=2;co4<=48;co4++){
		gotoxy(co4,22);
		printf("%c",205);
	}
	gotoxy(49,22);
	printf("%c",188);
	gotoxy(1,22);
	printf("%c",200);
	
	gotoxy(52,2);
	printf("Ordenamineto");
	gotoxy(52,3);
	printf("Por Monticulo:");
	
}
void  max_heapify(int a[], int i, int heapsize){
    int tmp, largest;
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;
    if ((l <= heapsize) && (a[l] > a[i]))
         largest = l;
    else
         largest = i;
    if ((r <= heapsize) && (a[r] > a[largest]))
         largest = r ;
    if (largest != i) {
         tmp = a[i];
         a[i] = a[largest];
         a[largest] = tmp;
         max_heapify(a, largest, heapsize);
    }
 
}
int main(){
	srand(time(NULL));
	bool intentar = true;
	system("color 0A");
	Menu();
	
	int co, a[15], x, y, i, r, temp,j , tmp, heapsize;
	
	for(co=0;co<=14;co++){
		a[co]=rand()%20; 
	}
	
	for(x=3;x<=45;x=x+3){
		for(y=0;y<a[(x/3)-1];y++){
			gotoxy(x,21-y);
			printf("%c",219);
			gotoxy(x,1);
			printf("%d",a[(x/3)-1]);
		}
	}
	
	for(x=3;x<=45;x=x+3){
		if(a[(x/3)-1]==0){
			gotoxy(x,1);
			printf("0");
		}
	}
	gotoxy(52,5);
	printf("Presiona una");
	gotoxy(52,6);
	printf("Tecla para acomodar:");
	getch();
	
	heapsize=15-1;
	
	for (i=heapsize; i>0; i--){
         j=rand()%(i+1);
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
    }
    
    for (i=heapsize/2; i>=0; i--){
         max_heapify(a,i,heapsize);
    }
    
    for (i = heapsize; i > 0; i--) {
        tmp = a[i];
        a[i] = a[0];
        a[0] = tmp;
        heapsize--;
        max_heapify(a,0,heapsize);
        
        system("cls");
        Menu();
        for(x=3;x<=45;x=x+3){
			for(y=0;y<a[(x/3)-1];y++){
				gotoxy(x,21-y);
				printf("%c",219);
				gotoxy(x,1);
				printf("%d",a[(x/3)-1]);
			}
		}
			for(x=3;x<=45;x=x+3){
			if(a[(x/3)-1]==0){
				gotoxy(x,1);
				printf("0");
			}
		}
	
		gotoxy(52,2);
		printf("Ordenamineto");
		gotoxy(52,3);
		printf("Por Monticulo");
		
		Sleep(700);
	}
	
	gotoxy(52,5);
	printf("Ordenamiento");
	gotoxy(52,6);
	printf("Terminado");
	
	gotoxy(1,22);
}
