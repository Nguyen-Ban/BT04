#include <iostream>

using namespace std;

void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int main()
{
    int N;
    cin >> N;
    int A[N], B[N+1];

    nhap(A, N);
    nhap(B, N+1);

    const int SIZE = 101;
    int Mystery[SIZE] = {};

    for(int i = 0; i < N; i++){
        Mystery[A[i]] ++;
    }

    for(int i = 0; i < N+1; i++){
        Mystery[B[i]] --;
    }

    for(int i = 0; i <= 100; i++){
        if(Mystery[i] < 0) cout << i;
    }
    return 0;
}
