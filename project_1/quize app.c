#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
void blankSpace();
void spaceString(char opt[]);
void delay(clock_t ms);
void gotoxy(int a,int b);
void dot(int x);
void lombo(int x,int y,int k);
void ready(void);
struct question{
	char ques[200];
	char option1[50];
	char option2[50];
	char option3[50];
	char option4[50];
};
int main(){
    FILE *file;
	int i,j,q=1,c,w,correct1,correct2,correct3,x,lChoice,n=0;
  	char choice,ch[2],name[30],ansL[20];
  	char ans1[20]={'A','B','C','D','A','B','B','D','B','D'},
         ans2[20]={'D','B','C','A','B','B','A','A','D','A'},
         ans3[20]={'A','D','D','D','C','D','C','A','D','D'};
	struct question q1[10]={
		{"The most important part of an information system is: ","A. People","B. Hardware","C. Software","D. Data"},
		{"Which of the following are microcomputers? ","A. Notebook, Handheld devices, IBM AS 400","B. PDA, Laptops, Desktop PC ","C. Desktop PC, PDA, Packard Bell PB 250","D. Notebook, Packard Bell 250 "},
		{"Which type of computer is Cray T90?","A. Minicomputer","B. Microcomputer","C. Supercomputer","D. Mainframe"},
		{"An example of an Optical Storage device is:","A. Magnetic Tapes","B. USB Disk","C. Floppy Disk","D. DVD "},
		{"Which of the following is an example of an Operating System? ","A. MS DOS","B. MS Access","C. Spreadsheets ","D. Photoshop "},
		{"Which of the following is part of the system unit?","A. Monitor","B. Motherboard","C. Keyboard ","D. None of the above "},
		{"The four common types of files are documents files, presentation files, worksheet files and:"," A. Program files","B. Database files ","C. System files ","D. Digital files"},
		{"What unit of storage is used to represent 109 bytes?","A. Kilobyte","B. Terabyte","C. Megabyte","D. Gigabyte"},
		{"The number of bits the processor can transmit at a given time is called:"," A. Bus width","B. Word size","C. Access time","D. Channel speed"},
		{"Computer processor chips are sometimes referred to as:","A. sockets","B. heat sinks","C. bits","D. microprocessor"}
	};
	struct question q2[10]={
		{"1.Which of the following languages is more suited to a structured program?","A.	PL/1","B.	FORTRAN","C.	BASIC","D.       PASCAL"},
		{"2.A computer assisted method for the recording and analyzing of existing or hypothetical systems","A.	Data transmission","B.	Data flow","C.	Data capture","D.	Data processing"},
		{"3.The brain of any computer system is","A.	ALU","B.	Memory","C.	CPU","D.	Control unit"},
		{"4.What difference does the 5th generation computer have from other generation computers?","A.	Technological advancement","B.	Scientific code","C.	Object Oriented Programming","D.	All of the above"},
		{"5.Which of the following computer language is used for artificial intelligence?","A.	FORTRAN","B.	PROLOG","C.	C","D.	COBOL"},
		{"6.The tracks on a disk which can be accessed without repositioning the R/W heads is","A.	Surface","B.	Cylinder","C.	Cluste","D.	All of the above"},
		{"7.Which of the following is the 1's complement of 10?","A.	01","B.	110","C.	11","D.	10"},
		{"8.A section of code to which control is transferred when a processor is interrupted is known as","A.	M","B.	SVC","C.	IP","D.	MDR"},
		{"9.Which part interprets program instructions and initiate control operations.","A.	Input","B.	Storage unit","C.	Logic unit","D.	Control unit"},
		{"10.The binary system uses powers of","A.	2","B.	10","C.	8","D.	16"}
	};
	struct question q3[10]={
		{"UNIVAC is","A) Universal Automatic Computer","B) Universal Array Computer","C) Unique Automatic Computer","D) Unvalued Automatic Computer"},
		{"The basic operations performed by a computer are","A) Arithmetic operation","B) Logical operation ","C) Storage and relative","D) All the above"},
		{"The two major types of computer chips are","A) External memory chip","B) Primary memory chip","C) Microprocessor chip","D) Both b and c"},
		{"Microprocessors as switching devices are for which generation computers","A) First Generation","B) Second Generation","C) Third Generation","D) Fourth Generation"},
		{"The brain of any computer system is","A) ALU","B) Memor","C) CPU ","D) Control unit"},
		{"Storage capacity of magnetic disk depends on ","A) tracks per inch of surface","B) bits per inch of tracks","C) disk pack in disk surface","D) All of above"},
		{"The two kinds of main memory are:","A) Primary and secondary","B) Random and sequential","C) ROM and RAM","D) All of above"},
		{"Computer is free from tiresome and boardroom. We call it","A) Accuracy","B) Reliability","C) Diligence","D) Versatility"},
		{"Networking such as LAN, MAN started from","A) First generation","B) Second generation","C) Third generation","D) Fourth generation"},
		{"LSI, VLSI & ULSI chips were used in which generation?","A) First","B) Second","C) Third","D) Fourth"}
	};
	while(1){
        system("cls");
        system("COLOR F0");
        gotoxy(4,3);
        dot(110);
        lombo(4,3,20);
        lombo(114,3,20);
        gotoxy(52,4);
        printf("PROJECT NO 8");
        gotoxy(55,5);
        printf("WELCOME");
        gotoxy(57,6);
        printf("TO");
        lombo(58,8,15);
        gotoxy(52,7);
        printf("MCQ QUIZ APP");
        gotoxy(4,8);
        dot(110);
        gotoxy(4,22);
        dot(110);
        gotoxy(8,10);
        printf("Press S to start the game");
        gotoxy(8,13);
        printf("Press V to view the previous score");
        gotoxy(8,16);
        printf("press Q to quit");
        gotoxy(65,10);
        printf("Press: ");
        scanf("%c",&choice);
    	if(choice>='a' && choice<='z') choice-=32;
    	if(choice=='S'){
            startGame:
    		system("cls");
    		system("COLOR F0");
    		system("COLOR F0");
            gotoxy(4,3);
            dot(110);
            lombo(4,3,20);
            lombo(114,3,20);
            gotoxy(52,4);
            printf("PROJECT NO 8");
            gotoxy(55,5);
            printf("WELCOME");
            gotoxy(57,6);
            printf("TO");
            lombo(58,8,15);
            gotoxy(52,7);
            printf("MCQ QUIZ APP");
            gotoxy(4,8);
            dot(110);
            gotoxy(4,22);
            dot(110);
            gotoxy(8,10);
            printf("Game have three level:");
            gotoxy(10,12);
            printf("1. Easy");
            gotoxy(10,14);
            printf("2.Middium");
            gotoxy(10,16);
            printf("3.Hard");
            gotoxy(8,18);
            printf("Or enter 4 to back main menu.");
            gotoxy(65,10);
            if(n==0){
                printf("Enter your nick name : ");
                scanf("%s",name);
                n=1;
                gotoxy(65,12);
            }
    	    printf("Enter choice level : ");
            scanf("%d",&lChoice);
            if(lChoice==4) continue;
            system("cls");
            ready();
            i=0;
            do{
                system("COLOR 0F");
                int second=10;
                while(1){
                    while(!kbhit()){
                        system("cls");
                        gotoxy(40,1);
                        printf("Question No : %d\t\t\t\t\t\t\t",i+1);
                        if(lChoice==1){
                            gotoxy(43,2);
                            printf("Level: Easy");
                        }else if(lChoice==2){
                            gotoxy(40,2);
                            printf("Level : Middium");
                        }else if(lChoice==3){
                            gotoxy(43,2);
                            printf("Level: Hard");
                        }
                        gotoxy(42,3);
                        if(second<4){
                            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                            CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
                            WORD saved_attributes;
                            GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
                            saved_attributes = consoleInfo.wAttributes;
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                            printf("Time left: %d\n",second);
                            SetConsoleTextAttribute(hConsole, saved_attributes);
                        }else
                            printf("Time left: %d\n",second);
                        printf("\n\n");
                        if(lChoice==1){
                            blankSpace();
                            printf("%s\n",q1[i].ques);
                            blankSpace();
                            printf("%s",q1[i].option1);
                            spaceString(q1[i].option1);
                            printf("%s\n",q1[i].option2);
                            blankSpace();
                            printf("%s",q1[i].option3);
                            spaceString(q1[i].option3);
                            printf("%s\n",q1[i].option4);
                            blankSpace();
                        }else if(lChoice==2){
                            blankSpace();
                            printf("%s\n",q2[i].ques);
                            blankSpace();
                            printf("%s",q2[i].option1);
                            spaceString(q2[i].option1);
                            printf("%s\n",q2[i].option2);
                            blankSpace();
                            printf("%s",q2[i].option3);
                            spaceString(q2[i].option3);
                            printf("%s\n",q2[i].option4);
                            blankSpace();
                        }else if(lChoice==3){
                            blankSpace();
                            printf("%s\n",q3[i].ques);
                            blankSpace();
                            printf("%s",q3[i].option1);
                            spaceString(q3[i].option1);
                            printf("%s\n",q3[i].option2);
                            blankSpace();
                            printf("%s",q3[i].option3);
                            spaceString(q3[i].option3);
                            printf("%s\n",q3[i].option4);
                            blankSpace();
                        }
                        printf("Enter your answer:");
                        delay(1000);
                        --second;
                        if(second==0) break;
                    }
                    if(kbhit()){
                        ansL[i]=getch();
                        if(ansL[i]>='a' && ansL[i]<='z') ansL[i]-=32;
                        break;
                    }else if(second==0){
                        ansL[i]='f';
                        break;
                    }
                }
                ++i;
                system("cls");
            }while(i<10);
            correct1=0,correct2=0,correct3=0;
            if(lChoice==1){
                for(i=0;i<10;i++){
                    if(ansL[i]==ans1[i]) ++correct1;
                }
            }else if(lChoice==2){
                for(i=0;i<10;i++){
                    if(ansL[i]==ans2[i]) ++correct2;
                }
            }else if(lChoice==3){
                for(i=0;i<10;i++){
                    if(ansL[i]==ans3[i]) ++correct3;
                }
            }
            if(lChoice==1){
            file=fopen("Previous score1.txt","w");
    	    fprintf(file,"%s %d",name,correct1);
    	    fclose(file);
            }
            if(lChoice==2){
               file=fopen("Previous score2.txt","w");
    	       fprintf(file,"%s %d",name,correct2);
    	       fclose(file);
            }
            if(lChoice==3){
               file=fopen("Previous score3.txt","w");
    	       fprintf(file,"%s %d",name,correct3);
    	       fclose(file);
            }
    	    printf("\n\n\n\t\t\t\t**************** CONGRATULATION *****************");
    	    if(lChoice==1){
    	    printf("\n\t\t\t\t  !!!!!!!%s, You got %d out of 10!!!!!!!\n\n",name,correct1);
    	    }
    	    if(lChoice==2){
    	    printf("\n\t\t\t\t  !!!!!!!%s, You got %d out of 10!!!!!!!\n\n",name,correct2);
    	    }
    	    if(lChoice==3){
    	    printf("\n\t\t\t\t  !!!!!!!%s, You got %d out of 10!!!!!!!\n\n",name,correct3);
    	    }
    	    printf("\n\t\t***********************************************************************************\n");
    	    for(i=0;i<10;i++){
                if(lChoice==1){
                    blankSpace();
                    printf("%d.%s\n",i+1,q1[i].ques);
                    blankSpace();
                    printf("%s",q1[i].option1);
                    spaceString(q1[i].option1);
                    printf("%s\n",q1[i].option2);
                    blankSpace();
                    printf("%s",q1[i].option3);
                    spaceString(q1[i].option3);
                    printf("%s\n",q1[i].option4);
                    blankSpace();
                    if(ansL[i]==ans1[i]){
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
                        WORD saved_attributes;
                        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
                        saved_attributes = consoleInfo.wAttributes;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
                        printf("Your answer in right.\n\n");
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                    }else{
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
                        WORD saved_attributes;
                        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
                        saved_attributes = consoleInfo.wAttributes;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        printf("Your answer in wrong.\n");
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                        blankSpace();
                        printf("Correct answer is: %c\n\n",ans1[i]);
                    }
                }else if(lChoice==2){
                    blankSpace();
                    printf("%d.%s\n",i+1,q2[i].ques);
                    blankSpace();
                    printf("%s",q2[i].option1);
                    spaceString(q2[i].option1);
                    printf("%s\n",q2[i].option2);
                    blankSpace();
                    printf("%s",q2[i].option3);
                    spaceString(q2[i].option3);
                    printf("%s\n",q2[i].option4);
                    blankSpace();
                    if(ansL[i]==ans2[i]){
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
                        WORD saved_attributes;
                        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
                        saved_attributes = consoleInfo.wAttributes;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
                        printf("Your answer in right.\n\n");
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                    }else{
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
                        WORD saved_attributes;
                        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
                        saved_attributes = consoleInfo.wAttributes;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        printf("Your answer in wrong.\n");
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                        blankSpace();
                        printf("Correct answer is: %c\n\n",ans2[i]);
                    }
                }else if(lChoice==3){
                    blankSpace();
                    printf("%d.%s\n",i+1,q3[i].ques);
                    blankSpace();
                    printf("%s",q3[i].option1);
                    spaceString(q3[i].option1);
                    printf("%s\n",q3[i].option2);
                    blankSpace();
                    printf("%s",q3[i].option3);
                    spaceString(q3[i].option3);
                    printf("%s\n",q3[i].option4);
                    blankSpace();
                    if(ansL[i]==ans3[i]){
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
                        WORD saved_attributes;
                        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
                        saved_attributes = consoleInfo.wAttributes;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
                        printf("Your answer in right.\n\n");
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                    }else{
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
                        WORD saved_attributes;
                        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
                        saved_attributes = consoleInfo.wAttributes;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        printf("Your answer in wrong.\n");
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                        blankSpace();
                        printf("Correct answer is: %c\n\n",ans3[i]);
                    }
                }
    	    }
    	    printf("\t\t***********************WANT TO GO HOME??**********************\n\n \t\tPRESS 1 TO GO HOME OR 0 TO STOP\n");
    	    scanf("%d",&x);
    	    if(x) goto startGame;
    	}else if(choice=='V'){
    	    system("cls");
    		int score1,score2,score3;
    		char name1[30];
   			file=fopen("Previous score1.txt","r");
   			fscanf(file,"%s %d",&name1,&score1);
   			fclose(file);
   			file=fopen("Previous score2.txt","r");
   			fscanf(file,"%s %d",&name1,&score2);
   			fclose(file);
   			file=fopen("Previous score3.txt","r");
   			fscanf(file,"%s %d",&name1,&score3);
   			fclose(file);
   			printf("\n\t\tPREVIOUS GAME INFORMATION\n");
   			printf("\t\t*************************\n");
            printf("\n\t\tEASY LEVEL : \n");
   			printf("\t\tNAME = %s\n",name1);
   			printf("\t\tScore = %d points\n",score1);
   			printf("\n");
   			printf("\n\t\tMEDIUM LEVEL : \n");
   			printf("\t\tNAME = %s\n",name1);
   			printf("\t\tScore = %d points\n",score2);
   			printf("\n");
   			printf("\n\t\tHARD LEVEL : \n");
   			printf("\t\tNAME = %s\n",name1);
   			printf("\t\tScore = %d points\n",score3);

   			printf("\n\t\t*********************PRESS 1 TO GO BACK HOME**********************\n");
   			scanf("%d",&q);
   			system("cls");
		}else if(choice=='Q'){
		    system("cls");
		    break;
		}
		if(q==0) break;
	}
    return 0;
}
void ready(void){
    gotoxy(55,12);
    printf("Ready");
    delay(600);
    system("cls");
    gotoxy(55,12);
    printf("3");
    delay(600);
    system("cls");
    gotoxy(55,12);
    printf("2");
    delay(600);
    system("cls");
    gotoxy(55,12);
    printf("1");
    delay(600);
    system("cls");
    gotoxy(55,12);
    printf("go");
    delay(600);
    system("cls");
}
void delay(clock_t ms){
    clock_t timeDelay = ms + clock();
    while (timeDelay > clock());
}
COORD coord={0,0};
void gotoxy(int a,int b){
    coord.X=a;
    coord.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void blankSpace(){
	int i=0;
	while(i<15){
		printf(" ");
		++i;
	}
}
void spaceString(char opt[]){
	int i=0;
	for(i=0;opt[i]!='\0';i++);
	for(i=i;i<50;i++)
		printf(" ");
}
void dot(int x){
    int i;
    for(i=0;i<x;i++){
        printf("*");
    }
    printf("\n");
}
void lombo(int x,int y,int k){
    int i;
    for(i=0;i<k;i++){
        gotoxy(x,y+i);
        printf("*");
    }
}

