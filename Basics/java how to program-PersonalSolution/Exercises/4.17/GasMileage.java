import java.util.Scanner;

class GasMileage 
{
   public static void main(String [] args)
    { 
       int miles,gallons,trips;
 
       System.out.println("please enter your data: miles,gallons & trips numbers: \n the number of miles: ");

       Scanner input1 = new Scanner(System.in);

       trips = input1.nextInt();
        
        while(trips>0)
         {
 
            System.out.println("Miles number: ");
            Scanner input2 = new Scanner(System.in);
            miles = input2.nextInt();
            System.out.println("Gallons number: ");
            Scanner input3 = new Scanner(System.in);
            gallons = input3.nextInt();
            
            System.out.println("The number of trip: " + trips + "\nAverge of this trip: " + Calculate.cal(miles,gallons));
            trips--;

          }//end of while


       
    }//end of method
}//end of class
              