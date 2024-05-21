#include<stdio.h>
#include <stdlib.h>
void print(char book[3][3])
{
    for(int m=0; m<3;m++){
        for(int n=0; n<3;n++){
            printf("[%3c]",book[m][n]);
        }printf("\n");
    }printf("\n");
}
int Enter(int x)
{   int num;
    printf("Enter You Payer(%d) Postion:-",x%2?1:2);
    scanf("%d",&num);
    return num;
}
int Ruls(char a[3][3])
{   int k=0;
    int num1[9];
    char n[9];
    for(int i=0; i<=2 ; i++){
        for(int j=0; j<=2; j++){
            n[k]=a[i][j];
            k++;
        }
    }
    if(n[0]=='o' && n[1]=='o' && n[2]=='o'){return 1;}
    if(n[3]=='o' && n[4]=='o' && n[5]=='o'){return 1;}
    if(n[6]=='o' && n[7]=='o' && n[8]=='o'){return 1;}
    if(n[0]=='o' && n[3]=='o' && n[6]=='o'){return 1;}
    if(n[1]=='o' && n[4]=='o' && n[7]=='o'){return 1;}
    if(n[2]=='o' && n[7]=='o' && n[8]=='o'){return 1;}
    if(n[0]=='o' && n[4]=='o' && n[8]=='o'){return 1;}
    if(n[2]=='o' && n[4]=='o' && n[6]=='o'){return 1;}
    if(n[0]=='x' && n[1]=='x' && n[2]=='x'){return 2;}
    if(n[3]=='x' && n[4]=='x' && n[5]=='x'){return 2;}
    if(n[6]=='x' && n[7]=='x' && n[8]=='x'){return 2;}
    if(n[0]=='x' && n[3]=='x' && n[6]=='x'){return 2;}
    if(n[1]=='x' && n[4]=='x' && n[7]=='x'){return 2;}
    if(n[2]=='x' && n[7]=='x' && n[8]=='x'){return 2;}
    if(n[0]=='x' && n[4]=='x' && n[8]=='x'){return 2;}
    if(n[2]=='x' && n[4]=='x' && n[6]=='x'){return 2;}
    return 3;
}


int main()
{
    int block[3][3];
    char book[3][3];
    int num=0,po=1;
    for(int i=0; i<3; i++){  
        for(int j=0; j<3;j++){
        num=Enter(po);
        if(num>0 && num <10){
            if(block[0][0]==num||block[0][1]==num||block[0][2]==num||block[1][0]==num||block[1][1]==num||block[1][2]==num||block[2][0]==num||block[2][1]==num||block[2][2]==num){
                system("clear");
                printf("Sory, You Enter Postion Is Book Reenter You Postion\n");
                printf("Book Postion:-\n");
                print(book);
                printf("\n");
                j--;
            }else{
                system("clear");
                block[i][j]=num;
                if(po%2!=0){
                        if(num==1){
                            book[0][0]='o';
                        }else if(num==2){
                            book[0][1]='o';
                        }else if(num==3){
                            book[0][2]='o';
                        }else if(num==4){
                            book[1][0]='o';
                        }else if(num==5){
                            book[1][1]='o';
                        }else if(num==6){
                            book[1][2]='o';
                        }else if(num==7){
                            book[2][0]='o';
                        }else if(num==8){
                            book[2][1]='o';
                        }else if(num==9){
                            book[2][2]='o';
                        }
                    }else{
                        if(num==1){
                            book[0][0]='x';
                        }else if(num==2){
                            book[0][1]='x';
                        }else if(num==3){
                            book[0][2]='x';
                        }else if(num==4){
                            book[1][0]='x';
                        }else if(num==5){
                            book[1][1]='x';
                        }else if(num==6){
                            book[1][2]='x';
                        }else if(num==7){
                            book[2][0]='x';
                        }else if(num==8){
                            book[2][1]='x';
                        }else if(num==9){
                            book[2][2]='x';
                        }
                    }
                    po++;
                    if(po>5){
                        int result=Ruls(book);
                        if (result==1){
                         printf("Congratulation,Payer 1 is Win\n");
                         print(book);
                         goto end;
                        }
                        if(result==2){
                         printf("Congratulation,Payer 2 is Win\n");
                         print(book);
                         goto end;
                        }
                        if (result==3&&po==10){
                        printf("Game Ovaer!!! \n");
                        print(book);
                        goto end;
                        }
                        
                    }
                print(book);
            }
        }else{
            system("clear");
            printf("Sory, You Enter Postion Is Notvalid Reenter You Postion(1 to 9)\n");
            printf("Book Postion:-\n");
            print(book);
            j--;
            }printf("\n");
        }
        
    }
    end:
    printf("\n");
    return 0;
    
}