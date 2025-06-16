import java.util.Scanner;
public class SalesTest
{
     public static void main(String [] args)
      {
          
             Sales[] salesPerson = new Sales[4]; 

             int item = 0;
             double value = 0.0;
            for(int i=0; i<4;i++)
               {
                  System.out.print("enter the item & value: ");
                  Scanner input1 = new Scanner(System.in);
                  item = input1.nextInt();  
                  Scanner input2 = new Scanner(System.in);
                  value = input2.nextDouble();                 
                  salesPerson[i] = new Sales(item,value);

               }//end of loop 

              for(int i=0;i<4;i++)
                {  
                   System.out.println("The value of item: " + (i+1) + " The rate: " + salesPerson[i].getRate() + " The Value: " + salesPerson[i].getSales() +
                    " The ratio of the week: " + salesPerson[i].ratio() + " The sum of the week: " + salesPerson[i].sum() );
                   
                }





       }//end of main method

}//end of class     