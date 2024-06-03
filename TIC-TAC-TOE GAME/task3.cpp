#include <iostream>
using namespace std;

void game_play() {
    char game_board[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };

    char default_player = 'X';
    int key;
    int r, c;
    int counter = 0;

    cout<<"PRESS A KEY (TO CONFIRM) : ";
    cin>>key;

    while (key != 0) {

    cout<<"ENTER THE R and C VALUE : ";
    cin>>r>>c;
    counter++;

    if (counter == 9) {
        cout<<"IT'S A DRAW!"<<endl;
        break;
    }

    game_board[r][c] = default_player;
    if (default_player == 'X') {
        default_player = 'O';
        cout<<endl<<" "<<"PLAYER O's TURN"<<endl<<endl;
    }

    else {
        default_player = 'X';
        cout<<endl<<" "<<"PLAYER X's TURN"<<endl<<endl;
    }

    cout<<"      "<<"  | "<<" "<<" | "<<endl;
    cout<<"      "<<game_board[0][0]<<" | "<<game_board[0][1]<<" | "<<game_board[0][2]<<endl;
    cout<<"      "<<"  | "<<" "<<" | "<<endl;
    cout<<"  __________________"<<endl<<endl;
    cout<<"      "<<"  | "<<" "<<" | "<<endl;
    cout<<"      "<<game_board[1][0]<<" | "<<game_board[1][1]<<" | "<<game_board[1][2]<<endl;
    cout<<"      "<<"  | "<<" "<<" | "<<endl;
    cout<<"  __________________"<<endl<<endl;
    cout<<"      "<<"  | "<<" "<<" | "<<endl;
    cout<<"      "<<game_board[2][0]<<" | "<<game_board[2][1]<<" | "<<game_board[2][2]<<endl;
    cout<<"      "<<"  | "<<" "<<" | "<<endl;

    if (game_board[0][0] == game_board[0][1] && game_board[0][1] == game_board[0][2] && game_board[0][0] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        }
        }

    else if (game_board[1][0] == game_board[1][1] && game_board[1][1] == game_board[1][2] && game_board[1][0] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        }
        }

    else if (game_board[2][0] == game_board[2][1] && game_board[2][1] == game_board[2][2] && game_board[2][0] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        }
        }

    else if (game_board[0][0] == game_board[1][0] && game_board[1][0] == game_board[2][0] && game_board[0][0] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        }
        }

    else if (game_board[0][1] == game_board[1][1] && game_board[1][1] == game_board[2][1] && game_board[0][1] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        }
        }

    else if (game_board[0][2] == game_board[1][2] && game_board[1][2] == game_board[2][2] && game_board[0][2] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        }
        }

    else if (game_board[0][0] == game_board[1][1] && game_board[1][1] == game_board[2][2] && game_board[0][0] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        } 
        }

    else if (game_board[0][2] == game_board[1][1] && game_board[1][1] == game_board[2][0] && game_board[0][2] != '-') {
        if (default_player == 'X') {
            cout<<endl<<"PLAYER O WINS!"<<endl;
            break;
        }

        else {
            cout<<endl<<"PLAYER X WINS!"<<endl;
            break;
        } 
        }
    }
    }

int main() {

    int button;

    cout<<"  "<<"------------------"<<endl;
    cout<<"   "<<"TIC-TAC-TOE GAME"<<endl;
    cout<<"  "<<"------------------"<<endl<<endl;

    cout<<"PLAYER X : X"<<endl;
    cout<<"PLAYER O : O"<<endl<<endl;

    cout<<"TO START THE GAME - PRESS 1"<<endl;
    game_play();

    cout<<"THANKS FOR PLAYING :)"<<endl<<endl;

    while (button != 0) {
    cout<<"TO PLAY AGAIN - PRESS 1"<<endl;
    cout<<"TO EXIT THE GAME - PRESS 0"<<endl;
    cout<<"PRESS A KEY : ";
    cin>>button;

    if (button == 1) {
        game_play();
    }

    else if (button == 0) {
        cout<<"EXIT, THANKS FOR PLAYING!";
    }

    else {
        cout<<"INVALID INPUT!"<<endl<<endl;
    }
    }

    return 0;
}