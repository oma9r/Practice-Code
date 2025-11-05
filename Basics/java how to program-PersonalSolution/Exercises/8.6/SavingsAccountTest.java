public class SavingsAccountTest
   {


           public static void main(String [] args)
             {
                 
                    SavingsAccount saver1 = new SavingsAccount(2000);
                    SavingsAccount saver2 = new SavingsAccount(3000);

                    System.out.println("********before anything "  + SavingsAccount.annualInterestRate);

                    SavingsAccount.annualInterestRate = 0.04;

                    System.out.println("********after editing 1 "  + SavingsAccount.annualInterestRate);

                    saver1.calculateMonthlyInterest();
                    saver2.calculateMonthlyInterest();

                    System.out.println("The saver 1 balance: " + saver1.getSavingsBalance());
                    System.out.println("The saver 2 balance: " + saver2.getSavingsBalance());


                    System.out.println("=====================================After modify=====================================");

                    SavingsAccount.modifyInterestRate(0.05);

                    System.out.println("********after editing 2 "  + SavingsAccount.annualInterestRate); 

                    saver1.calculateMonthlyInterest();
                    saver2.calculateMonthlyInterest();

                    System.out.println("The saver 1 balance: " + saver1.getSavingsBalance());
                    System.out.println("The saver 2 balance: " + saver2.getSavingsBalance());

                };
 };
                    
