import java.util.*;

class program474
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        System.out.println("Enter the word that we want to search : ");
        String Word = sobj.nextLine();

        Word = Word.trim();
        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");
    
        int iFrequency = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Word.equals(Arr[iCnt]))
            {
                iFrequency++;
            }
            
        }
        System.out.println(iFrequency);
    }
}