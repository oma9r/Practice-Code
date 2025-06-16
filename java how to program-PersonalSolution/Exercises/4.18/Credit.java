import java.util.Scanner;
public class Credit
   {
//attrubits------------------------------------------------------------------------ 
   
       private int balance;
       private int id;
       private int charged;
       private int credit;
       private int perCredit;

 //methods----------------------------------------------------------------------
     
 //constructors*****************************
      
      public Credit()
       {
          this.balance = 0;
          this.id = 0;
          this.charged = 0;
          this.credit = 0;
          this.perCredit = 0;

               System.out.print("enter your id: ");
               Scanner input1 = new Scanner(System.in);
               this.id = input1.nextInt();

               System.out.print("enter your balance : ");
               Scanner input2 = new Scanner(System.in);
               this.balance = input2.nextInt();

               System.out.print("enter your perCredit(Optional and if it didn't add, it will make it eqaul to 0 automatilcy: ");
               Scanner input3 = new Scanner(System.in);
               this.balance = input3.nextInt();


       }

       public Credit(int balance, int id, int charged, int credit,int perCredit)
          {
               this.balance = balance;
               this.id = id;
               this.charged = charged;
               this.credit = credit;
               this.perCredit = perCredit;
          }

 //setter and getter methods****************************


     public void setId(int id)
       {
          this.id = id;
       }

     public int getId()
       {
          return this.id;
       }


      public void setBalance(int balance)
       {
           this.balance = balance;
       }

       public int getBalance()
        {
           return this.balance;
         }

        
         public void setCharged( int charged)
           {
              this.charged = charged;
            }

         public int getCharged()
          {
             return this.charged;
          }

          
          public void setCredit(int credit)
            {
               this.credit = credit;
            }

           public int getCredit()
            {
               return this.credit;
            }
             
             public void setPerCredit(int perCredit)
            {
               this.perCredit = perCredit;
            }

           public int getPerCredit()
            {
               return this.perCredit;
            }

 //the other methods***************************************************************


       public void printDetails()
            {
              System.out.println("The balance: " + this.balance + "\nThe id: " + this.id);
             }

        public void addCharges()
           {
               System.out.print("Enter the number: ");
               Scanner input1 = new Scanner(System.in);
               int charges = input1.nextInt();
               this.balance+= charges;
                System.out.println("Done!");
               
            }

          public void useCredits()
            {
               System.out.print("Enter the number: ");
               Scanner input1 = new Scanner(System.in);
               int credit = input1.nextInt();
                if( this.balance > credit)
                    {
                      if(this.perCredit > 0)
                     {
                       if(this.perCredit > credit)
                          {
                             this.balance -= credit;
                             System.out.println("Done!");
                           }
                        else
                         {
                            System.out.println("Credit limit exceeded");
                         }
                      }
                     }

                  else
                   {
                         System.out.println("sorry,we can't use credits because the balance is not enough for your request");
                    }

              }

 
       
 }//end of class
        
                  