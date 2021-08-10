
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Two Numbers\n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Number are Equal\n");
    }
    else
    {
        printf("Number are Not Equal\n");
    }

    return 0;
}