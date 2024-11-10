#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    public:
        T No1;
        T No2;

    Arithmatic(T A, T B);
    T Addition();
    T Substraction();
};

 template <class T>
 Arithmatic<T> :: Arithmatic(T A, T B)
 {
    this->No1 = A;
    this->No2 = B;
 }

 template <class T>
 T Arithmatic<T> :: Addition()
 {
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
 }

 template <class T>
 T Arithmatic<T> :: Substraction()
 {
    T Ans = 0;
    Ans = No1 - No2;
    return Ans;
 }

int main()
{
    Arithmatic<int> obj1(11, 10);
    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj1.Substraction();
    cout<<"Substraction is : "<<Ret<<"\n";

    Arithmatic<float> obj2(11.8, 10.9);
    float fRet = 0;

    fRet = obj2.Addition();
    cout<<"Addition is : "<<fRet<<"\n";

    fRet = obj2.Substraction();
    cout<<"Substraction is : "<<fRet<<"\n";

    return 0;
}