#include <iostream>

using namespace std;

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "************Number Guessing Game************* \n";

    do{
        
        cout << "Enter a guessing number between (1-100) = ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "TOO HIGH! \n";
        }
        else if(guess < num){
            cout  << "TOO LOW! \n";
        }
        else{
            cout << "CORRECT! Your guessing tries " << tries << '\n';
            tries = 0;
        }

    }while(guess != num);

    cout << "**********************************************************";

    return 0;
}