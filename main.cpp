#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

int main(){
    int num,guess,gue_coun=0;
    cout<<"Enter the number: ";
    do{
        cin>>num;
        if(num<0 || num>100){
            cout<<"Please enter a valid number between 0 & 100 : ";
        }
    }while(num<0 || num>100);
    cout<<endl<<"Press any key to start the game...";
    getch();

    system("cls");
    cout<<"\t----------------------------------"<<endl;
    cout<<"\t     G A M E  S T A R T E D       "<<endl;
    cout<<"\t----------------------------------"<<endl;
    do{
        cout<<"Enter your guessing : ";
        cin>>guess;
        if(guess>num){
            cout<<endl<<"Too High...You better raise down."<<endl;
            gue_coun++;
        }else if(guess<num){
            cout<<endl<<"Too Low...You better raise up."<<endl;
            gue_coun++;
        }else{
            cout<<endl<<"----------------------------------------------------------------"<<endl;
            cout<<"\tCongratulations! You've guessed it correctly."<<endl;

        }

    }while(guess!=num);

    cout<<"\tNo of guessings you've consumed : "<<gue_coun<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl<<"Press any key to terminate the programme...";
    getch();
return 0;
}
