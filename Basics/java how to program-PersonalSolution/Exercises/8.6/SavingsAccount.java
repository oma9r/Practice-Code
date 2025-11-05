public class SavingsAccount
   {

            

            public static double annualInterestRate;
            private double savingsBalance;

            public SavingsAccount()
             {
                 this.setSavingsBalance(0);
                 SavingsAccount.annualInterestRate = 1;
             }

             public SavingsAccount(double savingsBalance)
              {
                 this.setSavingsBalance(savingsBalance);
                 SavingsAccount.annualInterestRate = 1;
              }

            public double getSavingsBalance()
             {
                return this.savingsBalance;
             }

            public void setSavingsBalance(double savingsBalance)
             {
                 this.savingsBalance = savingsBalance;
              }
    

            public void calculateMonthlyInterest()
              {
                 double result = this.savingsBalance * SavingsAccount.annualInterestRate * 12;

                   this.savingsBalance+= result;
                  
               
              }

             public static void modifyInterestRate(double annualInterestRate)
               {
                  SavingsAccount.annualInterestRate = annualInterestRate;
                }

}

                   