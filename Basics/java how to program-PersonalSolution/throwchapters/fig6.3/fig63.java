import java.util.Scanner;

class fig63 
{
         //declarete three numbers
        static double num1 = 0;
        static double num2 = 0;
        static double num3 = 0;
 
    public static void main(String [] args)
      {
         fig63.read();
         System.out.println("The result is: " + max(num1,num2,num3));



      }//end of main method 

  static void read()                    //method to read the three numbers/values
      {
                      //reading numbers
         System.out.println("Please enter the numbers which to compare with: ");
         //read first value
         Scanner input1 = new Scanner(System.in);
         num1 = input1.nextDouble();

         //read second value
         System.out.println("Please enter the next value: ");
         Scanner input2 = new Scanner(System.in);
         num2 = input2.nextDouble();
          
         //read third value
         System.out.println("PLease enter the last value: ");
         Scanner input3 = new Scanner(System.in);
         num3 = input3.nextDouble();
      }//end of read method


   static double max(double num1,double num2,double num3) 
     {
         double maxValue = num1;
         if(num2 > maxValue) maxValue = num2;
         if(num3 > maxValue) maxValue = num3;
         return maxValue;

     }//end of max method

}//end of the class   