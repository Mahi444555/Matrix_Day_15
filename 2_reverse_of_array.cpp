//program to reverse the array elements...
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<endl<<"enter the n: ";
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cout<<endl<<"enter the ["<<i <<" ] elements";
        cin>>arr[i];
    }

    cout<<endl<<endl<<"array elements are...";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }

    cout<<endl<<"reversal of array elements are..."<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<"\t"<<arr[i];
    }

}