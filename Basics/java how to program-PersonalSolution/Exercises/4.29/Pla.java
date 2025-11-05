import java.util.Scanner;

public class Pla
{
   public static void main(String [] args)
    {
        int[] arr = new int[5];

       for(int i=0; i< 5;i++)
         {
            arr = new int[i]; 
            
            System.out.println("enter: ");
            
             Scanner input = new Scanner(System.in);
             
             arr[i] = input.nextInt();

         }

           boolean temp = true;

         for (int i=0; i<5;i++)
           {
              
              if(arr[i] == arr[i+1])
                {
                   System.out.println("this is plaaa");
                   temp = false;
                 }
           }
       if(temp) System.out.println("sorry we need to play again");
      }
}
             
            
           