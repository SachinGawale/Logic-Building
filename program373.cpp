#include<iostream>
using namespace std;

class array
{
    public:
        int *Arr;
        int Size;

        Array(int Length);

        ~Array();
        

        void Accept();

        void Display();
       
};

Array(int Length)
{
    Size = Length;
    Arr = new int [Size];
}

~Array()
{
    delete []Arr;
}

void Accept()
{
    cout<<"E nter the elements : \n";
    int iCnt = 0;

    for (iCnt = 0; iCnt < Size; iCnt)
    {
        cin>>Arr[iCnt];
    }
}

void Display()
{
    cout<<"Elements of the array are : \n";
    int iCnt = 0;

    for (iCnt = 0; iCnt < Size; iCnt)
    {
        cin>>Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{

    Array obj[5];

    obj.Accept():
    obj.Display();

    return 0;
}