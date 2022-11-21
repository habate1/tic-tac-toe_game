#include <iostream>
#ifndef game_hpp
#define game_hpp
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

class Game
{
    private:
        char board[3][3];
    public:
    Game() // constructor
    {
        int num = 1;
        for (int i=0; i < 3; i++)
        {
            for (int ndx=0; ndx < 3; ndx++)
            {
                board[i][ndx] = num;
            }
        }
    }
    bool playTurn(int square, char c);
    void displayBoard(int square, char c);
    bool compTurn(int square, char c);
    bool result(int square, char c);
};

bool Game::playTurn(int square, char c)
{
    bool openSpace = true;
    
    switch (square)
    {
    case 1:
            if (board[0][0] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[0][0] = c;
                
                break;
            }
        break;
    case 2:
            if (board[0][1] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[0][1] = c;
                
            }
        break;
    case 3:
            if (board[0][2] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[0][2] = c;
               
            }
        break;
    case 4:
            if (board[1][0] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[1][0] = c;
                
            };
        break;
    case 5:
            if (board[1][1] == 'O')
            {
                cout << "Try another square\n";
                
                openSpace = false;
                break;
            }
            else
            {
                board[1][1] = c;
                
            }
        break;
    case 6:
            if (board[1][2] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[1][2] = c;
                
            }
        break;
    case 7:
            if (board[2][0] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[2][0] = c;
               
            }
        break;
    case 8:
            if (board[2][1] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[2][1] = c;
                
            }
        break;
    case 9:
            if (board[2][2] == 'O')
            {
                cout << "Try another square\n";
                openSpace = false;
            }
            else
            {
                board[2][2] = c;
               
            }
        break;
    default:
        {
        cout << "Not a valid response. Try Again and enter a number 1-9.\n";
            openSpace = false;
        break;
        }
    }
    
    return openSpace;
}

bool Game::compTurn(int square, char c)
{
    bool openSquare = true;
 
    if (openSquare)
    {
        square = rand() % 9 + 1;
        switch (square)
        {
            case 1:
                if (board[0][0] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[0][0] = 'O';
                    
                }
                break;
            case 2:
                if (board[0][1] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[0][1] = 'O';
                    
                }
                break;
            case 3:
                if (board[0][2] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[0][2] = 'O';
                    
                }
                break;
            case 4:
                if (board[1][0] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[1][0] = 'O';
                    
                }
                break;
            case 5:
                
                if (board[1][1] == c)
                {
                    openSquare = false;
                    break;
                }
                else
                {
                    board[1][1] = 'O';
                    
                }
                break;
            case 6:
                if (board[1][2] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[1][2] = 'O';
                    
                }
                break;
            case 7:
                if (board[2][0] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[2][0] = 'O';
                    
                }
                break;
            case 8:
                if (board[2][1] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[2][1] = 'O';
                    
                }
                break;
            case 9:
                if (board[2][2] == c)
                {
                    openSquare = false;
                }
                else
                {
                    board[2][2] = 'O';
                    
                }
                break;
    }
    }
    else
    {
        Game::compTurn(square, c);
    }
    return openSquare;
}
   
void Game::displayBoard(int square, char c)
{
    cout << "+---+---+---+" << endl;
    for (int i=0; i < 3; i++)
    {
        cout << "| ";
        for (int ndx=0; ndx < 3; ndx++)
        {
            cout << board[i][ndx] << " |  ";
        }
        
        cout << endl;
        cout << "+---+---+---+" << endl;
    }
}

bool Game::result(int square, char p)
{
    bool winner = false;
    
    for (int i=0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == p )
        {
            cout << "Player " << p << " won!\n";
            winner = true;
            return winner;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == p )
        {
            cout << "Player " << p << " won!\n";
            winner = true;
            return winner;
        }
    }
    if (board[0][2] == board[1][2] && board[0][2] == board[2][2] && board[0][2] == p )
    {
        cout << "Player " << p << " won!\n";
        winner = true;
        return winner;
    }
    
    return winner;;
}
#endif /* game_hpp */
