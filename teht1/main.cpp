#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxnumber;
    cout<<"Anna pelille maksimiluku: "<<endl;
    cin>>maxnumber;
    int numberOfGuesses = game(maxnumber);
    cout<<"Arvausten maara: "<<numberOfGuesses<<endl;
    return 0;
}

int game(int maxnumber)
{
    if (maxnumber==0){
        cout<<"eihh"<<endl;
        return 0;
    }

    srand(time(NULL));
    int secretNumber=rand() % maxnumber + 1;
    int playersGuess=-1;
    int numberOfGuesses=0;
    //cout<<secretNumber<<endl;

    while(playersGuess!=secretNumber){
    cout << "Arvaa luku: "<< endl;
    cin>>playersGuess;
    numberOfGuesses++;
    if (playersGuess < secretNumber)
    {
        cout<<"Luku on suurempi"<<endl;
    }
    if (playersGuess > secretNumber)
    {
        cout<<"Luku on pienempi"<<endl;
    }
    }
    cout<<"Voitit pelin!"<<endl;
    return numberOfGuesses;
}
