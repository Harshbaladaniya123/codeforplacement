#include<iostream>
using namespace std;

int swap(int arr[],int n){

    for(int i=0;i<n-1;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){

    int arr[4] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    cout<<*arr<<endl;
    swap(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }


}