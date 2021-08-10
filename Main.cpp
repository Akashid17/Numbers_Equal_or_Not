
#include<iostream>

using namespace std;

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter Numbers\n";
    cin>>iValue1>>iValue2;

    bool bRet = CheckEqual(iValue1,iValue2);

    if(bRet == true)
    {
        cout<<"Numbers are Equal\n";
    }
    else
    {
        cout<<"Numbers are Not Equal\n";
    }

    return 0;
}