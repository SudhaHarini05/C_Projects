#include<stdio.h>
#include<conio.h>
int checkwin();
void showboard();
void system();
char board[10]={'0','1','2','3','4','5','6','7','8','9'};
void main(){
    int player=1,input,status=-1;
    showboard();
    while(status==-1){
        player=(player%2==0)?2:1;
        char mark=(player==1)?'X':'O';
        printf("Player %d turn : ",player);
        scanf("%d",&input);
        if(input<1 || input>9){
            printf("INVALID INPUT.\n");
            player--;
        }
         if(board[input] == 'X' || board[input] == 'O') {
            printf("Cell already occupied! Try another move.\n");
            continue;
        }
        board[input]=mark;
        showboard();
        int result=checkwin();
        if(result==1){
            printf("=======PLAYER %d IS WINNER !=======\n",player);
            return ;
        }
        else if(result==0){
            printf("======= MATCH IS DRAW !!!!! =======\n");
            return ;
        }
        player++;
    }
}
void showboard(){
    system("cls");
    printf("\n\n");
    printf("========= TIC-TAC-TOE GAME =========\n\n");
    printf("=========     RULES        =========\n\n");
    printf("1.There will be two players(palyer 1 and player 2).\n");
    printf("2.Player 1 represents 'X' Player 2 represents 'O'.\n");
    printf("3.To win the game player must fill the same symbol either in vertical,horizontal or diagonal positions.\n\n");
    printf("=========    GAME BOARD    =========\n\n");
   
    printf("        |        |       \n");
    printf("    %c   |   %c    |    %c   \n",board[1],board[2],board[3]);
    printf("________|________|_______\n");
    printf("        |        |       \n");
    printf("    %c   |   %c    |    %c   \n",board[4],board[5],board[6]);
    printf("________|________|_______\n");
    printf("        |        |       \n");
    printf("    %c   |   %c    |    %c   \n",board[7],board[8],board[9]);
    printf("        |        |       \n");
    
    getch();
}

int checkwin(){
    if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
    if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
    if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
    if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
    int count=0;
    for(int i=1;i<=9;i++){
        if(board[i]=='X' || board[i]=='O'){
            count++;
        }
    }
    if(count==9){
        return 0;
    }
    return -1;
}