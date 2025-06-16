import java.util.Scanner;
public class Main
{
   public static void main(String [] args)
      {
           System.out.println("Welcome there!");
          

      do{
 
           int choice = 0;

           System.out.println("please choose one of our services\n" + "1.Creat new account\n" + "2.end task\n");

           Scanner input1 = new Scanner(System.in);

           choice = input1.nextInt();

           if(choice == 1)

          {
                 Credit account = new Credit();
           do{
               System.out.println("would you do something?\n" + "1.add charges\n" + "2.use credits\n" + "3.check balance\n" + "4.end task\n");
               int choice1 = 0;

               Scanner input2 = new Scanner(System.in);
               choice1 = input2.nextInt();
            
                if(choice1 == 1) 
                   {
                     account.addCharges();
                   }
                else if(choice1 == 2)
                  {
                     account.useCredits();
                  }

                 else if(choice1 == 3)
                   {
                      System.out.println("the balance of this account: " + account.getBalance());

                   }

                 else if(choice1 == 4)
                       {
                         System.out.println("thanks for getting!");
                           break;
                       }

              }while(true);//end of inner while 
               
            } 

            else if(choice == 2)
             {
               System.out.println("thanks for getting!");
                break;
             }

       }while(true);

    }//end of main method

}//end of class
