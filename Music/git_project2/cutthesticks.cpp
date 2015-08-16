#include <iostream>
using namespace std;
 
int main(){
    int N;
    int a_i[1000] = { 0, };
    cin >> N;
 
    for (int i = 0; i < N; i++){
        cin >> a_i[i];
    }
 
    while (1){
        int smallest_stick = a_i[0];
        int remain = 0;
 
        for (int i = 0; i < N; i++){
            if (a_i[i] != 0)
                remain++; // count remaining sticks
        }
 
        if (remain == 0)
            break;
 
        cout << remain << endl; remain = 0; // print remaining sticks
 
        for (int i = 1; i < N;i++){
            if (a_i[i] < smallest_stick && a_i[i] != 0){
                smallest_stick = a_i[i];
            }
            if (smallest_stick == 0){
                smallest_stick = a_i[i];
            }
        }
 
        for (int i = 0; i < N; i++){
            if (a_i[i] != 0)
                a_i[i] -= smallest_stick;
        }
    }
}
