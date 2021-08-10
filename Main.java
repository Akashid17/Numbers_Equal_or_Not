
import java.lang.*;
import java.io.*;

class Main
{
    public static void main(String args[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Numbers");

        int iValue1 = 0, iValue2 = 0;

        try
        {
            iValue1 = Integer.parseInt(bobj.readLine());
            iValue2 = Integer.parseInt(bobj.readLine());
        }
        catch(Exception eobj)
        {}

        ArithmeticX aobj = new ArithmeticX();

        boolean bRet = aobj.CheckEqual(iValue1,iValue2);

        if(bRet == true)
        {
            System.out.println("Number are Equal");
        }
        else
        {
            System.out.println("Number are Not Equal");
        }
    }
}

class ArithmeticX
{
    public boolean CheckEqual(int iNo1, int iNo2)
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
}