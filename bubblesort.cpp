#include<iostream>
using namespace std;

int main(){
      int i,j;
      int n=10;
      int arr[n] = {2,1,5,6,7,3,4,9,8,10};
      
      for(i=0;i<n-1;i++){
        for(j=i;j<n-1;j++){

            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
      }
      for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
}