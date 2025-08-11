
#include <iostream>
#include <stack>
using namespace std;

bool palindromeornot(string str){
    stack<char> palindromestack;

    for(char c : str){
       palindromestack.push(c); 
    }

    for(char c : str){
        if(palindromestack.top() != c){
            return false;
        }
        palindromestack.pop();
    }

    return true;
}

int main(){
    string str;

    cout << "Enter your string : ";
    getline(cin , str);

    if(palindromeornot(str) == true){
        cout << "String is a palindrome.";
    }
    else{
        cout << "String is not a  palindrome.";
    }
    return 0;
}
