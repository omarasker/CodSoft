//
// Created by Omar Asker on 11/06/2024.
//

#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

bool GuessNum(int randomNum)
{
    int guess;
    cin>>guess;

    if (guess==randomNum)
    {
        cout<<"congratulations! you  have guessed the number correctly.";
        return true;
    }

    if (guess>randomNum)
    {
        cout<<"your guess was higher than the actual number, try again"<<endl;
        return GuessNum(randomNum);
    }

    if (guess<randomNum)
    {
        cout<<"your guess was lower than the actual number, try again"<<endl;
        return GuessNum(randomNum);
    }
}

int main()
{
    int max,min;



    time_t seed = time(NULL);
    srand(seed);

    cout<<"Welcome to the guessing game, choose a range";
    cout<<endl<<"min: "; cin>>min;
    cout<<endl<<"max: ";cin>>max;
    int randomNumber = rand() % (max+1 - min) + min ;



    cout<<endl<<"now enter your guess : ";

    GuessNum(randomNumber);




}