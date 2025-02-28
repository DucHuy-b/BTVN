#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playGuessIt()
{
    srand(time(0));
    int secretNum = rand()%100+1;

    int guess;

    int att = 0;

    do
    {
        cin>>guess;
        att++;

        if(guess>secretNum)
        {
            cout<<"Wrong! Too high!"<<endl;
        }
        else if(guess<secretNum)
        {
            cout<<"NO! Too low!"<<endl;
        }
        else
        {
            cout<<"Congratulation, you got the right answer :))"<<endl
                <<"Attempts: "<<att<<endl
                <<"Your score: "<<100-att<<endl;
            break;
        }
    }
    while(guess!=secretNum);
}

int main()
{
    char retry;

    do
    {
        playGuessIt();
        cout << "Do you want to play again ?"<<endl
             << "Press Y to replay, N to stop"<<endl;
        cin>>retry;
    }
    while(retry == 'Y');

    return 0;
}
