#include <iostream>
using namespace std;

void display_Board();
int checkWin();
void system();

char board[]={'0','1','2','3','4','5','6','7','8','9'};

int main(){
    int player=1,input,status=-1;
    display_Board();


    while (status==-1)
    {
        player=(player%2==0) ? 2 : 1;
        char mark=(player==1) ? 'X' :'O';
        cout<<"Please Enter Number For Player "<<player<<":";
        cin>>input;
    if(input<1 || input>9){
        cout<<"invalid input";
    }

    board[input]=mark;
    display_Board();

    int result=checkWin();

    if(result==1){
        cout<<"  Winner is the player "<<player;
        return 0;
    }else if(result==0){
        cout<<"draw";
        return 1;
    }

    player++;
    }


}

  void display_Board(){
    system("cls");
    cout<<"   \n\n T i c k  C r o s s  G a m e"<<endl;
    cout<<"\tPlayer1[x]\n  \tPlayer2[0]\n";
    cout<<" \t\t     |     |    \n";
    cout<<" \t\t  "<<board[1]<<"  |  "<<board[2]<<"  |  "<<board[3]<<"  \n";
    cout<<" \t\t_____|_____| _____  \n";
    cout<<" \t\t     |     |    \n";
    cout<<" \t\t  "<<board[4]<<"  |  "<<board[5]<<"  |   "<<board[6]<<"  \n";
    cout<<" \t\t_____|_____| _____   \n";
    cout<<" \t\t     |     |    \n";
    cout<<" \t\t  "<<board[7]<<"  |   "<<board[8]<<" |   "<<board[9]<<" \n";
    cout<<" \t\t     |     |    \n";



}


int checkWin(){

    if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9]){
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
    if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }

    int count=0;
    for (int i = 1; i <=9; i++)
    {
        if(board[i]=='X' || board[i]=='O'){
            count++;
        }
    }

    if(count==9){
        return 0;
    }
    return -1;
}
