
#include <iostream>
#include "game.cpp"

using namespace std;

    
int main() {
    // menu
    int playersMove;
    char pMove = 'X';
    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Start game entering which square you want to enter your X\n";
    
    cout << "+---+---+---+" << endl;
    cout << "| 1 | 2 | 3 | " << endl;
    cout << "+---+---+---+" << endl;
    cout << "| 4 | 5 | 6 | " << endl;
    cout << "+---+---+---+" << endl;
    cout << "| 7 | 8 | 9 | " << endl;
    cout << "+---+---+---+" << endl;

    Game g;
     
    bool endGame = true;
       while (endGame)
       {
           for (int i = 0; i <= 9; i++)
           {
               cout << "Your move = " << endl;
               cin >> playersMove;
               if (g.playTurn(playersMove, pMove))
               {                  
                   if (g.compTurn(playersMove, pMove))
                   {
                       g.displayBoard(playersMove, pMove);
 
                       if (g.Game::result(playersMove, pMove))
                       {
                           endGame = false;
                           return endGame;
                       }
                   }
                   else
                   {
                       g.compTurn(playersMove, pMove);
                       g.displayBoard(playersMove, pMove);
                   }
               }
           }
    
       }
    return 0;
}
