#include<iostream>
using namespace std;
int main(){
    int numbers_of_sticks = 10;
    cout << "Welcome to Nim Game" << endl;
    cout << "There are " << numbers_of_sticks << "sticks" << endl;
    cout << "You can take 1, 2 or 3 sticks" << endl;
    cout << "Computer goes first" << endl;
    int max_pick = 3;
    if(numbers_of_sticks % (max_pick + 1) == 0){
        cout << "Computer takes: " << 1 << endl;
        numbers_of_sticks -= 1;
    }
    else cout << "Computer takes: " << numbers_of_sticks %  (max_pick + 1)<< endl;
    numbers_of_sticks -= (numbers_of_sticks % (max_pick + 1));
    while(1){
        cout << "The number of sticks left: " << numbers_of_sticks << endl;
        cout << "The number of sticks you want to take: ";
        int take;
        cin >> take;
        if(take > 3 || take < 1){
            cout << "Invalid number of sticks" << endl;
            continue;
        }
        numbers_of_sticks -= take;
        cout << "There are " << numbers_of_sticks << " sticks left" << endl;
        if(numbers_of_sticks == 0){
            cout << "You won!" << endl;
            break;
        }
        cout << "Computer takes: " << 4 - take << endl;
        numbers_of_sticks -= (4 - take);
        if(numbers_of_sticks == 0){
            cout << "Computer won!" << endl;
            break;
        }
    }

}