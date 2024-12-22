#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.\n";
    int i=0;
    string grade[] = {"A","+B","B","+C","C","+D","D","F","W"}; 

    while(i<3){
        cin.get();
        i++;
    }
    srand(time(0));
    int x = rand()%9;
    string g = grade[x];
    

    cout << "You will get " << g << " in this 261102.";
    return 0;
}