#include<iostream>
using namespace std;
int main(){
    /*
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }
    for(int i:arr){         //another way where it list all elemts in the array
    cout<<i<<endl;
    }
    */

    //2d array
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }


}