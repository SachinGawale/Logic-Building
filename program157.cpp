#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;

    public:
        String()
        {
            iSize = 30;
            str = new char[30];
        }
        String(int x)
        {
            iSize = x;
            str = new char[iSize];
        }

        ~String()
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"Enter the string : "<<endl;
            cin.getline(str, iSize);
        }

        void Display()
        {
            cout<<"String is : "<<str<<endl;
        }


};

int main()
{
    String sobj[30];

    sobj->Accept();
    sobj->Display();

    return 0;
}