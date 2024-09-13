#include <iostream>
using namespace std;

int main() {
    char Player1, Player2;

    cout << "Enter R for Rock, P for Paper, S for Scissors (Player 1 and Player 2): ";
    cin >> Player1 >> Player2;
    if ((Player1 == 'R' || Player1 == 'r') && (Player2 == 'S' || Player2 == 's')) {
        cout << "Rock beats Scissors. Player 1 Wins!" << endl;
    } else if ((Player1 == 'R' || Player1 == 'r') && (Player2 == 'P' || Player2 == 'p')) {
        cout << "Paper beats Rock. Player 2 Wins!" << endl;
    } else if ((Player1 == 'P' || Player1 == 'p') && (Player2 == 'R' || Player2 == 'r')) {
        cout << "Paper beats Rock. Player 1 Wins!" << endl;
    } else if ((Player1 == 'P' || Player1 == 'p') && (Player2 == 'S' || Player2 == 's')) {
        cout << "Scissors beats Paper. Player 2 Wins!" << endl;
    } else if ((Player1 == 'S' || Player1 == 's') && (Player2 == 'P' || Player2 == 'p')) {
        cout << "Scissors beats Paper. Player 1 Wins!" << endl;
    } else if ((Player1 == 'S' || Player1 == 's') && (Player2 == 'R' || Player2 == 'r')) {
        cout << "Rock beats Scissors. Player 2 Wins!" << endl;
    } else if ((Player1 == Player2) && (Player1 == 'R' || Player1 == 'P' || Player1 == 'S')) {
        cout << "It's a Tie!" << endl;
    } else {
        cout << "Invalid Input!" << endl;
    }

    return 0;
}

