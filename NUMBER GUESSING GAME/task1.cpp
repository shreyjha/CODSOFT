#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand((unsigned int) (time(NULL)));
    int number = (rand() % 100) + 1;
    int guess;
    int tries = 0;

    cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;

    do {
        cout<<"Guess a number between (1 to 100) : ";
        cin>>guess;
        tries++;

        if (guess > number) {
            cout<<"Too high, try again!"<<endl;
        }

        else if (guess < number) {
            cout<<"Too low, try again!"<<endl;
        }

        else {
            cout<<"Correct, in "<<tries<<" tries, well done!";
        }

    } while(guess != number);

    return 0;
}