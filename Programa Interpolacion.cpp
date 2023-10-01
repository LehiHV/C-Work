//Programa de Interpolacion Lineal, Cuadratica, de Lagrange
//Lehí Alejandro Hernández Velasco
//Javier Alejandro Trujillo Rivera
//22 de Marzo del 2022

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>


//NO TOCAR
int y=9,p=7;
bool r=true;
float h;

//El mejor codigo del mundo hace que las cosas se vean bonitas
void gotoxy(int x, int y){
	HANDLE a;
	a=GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD b;
	
	b.X=x;
	b.Y=y;
	
	SetConsoleCursorPosition
	(a,b);
}
//Literalmente un codigo que reutilice de prepa, es tan util como la FEC
void Menu(){
	int i;
		
	gotoxy(1,0);
	printf("%c",201);
	gotoxy(90,0);
	printf("%c",187);
			
	gotoxy(91,19);
	printf("Leh%cAlejandroHern%cndezVelasco\n",161,160);
	gotoxy(91,20);
	printf("JavierAlejandroTrujilloRivera\n");
	gotoxy(103,21);
	printf("2%cE",167);
	gotoxy(96,22);
	printf("Metodos Numericos");
		
	gotoxy(90,7);
	printf("		1");		
	gotoxy(90,8);
	printf("	       101");
	gotoxy(90,9);
	printf("	      10101");
	gotoxy(90,10);
	printf("	     1010101");
	gotoxy(90,11);
	printf("	    101010101");
	gotoxy(90,12);
	printf("	   101	   101");
	gotoxy(90,13);
	printf("	  10101	  10101");
	gotoxy(90,14);
	printf("	 1010101 1010101");
	gotoxy(90,15);
	printf("	10101010101010101");
			
	for(i=1;i<=22;i++){
		gotoxy(1,i);
		printf("%c",186);
		gotoxy(90,i);
		printf("%c",186);
	}
	for(i=2;i<=89;i++){
		gotoxy(i,0);
		printf("%c",205);
		gotoxy(i,22);
		printf("%c",205);
	}
	gotoxy(90,22);
	printf("%c",188);
	gotoxy(1,22);
	printf("%c",200);
	
}

//Querido programador o plagiador de este codigo lamento informarte
//Que cuando realize esto realmente solo pensaba con mi cerebro de chango
//Solo dios y yo en ese momento sabiamo como funcionaba, ahora solo dios
//No le muevas a la mamada y todo estara bien, si funciona no lo repares
void flecha(){
	int x=32,f;
	char l;
	
	gotoxy(40,5);
	printf("Interpolacion");
	
	
	gotoxy(x,y);
	printf("-->");
	gotoxy(35,9);
	printf("Interpolacion Lineal");
	gotoxy(35,11);
	printf("Interpolacion Cuadratica");
	gotoxy(35,13);
	printf("Interpolacion de Lagrange");
	gotoxy(35,9);
	
	
	l=getch();
	f=l;
	
	
	//No me preguntes como hice esto solo se me salio del cerebro, no lo entiendo
	//Un saludo para el barufis
	do{
		switch(f){
			case -32:
				l=getch();
				
				
				if(l==72){
					if(y==9){
						gotoxy(x,y);
						printf("   ");
						gotoxy(x,y=y+4);
						printf("-->");
					}else{
						gotoxy(x,y);
						printf("   ");
						gotoxy(x,y=y-2);
						printf("-->");
					}
				}
				if(l==80){
					if(y==9){
						gotoxy(x,y);
						printf("   ");
						gotoxy(x,y=y+2);
						printf("-->");
					}else{
						if(y==11){
							gotoxy(x,y);
							printf("   ");
							gotoxy(x,y=y+2);
							printf("-->");	
						}
						else{
							gotoxy(x,y);
							printf("   ");
							gotoxy(x,y=y-4);
							printf("-->");
						}
					}
				}
			break;
			default:
				return flecha();	
		}
	}while(l!=13);
}

void preguntar(){
	p=7;
	gotoxy(10,18);
	printf("%cQuiere repetir el proceso?",168);
	gotoxy(p,20);
	printf("-->");
	gotoxy(10,20);
	printf("Si");
	gotoxy(18,20);
	printf("No");
	int f;
	char l;
	l=getch();
	f=l;
	do{
		switch(f){
			case -32:
				l=getch();
				
				if(l==75){
				
					if(p==7){
						gotoxy(p,20);
						printf("   ");
						gotoxy(p=p+8,20);
						printf("-->");
					}
				
					else{
						gotoxy(p,20);
						printf("   ");
						gotoxy(p=p-8,20);
						printf("-->");
					}
				}
				
				if(l==77){
					if(p==7){
						gotoxy(p,20);
						printf("   ");
						gotoxy(p=p+8,20);
						printf("-->");
					}
					else{
						if(p==15){
							gotoxy(p,20);
							printf("   ");
							gotoxy(p=p-8,20);
							printf("-->");
						}
					}
				}
			break;
			default:
				return preguntar();	
		}
	}while(l!=13);
}

void valor(){
	
	printf("%cTiene el valor exacato?",168);
	
	gotoxy(p,20);
	printf("-->");
	gotoxy(10,20);
	printf("Si");
	gotoxy(18,20);
	printf("No");
	int f;
	char l;
	l=getch();
	f=l;
	do{
		switch(f){
			case -32:
				l=getch();
				
				if(l==75){
				
					if(p==7){
						gotoxy(p,20);
						printf("   ");
						gotoxy(p=p+8,20);
						printf("-->");
					}
				
					else{
						gotoxy(p,20);
						printf("   ");
						gotoxy(p=p-8,20);
						printf("-->");
					}
				}
				
				if(l==77){
					if(p==7){
						gotoxy(p,20);
						printf("   ");
						gotoxy(p=p+8,20);
						printf("-->");
					}
					else{
						if(p==15){
							gotoxy(p,20);
							printf("   ");
							gotoxy(p=p-8,20);
							printf("-->");
						}
					}
				}
			break;
			default:
			return valor();
		}
	}while(l!=13);
	
	
	if(p==7){
		gotoxy(7,20);
		printf("   ");
		printf("Escribelo: ");
		scanf("%f",&h);
	}else{
		h=0;
	}
}
int main(){
	
	//Literalmente solo es hacer que el programa paresca funcional
	system("color 0A");
	Menu();
	flecha();
	
	
	//Nunca uso comentarios solo esta vez porque parece ser gracioso
	//Estos son array's que nos sirven para no crear como 20 o + variables
	float a[6],b[11],c[5],d[8],t;
	int o;
	
	
	//Todo el codigo cae en una variable, si no funciona la variable tampoco esta cosa
	switch(y){
		
		//Interpolacion Lineal
		case 9:
			do{
			system("cls");
			Menu();
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			gotoxy(35, 3);
			printf("INTERPOLACION LINEAL");
			gotoxy(10,4);
			printf("Introdusca el valor de x: ");
			scanf("%f",&a[0]);
			
			gotoxy(10,6);
			printf("Introdusca el valor de x0: ");
			scanf("%f",&a[1]);
			
			gotoxy(10,8);
			printf("Introdusca el valor de x1: ");
			scanf("%f",&a[2]);
			
			gotoxy(10,10);
			printf("Introdusca el valor de %c(x0): ",159);
			scanf("%f",&a[3]);
			
			gotoxy(10,12);
			printf("Introdusca el valor de %c(x1): ",159);
			scanf("%f",&a[4]);
			valor();
			gotoxy(2,13);
			printf("                               ");
			gotoxy(12,20);
			printf("       ");
			gotoxy(21,20);
			printf("                         ");
			
			
			a[5]= a[3] + ( ( a[4] - a[3] ) / (a[2]-a[1]) ) * (a[0]-a[1]);
			
			if(a[0] > a[1] && a[0] > a[2]){
				gotoxy(50, 4);
				printf("Alerta esta es una Extrapolacion");
				gotoxy(10,14);
				printf("El Resultado de la extrapolacion de %f es : %f",a[0],a[5]);
			}
			else{
				gotoxy(10,14);
				printf("El Resultado de la interpolacion de %f es : %f",a[0],a[5]);
			}
			if(h!=0){
				t=((h-a[5])/h)*100;
				if(t<0){
					t=t*-1;
				}
				gotoxy(10,15);
				printf("El error porcentual es de %f %c",t,37);
			}
			
			
			
			preguntar();
			if(p==7)
				r=true;
			if(p==15){
				r=false;
				system("cls");
				return main();
			}
				
			}while(r!=false);
			
			break;
			
		//Interpolacion Cuadratica	
		case 11:
			
			do{
			system("cls");
			Menu();
			gotoxy(35, 3);
			printf("INTERPOLACION CUADRATICA");
			gotoxy(10,4);
			printf("Introdusca el valor de x: ");
			scanf("%f",&b[0]);
			
			gotoxy(10,6);
			printf("Introdusca el valor de x0: ");
			scanf("%f",&b[1]);
			
			gotoxy(10,8);
			printf("Introdusca el valor de x1: ");
			scanf("%f",&b[2]);
			
			gotoxy(10,10);
			printf("Introdusca el valor de x2: ");
			scanf("%f",&b[3]);
			
			gotoxy(10,12);
			printf("Introdusca el valor de %c(x0): ",159);
			scanf("%f",&b[4]);
			
			gotoxy(10,14);
			printf("Introdusca el valor de %c(x1): ",159);
			scanf("%f",&b[5]);
			
			gotoxy(10,16);
			printf("Introdusca el valor de %c(x2): ",159);
			scanf("%f",&b[6]);
			valor();
			
			gotoxy(2,17);
			printf("                               ");
			gotoxy(12,20);
			printf("       ");
			gotoxy(21,20);
			printf("                         ");
			
			b[7]= b[4];
			b[8]=(b[5]-b[4])/(b[2]-b[1]);
			b[9]=( ( (b[6]-b[5]) / (b[3]-b[2]) ) - b[8] ) / (b[3]-b[1]);
			b[10]= b[7] + b[8]*(b[0]-b[1]) + b[9] * (b[0]-b[1]) * (b[0]-b[2]);
			
			if(b[0] > b[1] && b[0] > b[2] && b[0] > b[3]){
				gotoxy(50, 4);
				printf("Alerta esta es una Extrapolacion");
				gotoxy(10,17);
				printf("El Resultado de la extrapolacion de x: %f es : %f",b[0],b[10]);
			}
			else{
				gotoxy(10,17);
				printf("El Resultado de la interpolacion x: %f es : %f",b[0],b[10]);
			}
			if(h!=0){
				t=((h-b[10])/h)*100;
				if(t<0){
					t=t*-1;
				}
				gotoxy(50,19);
				printf("El error porcentual es de %f %c",t,37);
			}
			
			
			
			preguntar();
			if(p==7)
				r=true;
			if(p==15){
				r=false;
				system("cls");
				return main();
			}
				
			}while(r!=false);
			
			
			break;
		//Interpolacion de Lagrange	
		case 13:
			
			system("cls");
			Menu();
			gotoxy(35, 3);
			printf("INTERPOLA	CION DE LAGRANGE");
			
			gotoxy(2,4);
			printf("Escriba en NUMERO el orden en que hara su interpolacion (1: Primer, 2: Segundo):");
			scanf("%d",&o);
			
			switch(o){
				case 1:
					
					do{
						system("cls");
						Menu();
						gotoxy(35, 3);
						printf("INTERPOLCION DE LAGRANGE (Primer Orden)");
						
						gotoxy(10,4);
						printf("Introdusca el valor de x: ");
						scanf("%f",&c[0]);
						
						gotoxy(10,6);
						printf("Introdusca el valor de x0: ");
						scanf("%f",&c[1]);
						
						gotoxy(10,8);
						printf("Introdusca el valor de x1: ");
						scanf("%f",&c[2]);
						
						gotoxy(10,10);
						printf("Introdusca el valor de %c(x0): ",159);
						scanf("%f",&c[3]);
						
						gotoxy(10,12);
						printf("Introdusca el valor de %c(x1): ",159);
						scanf("%f",&c[4]);
						
						valor();
						
						gotoxy(2,13);
						printf("                               ");
						gotoxy(12,20);
						printf("       ");
						gotoxy(21,20);
						printf(" ");
						
						c[5]=((c[0]-c[2])/(c[1]-c[2]) )*c[3] + ( (c[0]-c[1])/(c[2]-c[1]))*c[4];
						
						if(c[0] > c[1] && c[0] > c[2]){
						gotoxy(50, 4);
						printf("Alerta esta es una Extrapolacion");
						gotoxy(10,14);
						printf("El Resultado de  la extrapolacion de Lagrange 1%cOrden de  x: %f es : %f",167,c[0],c[5]);
						}
						else{
							gotoxy(10,14);
							printf("El Resultado de  la interpolacion de Lagrange 1%cOrden de  x: %f es : %f",167,c[0],c[5]);
						}
						
						if(h!=0){
						t=((h-c[5])/h)*100;
						if(t<0){
							t=t*-1;
						}
						gotoxy(10,13);
						printf("El error porcentual es de %f %c",t,37);
						}
						
						
						
						preguntar();
						if(p==7)
							r=true;
						if(p==15){
							r=false;
							system("cls");
							return main();
						}
					
				}while(r!=false);
					
				break;
				
				case 2:
						do{
							system("cls");
							Menu();
							gotoxy(35, 3);
							printf("INTERPOLACION DE LAGRANGE (Segundo Orden)");
						
							gotoxy(10,4);
							printf("Introdusca el valor de x: ");
							scanf("%f",&d[0]);
							
							gotoxy(10,6);
							printf("Introdusca el valor de x0: ");
							scanf("%f",&d[1]);
							
							gotoxy(10,8);
							printf("Introdusca el valor de x1: ");
							scanf("%f",&d[2]);
							
							gotoxy(10,10);
							printf("Introdusca el valor de x2: ");
							scanf("%f",&d[3]);
							
							gotoxy(10,12);
							printf("Introdusca el valor de %c(x0): ",159);
							scanf("%f",&d[4]);
							
							gotoxy(10,14);
							printf("Introdusca el valor de %c(x1): ",159);
							scanf("%f",&d[5]);
							
							gotoxy(10,16);
							printf("Introdusca el valor de %c(x2): ",159);
							scanf("%f",&d[6]);
							
							valor();
							
							gotoxy(2,17);
							printf("                               ");
							gotoxy(12,20);
							printf("       ");
							gotoxy(21,20);
							printf(" ");
							
							d[7]=(((d[0]-d[2])/(d[1]-d[2])) * ((d[0]-d[3])/(d[1]-d[3])) * d[4]) + (((d[0]-d[1])/(d[2]-d[1])) * ((d[0]-d[3])/(d[2]-d[3])) * d[5]) + (((d[0]-d[1])/(d[3]-d[1])) * ((d[0]-d[2])/(d[3]-d[2])) * d[6]);
							
							if(d[0]>d[1]&&d[0]>d[2]&&d[0]>d[3]){
							gotoxy(50, 4);
							printf("Allerta esta es una Extrapolacion");
							gotoxy(10,17);
							printf("El Resultado de la extrapolacion de lagrange 2%cOrden de x: %f es : %f",167,d[0],d[7]);
							}
							else{
								gotoxy(10,17);
								printf("El Resultado de la interpolacion de lagrange 2%cOrden de x: %f es : %f",167,d[0],d[7]);
							}
							
							if(h!=0){
							t=((h-d[7])/h)*100;
							if(t<0){
								t=t*-1;
							}
							gotoxy(45,18);
							printf("El error porcentual es de %f %c",t,37);
							}
							
							preguntar();
							if(p==7)
								r=true;
							if(p==15){
								r=false;
								system("cls");
								return main();
							}
							
							
							}while(r!=false);
					break;
					
					default:
						system("cls");
						Menu();
						return main();
						break;
			}
		break;
	}
}

