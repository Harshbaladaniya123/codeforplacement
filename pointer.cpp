#include<iostream>
using namespace std;

int point1(int *ptr){
     *ptr = *ptr + 1;
}

int main(){
   /* int a = 10;
    int *ptr = &a;
    int **ptr1 = &ptr;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr1;*/

   /* int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr[0];
    
    cout<<*arr<<endl;
    cout<<*ptr<<endl;*/

    int n=10;
    int *ptr = &n;

    point1(ptr);
    cout<<*ptr;
}