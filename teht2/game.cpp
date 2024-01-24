#include "game.h"

Game::Game(int maximum)
{
    cout << "GAME CONSTRUCTOR: object initialized with " << maximum << " as a maximum value" << endl;
    setMaxNumber(maximum);
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    srand(std::time(0));
    setRandomNumber((rand()%getMaxNumber())+1);
    short userValue;
    bool stayInLoop = true;
    setNumOfGuesses(0);
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<getMaxNumber()<<endl;
        cin>>userValue;
        setPlayerGuess(userValue);
        setNumOfGuesses(getNumOfGuesses()+1);
        if(getPlayerGuess() == getRandomNumber())
        {
            cout<<"Your guess is right = "<<getPlayerGuess()<<endl;
            stayInLoop = false;
        }
        else if(getPlayerGuess()<getRandomNumber())
        {
            cout<<"Your guess is too small"<<endl;
        }
        else
        {
            cout<<"Your guess is too big"<<endl;
        }


    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << playerGuess << " with " << numOfGuesses << " guesses" << endl;
}

//*******SETTERS
void Game::setMaxNumber(int newMaxNumber)
{
    MaxNumber = newMaxNumber;
}

void Game::setPlayerGuess(int newPlayerGuess)
{
    playerGuess = newPlayerGuess;
}

void Game::setRandomNumber(int newRandomNumber)
{
    randomNumber = newRandomNumber;
}

void Game::setNumOfGuesses(int newNumOfGuesses)
{
    numOfGuesses = newNumOfGuesses;
}
//**********GETTERS
int Game::getMaxNumber() const
{
    return MaxNumber;
}

int Game::getPlayerGuess() const
{
    return playerGuess;
}

int Game::getRandomNumber() const
{
    return randomNumber;
}

int Game::getNumOfGuesses() const
{
    return numOfGuesses;
}

