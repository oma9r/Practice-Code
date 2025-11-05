import java.util.Scanner;
public class A
  {
         public static void main(String [] args)
          {
              System.out.println("Enter the Base: ");
              Scanner input1 = new Scanner(System.in);
                 
              double base = input1.nextDouble();

              System.out.println("Enter the Power: ");
              Scanner input2 = new Scanner(System.in);
              
              double power = input2.nextDouble();

              

              B class1 = new B(base,power);

              System.out.printf("The result: %.2f",class1.Calculate());
         }//end of main

  }//end of class