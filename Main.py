
def CheckEqual(iNo1, iNo2):

    if iNo1 == iNo2:
        return True
    else:
        return False

def main():

    print("Enter Numbers")

    iValue1 = int(input())
    iValue2 = int(input()) 

    bRet = CheckEqual(iValue1,iValue2)

    if bRet == True:
        print("Number are Equal")
    else:
        print("Number are Not Equal")

if __name__ == "__main__":
    main()