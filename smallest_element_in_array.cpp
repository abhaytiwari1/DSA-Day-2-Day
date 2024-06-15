#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int smallestElement(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
};

int main(){

    int arr[]={42,35,3,5,7,11,15,18};
    int size = 8;
    cout<<"Smallest element in an array is: "<<smallestElement(arr,size);
    return 0;
}


//By sorting technique
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int smallestElement(int arr[],int n){
//     sort(arr, arr+n);
//     return arr[0];
// };

// int main(){

//     int arr[]={42,35,3,5,7,11,15,18};
//     int size = 8;
//     cout<<"Smallest element in an array is: "<<smallestElement(arr , size);
//     return 0;
// }