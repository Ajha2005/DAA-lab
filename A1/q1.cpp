#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int low=0, high=n-1;
    while(low<high){
        int mid=(low+high) / 2;
        if(arr[mid]==key)
            return mid;
            else if(arr[mid]<key)
            low= mid+1;
        else high= mid-1;
        
    }
return 0;
}
int main(){
    int arr[]={2,5,8,12,16,23,38,56,72,91};
    int key=23; int n=10;
    int result= binarysearch(arr, n, key);
    cout<<"found at index:"<<""<<result;
}
