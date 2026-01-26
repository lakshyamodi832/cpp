#include<iostream>
using namespace std;

int max(int arr[], int n){
    int lar = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > lar){
            lar = arr[i];
        }
    }
    return lar;
}

int main(){

    int a[] = {1, 2, 3, 6, 5, 4};

    int n = sizeof(a[0]);

    cout<<"Maximum: "<<max(a, n)<<endl;;

    return 0;
}