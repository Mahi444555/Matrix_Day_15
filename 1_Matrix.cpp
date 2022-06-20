//program to print the matrix 
#include<iostream>
using namespace std;


int main()
{
    int i,j,k, row,col;
    cout<<endl<<"enter the row and columns...";
    cin>>row>>col;
    int arr[row][col];
    int arr1[row][col];
    int sum[row][col];

    int mul[row][col];


    cout<<endl<<endl<<"enter the elemnts in the 1st matrix...";
    for(i=0;i<row;i++)  //row : number of lines...
    {
        for(j=0;j<col;j++)      //col : number of columns
        {
            cin>>arr[i][j]; //here we accepting 2d array elements i,j th vlaue in array
        }

    }

    cout<<endl<<endl<<"Display the 1st matrix..."<<endl;
    for(i=0;i<row;i++)  //row : number of lines...
    {
        for(j=0;j<col;j++)      //col : number of columns
        {
            cout<<arr[i][j]<<"  "; //here we accepting 2d array elements i,j th vlaue in array
        }
        cout<<endl;

    }

    cout<<endl<<endl<<"enter the elemnts in the 2nd matrix...";
    for(i=0;i<row;i++)  //row : number of lines...
    {
        for(j=0;j<col;j++)      //col : number of columns
        {
            cin>>arr1[i][j]; //here we accepting 2d array elements i,j th vlaue in array
        }

    }


    cout<<endl<<endl<<"Display the 2nd matrix..."<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0; j<col;j++)
        {
            cout<<arr1[i][j]<<"  ";
        }
        cout<<endl;
    }

    /*
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }

    cout<<endl<<endl<<"Addition of 1st and 2nd matrix is..."<<endl;
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<sum[i][j]<<"  ";
        }
        cout<<endl;
    }
*/

    cout<<endl<<endl<<"multiplication of matrix is..."<<endl;
    for(i=0;i<row;i++)      //rows or lines
    {
        for(j=0;j<col;j++)      //columns
        { //int sum=0;
        mul[i][j]=0;
            for(k=0;k<col;k++) //it will always equal to no of columns or rows...
            {
                mul[i][j]= mul[i][j] + arr[i][k] * arr1[k][j];
               
            }
        }
    }


    cout<<endl<<endl<<"multiplication matrix is..."<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<mul[i][j]<<"  ";
        }
        cout<<endl;
    }

}