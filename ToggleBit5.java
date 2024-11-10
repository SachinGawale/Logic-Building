// Write a java program which accept one number from user & toggle contents of first and last nibble of the number. Return modified number. (nibble is a group of four bits)

import java.util.*;

class ToggleBit5
{
    public static int ToggleBit(int iNo)
    {
        int iFirstNibble = iNo & 0xF;
        int iLastNibble = (iNo >> 28) & 0xF;

        int toggledFirstNibble = iFirstNibble ^ 0xF;
        int toggledLastNibble = iLastNibble ^ 0xF;

        int mask = 0xF000000F;

        iNo = iNo & mask;

        iNo = iNo | (toggledFirstNibble | (toggledLastNibble << 28));

        return iNo;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iRet = 0;
       
        System.out.println("Enter number : ");
        iNum = sobj.nextInt();

        iRet = ToggleBit(iNum);
        System.out.println("Modified number is : "+iRet);
        
        sobj.close();
    }
}