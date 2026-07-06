/*
    1. Write a program to find the sum of digits of a number.
*/
class Logic
{
    void SumOfDigits(int num)
    {
        int iDigit = 0, iSum = 0;
        while(num != 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }
        System.out.println(iSum);
    }

}

class AS17_Q1_SumOfDigitsNum
{
    public static void main(String A[])
    {
       Logic obj = new Logic();
       obj.SumOfDigits(1234); 
    }
}