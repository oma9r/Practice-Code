public class Shuffle1
{
  public static void main(String [] args)
  {
    int x = 3;
    while(x > 0)
    {
      if(x>2)
       {
         System.out.print("a");
       }//end of if 
      
       x = x-1;
       System.out.print("-");
       
       if(x==2)
       {
         System.out.print("b c");
       }//end of if  

       x = x-1;
       System.out.print("-");
        
       if (x ==1 )
       {
         System.out.print("d");
         x-=1;
       }//end of if
    }//end of while
   }//end of main method
}//end of class