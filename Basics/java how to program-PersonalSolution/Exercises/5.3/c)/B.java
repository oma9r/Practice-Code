public class B
  {
           //attrubites 

           private int max,min;

           //constructos 

           public B()
            {
                this.max = 0;
                this.min = 0;
            }

           public B(int max,int min)
            {
                this.max = max;
                this.min = min;
             }

            //methods 


            public void print()
             {
                int i = 1;

                while(i<=this.max)
                  {
                      System.out.print(i + "\t");
                      if(i%5==0) System.out.println("");
                      i++;
                  }
              }

      }//end of class
 