#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int tar)
{
    int start_val= 0;
    int end_val = n-1;

    while(start_val<=end_val)
    {
        //int mid = (start_val+end_val)/2;
        int mid= start_val + (end_val - start_val)/2; //to override overflow, prefer to use
        if(tar>arr[mid])
        {
            start_val= mid + 1;
        }
        else if(tar < arr[mid])
        {
            end_val= mid -1;
        }
        else{
            return mid;
        }

    }
    return -1;
}


int main()
{
    int n, arr[100];
    cout<<"Enter the size of array:";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int tar;
    cout<<"Enter the target value:";
    cin>>tar;

    //cout<<binarySearch(arr, n, tar);

    int result = binarySearch(arr, n, tar);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }
    return 0;
}
