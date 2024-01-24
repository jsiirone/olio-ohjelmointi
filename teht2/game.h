#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game
{
public:
    Game(int);
    ~Game();
    void play();

    void setMaxNumber(int newMaxNumber);
    void setPlayerGuess(int newPlayerGuess);
    void setRandomNumber(int newRandomNumber);
    void setNumOfGuesses(int newNumOfGuesses);

    int getMaxNumber() const;
    int getPlayerGuess() const;
    int getRandomNumber() const;
    int getNumOfGuesses() const;

private:
    int MaxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // GAME_H
