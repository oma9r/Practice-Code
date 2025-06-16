class c
{
  public static void main(String [] args)
   {
       
       for(int i=10;i>0;i--)
         {
             
             for(int j = 10 - i; j>0;j--) System.out.print(" ");
         
             for(int k=i;k>0;k--)
              {
                System.out.print("*");
                
              } //end of inner loop
            

           System.out.println();

         }//end of outter loop
    }//end of main method 

}// end of class c
                  