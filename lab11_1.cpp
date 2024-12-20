// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.\n";
    string x; int r,j=0;
    r=rand()%9;
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    cin.ignore();
    cin.ignore();
    cin.ignore();
    cout << "You will get " << grade[r] << " in this 261102.";
}