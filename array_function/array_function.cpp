#include<iostream>
using namespace std;
void arrr(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
int main(){
    int arr[15]={1,2};
    arrr(arr,15);
    return 0;
}