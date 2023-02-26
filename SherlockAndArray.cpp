#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T > 0){
        int N;
        cin >> N;
        int a[N+1];

        for(int i = 1; i <= N; i++){
            cin >> a[i];
        }

        int sumLeft[N+1], sumRight[N+1];
        sumLeft[1] = a[1];
        sumRight[1] = a[N];

        for(int i = 2; i <= N; i++){
            sumLeft[i] = sumLeft[i - 1] + a[i];
            sumRight[i] = sumRight[i - 1] + a[N - i + 1];
        }

        bool check = false;

        for(int i = 1; i <= N; i++){
            if(sumLeft[i] == sumRight[N - i + 1]){
                cout << "YES\n";
                check = true;
                break;
            }
        }

        if(check == false) cout << "NO\n";
        T--;
    }
    return 0;
}
