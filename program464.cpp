#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        // Logics
        bool LinearSearch(int iNo)
        {
            int iCnt = 0;
            bool bFlag = false;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    bFlag = true;
                    break;
                }
            }
            return bFlag;
        }

        bool Bidirectional(int iNo)
        {
            int iStart =  0;
            int iEnd = iSize - 1;
            bool bFlag = false;

            while (iStart <= iEnd)
            {
                if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
                {
                    bFlag = true;
                    break;
                }
                iStart++;
                iEnd--;
            } 
            return bFlag;
        }
        // Note : Array should be sorted
        bool BinarySearch(int iNo)
        {
            bool bFlag = false;
            int iStart =  0;
            int iEnd = iSize - 1, iMid = 0;

            while (iStart <= iEnd)
            {
                iMid = iStart + (iEnd - iStart) / 2;

                if(Arr[iMid] == iNo)
                {
                    bFlag = true;
                    break;
                }
                else if(Arr[iMid] < iNo)
                {
                    iStart = iMid + 1;
                }
                else if(Arr[iMid] > iNo)
                {
                    iEnd = iMid - 1;
                }
            } 
            return bFlag;
        }

        void Reverse()
        {
            int iStart = 0;
            int iEnd = iSize - 1;
            int iTemp = 0;

            while(iStart < iEnd)
            {
                iTemp = Arr[iStart];
                Arr[iStart] = Arr[iEnd];
                Arr[iEnd] = iTemp;

                iStart++;
                iEnd--;
            }
        }

        void BubbleSort()
        {
            int iTemp = 0;
            int i = 0, j = 0;

            for(i = 0; i < iSize; i++)
            {
                for(j = 0; j < iSize - 1; j++)
                {
                    if(Arr[j] > Arr[j+1])
                    {
                        iTemp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = iTemp;
                    }
                }
            }
        }

        void SelectionSort()
        {
            int min_index = 0;
            int i = 0, j = 0;
            int iTemp = 0;

            for(i = 0; i < iSize-1; i++)
            {
                min_index = i;

                for(j = i+1; j < iSize; j++)
                {
                    if(Arr[j] < Arr[min_index])
                    {
                       min_index = j;
                    }
                        iTemp = Arr[j];
                        Arr[j] = Arr[min_index];
                        Arr[min_index] = iTemp;
                }
            }
        }

        void InsertionSort()
        {
            int selected = 0;
            int i = 0, j = 0;
            

            for(i = 1; i < iSize; i++)
            {
                min_index = i;

                for(j = i-1, selected = Arr[i]; ((j >= 0) && (Arr[j] > selected)); j++)
                {
                    Arr[j+1] = Arr[j];
                }
                Arr[j+1]
            }
        }

};  // End of class

int main()
{
    int iLength = 0;
    int iValue = 0;
    bool bret = false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    //cout<<"Enter the element that u want to search : \n";
    //cin>>iValue;

    aobj->BubbleSort();
    aobj->Display();

    /*if(bret == true)
    {
        cout<<"Element is present in the array";
    }
    else
    {
        cout<<"There is no such element : ";
    }*/

    delete aobj;

    return 0;
}