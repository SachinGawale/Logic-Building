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

        int CountCpital()
        {
            int iCnt = 0;
            char *temp = str;

            while(*str != '\0')
            {
                if(*str >= 'A' && *str <= 'z')
                {
                    iCnt++;
                }
                temp++;
            }
            return iCnt;
        }
};

int main()
{
    String *sobj1 = new String[30];
    int iRet = 0;

    sobj1->Accept();
    sobj1->Display();

    iRet = sobj1->CountCpital();

    cout<<"Capital count is: "<<iRet<<endl;

    sobj1->Display();
    
    delete sobj1;

    return 0;
}