#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class PcMove{
    public:
    int number;
    PcMove(){
      number = rand() % 3;
    }
    string rockPaperScissor(){
        if(number == 0)
            return "rock";
        else if(number == 1)
            return "paper";
        else
            return "scissor";
    }
};

int main(){
    srand(time(0));
    string move1;
    int sayac = 0;
    int pcSayac = 0;

    cout <<"Welcome to our Rock Paper Scissor Game!!!"<<endl;
    while(true){
        cout << "\nPlease enter your move (rock, paper, scissor or q to quit): ";
        cin >> move1;

    if (move1 == "q") break;
    
    PcMove pcMove;
    string pcMoveResult = pcMove.rockPaperScissor();

    cout << "Computer chose: " << pcMoveResult << endl;

    if (move1 == pcMoveResult) {
            cout << "Draw!!" << endl;
        }
        else if ((move1 == "rock" && pcMove.number == 2) ||
                 (move1 == "paper" && pcMove.number == 0) ||
                 (move1 == "scissor" && pcMove.number == 1)) {
            cout << "You win! " << move1 << " beats " << pcMoveResult << "." << endl;
            sayac++;
        }
        else if ((move1 == "rock" && pcMove.number == 1) ||
                 (move1 == "paper" && pcMove.number == 2) ||
                 (move1 == "scissor" && pcMove.number == 0)) {
            cout << "Computer wins! " << pcMoveResult << " beats " << move1 << "." << endl;
            pcSayac++;
        }
        else {
            cout << "Invalid move!" << endl;
            continue;
        }

        cout << "Score -> You: " << sayac << " | Computer: " << pcSayac << endl;
    }

    return 0;
}