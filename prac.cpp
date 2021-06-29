#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <typeinfo>
#define ll long long
using namespace std;

int main(){
    int n; //Number of elements in list
    cin >> n;
    int arr[n];
    for(int a = 0; a < n; a++){ //Takes all the elements as input
        cin >> arr[a];
    }

    for(int i = 0; i < n; i++){ //Sorting algorithm
        for(int j = 0; j < n; j++){
            if(arr[j] > arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "Sorted List:" << endl;
    for(int i = 0; i < 5; i++){ //Outputs sorted list
        cout << arr[i] << endl;
    }
}