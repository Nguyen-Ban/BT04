#include <iostream>
#include <string>

using namespace std;

bool ktra( string a, string b){
    if(a.length() != b.length()) return 0;
    else{
        for(int i = 0; i < a.length(); i++){
            if(a[i] != b[a.length()-1-i]) return 0;
        }
    }
    return 1;
}

int main()
{
    int SIZE;
    cin >> SIZE;
    string password[SIZE];

    for(int i = 0; i < SIZE; i++){
        cin >> password[i];
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = i; j < SIZE; j++){
            if(ktra(password[i], password[j]) == 1) {
                cout << password[i].length() << " " << password[i][password[i].length()/2];
            }
        }
    }
    return 0;
}

