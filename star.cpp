#include<iostream>
using namespace std;

void star(int n){
    cout<<"Enter number of rows: ";
    cin >> n;
    for(int i = 1; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main() {
    int n;
    star(n);

}