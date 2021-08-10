
using System;

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");

		int iValue1 = Convert.ToInt32(Console.ReadLine());
		int iValue2 = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();

		bool bRet = aobj.CheckEqual(iValue1,iValue2);

		if(bRet == true)
		{
			Console.WriteLine("Number are Equal");
		}
		else
		{
			Console.WriteLine("Number are Not Equal");
		}
	}
}

class ArithmeticX
{
	public bool CheckEqual(int iNo1, int iNo2)
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