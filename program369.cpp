#include<iostream>
using namespace std;

int main()
{
    int Size = 0, iCnt = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements : "<<"\n";
    cin>>Size;

    ptr = new int[Size];

    cout<<"Enter the elements : "<<"\n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of th array are : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    delete []ptr;

    return 0;
}