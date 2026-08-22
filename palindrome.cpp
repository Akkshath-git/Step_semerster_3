#include<iostream>
using namespace std;
void palindromeCheck(string number , int n){
    bool isPalindrome = false;
    cout<<"Enter number for palindrome: ";
    cin>>number;
    int st = 0 , end = n -1 ;
    while(st < end) {
        if(number[st] != number[end]){
            break;
        }else {
            st++;
            end--;
            isPalindrome = true;
        }
    }
    if(!isPalindrome){
        cout<<number<<" is a palindrome"<<endl;
    } else{
        cout<<number<<" not a palindrome"<<endl;
    }
}



int main() {
    string number ;
    int n = number.length();
    palindromeCheck(number , n);
}