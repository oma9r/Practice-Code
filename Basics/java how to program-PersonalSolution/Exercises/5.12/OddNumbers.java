

class OddNumbers
{
   public static void main(String [] args)
   {
      int prd = 1;
      for(int i=0;i<16;i++)
         {
            if(i%2==1)
                {
                  prd*=i;
                }
         }
      System.out.println("the product is: " + prd);
   }//end of method
}//end of class