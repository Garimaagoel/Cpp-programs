
#include<iostream>

using namespace std;


int linearsearch(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
            return i;
        }

        
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
    cout<<"enter element to be found : "<<endl;
    cin>>key;

cout<<linearsearch(arr,n,key)<<endl;
}
