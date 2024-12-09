#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <process.h>


int main(){
//	char c;  
//	while(c!='p'){
//		c=getch();
//		border();
//		gotoxy(40,20);
//		printf("O");
////		ship();
//		
//		if(c=='d'){
//			system("cls");
//			border();
//			gotoxy(60,20);
//			printf("O");
//			delay(1);
//			system("cls");
//			border();
//			gotoxy(40,20);
//			printf("O");
//		}
//		if(c=='a'){
//			system("cls");
//			border();
//			gotoxy(20,20);
//			printf("O");
//			delay(1);
//			system("cls");
//			border();
//			gotoxy(40,20);
//			printf("O");
//		}
	int c;
	border();
	gotoxy(40,20);
	printf("O");
	while(1){
	c=getch();
//	border();
//	
//	
//	if(c==224){
//		do {
//            c=getch();
//        } while(c==224);
////		if(c==72){
////			printf("upar nikal");
////		}
//		if(c==77){
//			system("cls");
//			border();
////			printf("right nikal");
//			gotoxy((wherex()+20),20);
//			printf("o");
//		}
////		if(c==80){
////			printf("neeche nikal");
////		}
//		if(c==75){
//			system("cls");
//			border();
//			gotoxy((wherex()-20),20);
//			printf("o");
////			printf("left nikal");
//
//		}}
	if(c==224){
		do {
            c=getch();
        } while(c==224);
//		if(c==72){
//			printf("upar nikal");
//		}
		if(c==77){
//			printf("right nikal");
			right();
		}
//		if(c==80){
//			printf("neeche nikal");
//		}
		if(c==75){
//			printf("left nikal");
			left();
		}}
		
	if(c=='s'){
//		printf("%d",wherex());
		shoot();
	}	
		}

	
	
}
void gotoxy(int x, int y){
    COORD coord;
    coord.X =x;
    coord.Y =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void delay(int sec){
    int millisec=10*sec;
    clock_t start_time=clock();
    while(clock()<start_time+millisec);
}
void border(int i){
	for(i=0; i<41; i++)
    {
        gotoxy(10,i);
        printf("||");
        gotoxy(30,i);
        printf("||");
        gotoxy(50,i);
        printf("||");
        gotoxy(70,i);
        printf("||");
        
    }
}
void ship(){
	printf("    _     _   \n");
	printf("   /_=[U]=_\\  \n");
	printf("  /   [|]   \\ \n");
	printf(" /     W     \\");
}

int wherex(){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwCursorPosition.X;
}
int wherey(){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwCursorPosition.Y;
}

//void right(){
//	gotoxy(wherex(),20);
//	printf(" ");
//	gotoxy(wherex()-1,20);
//	gotoxy(wherex()+20,20);
//	printf("o");
//}
//
//void left(){
//	gotoxy(wherex()-1,20);
//	printf(" ");
//	gotoxy(wherex()-1,20);
//	gotoxy(wherex()-20,20);
//	printf("o");
//}

void right(){
	gotoxy(wherex()-1,20);
	printf(" ");
	gotoxy(wherex()-1,20);
	gotoxy(wherex()+20,20);
	printf("o");
}

void left(){
	gotoxy(wherex()-1,20);
	printf(" ");
	gotoxy(wherex()-1,20);
	gotoxy(wherex()-20,20);
	printf("o");
}

void shoot(){
	int p=wherex();
	int i=wherey();
	for(i;i>0;i--){
		gotoxy(p,i);
		printf("|");
		delay(1);
		gotoxy(p,i+1);
		printf(" ");
		
	}
	gotoxy(wherex()-2,1);
	printf(" ");
	
}




