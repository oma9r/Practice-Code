public class Prime 
{

             private int num;



                public Prime()
                  {

                      this.num = 1;
                   }




              public boolean isPrime(int val)
                {
                    this.num = val;
                     
                    for(int i=2;i<=Math.sqrt(this.num);i++)
                        {

                             if(num % i == 0)
                                {
                                      return false;
                                 }

                        }

                      return true;
                  }
     }