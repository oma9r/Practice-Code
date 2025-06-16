public class B
  {
  
      private int sum;
      private int count;

      public B()
       {
          this.sum = 0;
          this.count = 0;
       }

       public int getSum()
       {
           for(int i=0;i<=99;i++)
               {
                  this.sum+=i;
                  this.count++;
               }

           return this.sum;
       }

       public int getCount()
        {
             return this.count;
        }

    }//end of class 
 