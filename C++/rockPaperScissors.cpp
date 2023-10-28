#include<bits/stdc++.h>
using namespace std;

class Game{
    public:

    void play(int move){
        int comMove = 1 + (rand() % 4);
        string choose = "";
        if(comMove==1){
            choose = "Rock";
        }
        else if(comMove==2){
            choose = "Paper";
        }
        else if(comMove==3){
            choose = "Scissors";
        }
        string winState = "";
        if(move==comMove){
            cout << "It's a Draw"<< endl;
            return;
        }
        else if((move==1 && comMove==2) || (move==2 && comMove==3) || (move==3 && comMove==1)){
            winState="Lose";
        }
        else {
            winState="Win";
        }

        cout << "I choose " << choose << endl;
        cout << "I " << winState << endl;
    }
};

int main(){
    int move;
    cout << "Welcome to the Game of Stone-Paper-Scissors" << endl << endl;
    Game gt;
    while(move!=4){
        cout << "To select Rock------(1)"<< endl;
        cout << "To select Paper-----(2)"<< endl;
        cout << "To select Scissors--(3)"<< endl;
        cout << "To exit-------------(4)"<< endl;
        cin >> move;
        gt.play(move);
    }
    return 0;
}