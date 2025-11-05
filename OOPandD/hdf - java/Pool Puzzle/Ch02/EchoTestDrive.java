public class EchoTestDrive
{
   public static void main(String [] args)
   {  
       Echo e1 = new Echo();
       
       Echo e2 = new Echo( ); //first snippet
       
       int x = 0;


       while(x<4)  //secnod snippet
     {
         e1.hello();
         e1.count = e1.count + 1;              //third snippet******
         
         if(x>0)//forth snippet
        {
           e2.count = e2.count +1;
        }
         
          if(x>1)//fifth snippet
         {
            e2.count = e2.count + e1.count;
         }
      x = x+1;
     }
   System.out.println(e2.count);
 }//end of method 
}//end of class


class Echo// sixth snippet
{
    int count = 0;//seventh snippet
    void hello() // eigth snippet
    {
      System.out.println("helloooo... ");
    }//end of method
}//end of class 
        
    

        
        