import java.util.*;

class program480
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s","");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();
        int Frequency = 0;

        HashMap<Character, Integer> hobj = new HashMap<>();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(hobj.containsKey(Arr[iCnt]))
            {
                Frequency = hobj.get(Arr[iCnt]);
                hobj.put(Arr[iCnt], Frequency+1);
            }
            else
            {
                hobj.put(Arr[iCnt], 1);
            }
        }

        Set<Character> setobj = hobj.keySet();

        for(char ch : setobj)
        {
            System.out.println(ch + " occurs "+ hobj.get)
        }
        System.out.println(hobj);
    }
}