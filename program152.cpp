#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr; // int *Arr;
        int iSize;

    public:
        Array(int x)     // parameterized constructor
        {
            iSize = x;
            Arr = new int[iSize];
        }
        ~Array()     // Destructor
        {
            delete []Arr;
        }
        void Accept()      // member function
        {
            int iCnt = 0;
            
            cout<<"please enter the elements : "<<endl;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            
        }
};

int main()
{
    int iLength = 0, iRet = 0;

    cout<<"Enter the number of elements u  want to store: "<<endl;
    cin>>iLength;

    Array aobj = new (iLength);

    aobj.Accept();
    aobj.iSize();

    delete aobj;

    return 0;
}