/*1.You are given a number n, representing the size of array a.
2.You are given n distinct numbers, representing elements of array a.
3. You are given another number d.
4. You are required to check if d number exists in the array a and at what index (0 based). If found print the index, otherwise print -1.*/

#include<iostream>
using namespace std;

int fE (int* arr, int n, int d) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == d) {
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int d;
    cin >> d;
    
    cout << fE(arr, n, d) << endl;
    
    
}
