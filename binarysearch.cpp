#include<iostream>
using namespace std;

int binarysearch(int arr[],int n, int key){

    int start =0;
    int end=n-1;
    int mid=(start + end)/2;

    while(start<=end){
        if(arr[mid]==key)
        return mid;

        //go to rhs
        else if(arr[mid]<key){
        start=mid+1;   
        }

        else{
        end=mid-1;
        }

        mid=start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[50];
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter element to be found : ";
    cin>>key;
    int evenindex=binarysearch(arr,n,key);
    cout<<"element found at : "<<evenindex;
    return 0;
}
