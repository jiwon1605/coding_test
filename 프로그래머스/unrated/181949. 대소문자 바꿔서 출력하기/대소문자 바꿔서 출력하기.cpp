#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.length();i++){
        if(str[i] >= 97){
            char result = str[i]-32;
            cout<<result;
        }
        else{
            char result = str[i]+32;
            cout<<result;
        }
    }
    return 0;
}