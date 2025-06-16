public class PerfectTest
{


        public static void main(String [] args)
          {

               Perfect p1 = new Perfect();

                for(int i=1;i<=1000;i++)
                   {
                        
                        for(int j=2; j<= Math.sqrt(i);j++)
                            {
                              if( i %j == 0) {continue;}

                              else 
                                {
                                   p1.Test(i);
                                }
                       
                       
                            }
                    }
          }
}
                        