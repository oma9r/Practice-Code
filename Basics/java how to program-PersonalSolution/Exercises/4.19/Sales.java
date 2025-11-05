public class Sales
{
    //attrubites--------------------------------------------------------------- 

      private int item;
      private double sales;
      private double rate;
      //private double sum;

    //methods--------------------------------------------------------------------

          //constructors------------------- 

      public Sales()  //default 
       {
           //initialize fields 

           this.item = 0;
           this.sales = 0;
           this.rate = 0.09;
           

       }

      public Sales(int item, double sales) //user-defined 
        {
             this.item = item;
             this.sales = sales;
             this.rate = 0.09;
        }

       public void setRate(double rate)
        {
           this.rate = rate;
        }

        public double getRate()
         {
            return this.rate;
         }
 
        public void setSales(double sales)
          {
             this.sales = sales;
          }

          public double getSales()
           {
              return this.sales;
           }
         

       public double ratio() 
       {
          return (this.rate * this.sales);
       }

        
        public double sum()
          {
             return 200 + this.sales * rate; 
          }//end of method

}//end of class 
        

             