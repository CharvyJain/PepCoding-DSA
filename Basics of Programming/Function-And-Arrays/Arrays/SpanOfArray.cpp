/* 1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    int ans = max - min;
    cout << ans << endl;
}
