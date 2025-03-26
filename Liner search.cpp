#include<iostream>
using namespace std;

int linersearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    int key;
    cout<<"Enter the number you want to search:";
    cin>>key;
    cout<<"Index is:"<<linersearch(arr,n,key);



    return 0;

}
