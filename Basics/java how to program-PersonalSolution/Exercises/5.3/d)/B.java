public class B
   {
           //attruibutes 

           private int min,max;
          
           //contructors

           public B()
            {
                this.min = 0;
                this.max = 0;

             }

            public B(int min,int max)
             {
                this.min = min;
                this.max = max;
              }


             //methods 

             public void print()
               {
                  for(int i=min;i<=max;i++)
                      {
                         System.out.print(i + "\t");
                         if(i%5==0) System.out.print("\n");
                       }
               }
   }//end of class B