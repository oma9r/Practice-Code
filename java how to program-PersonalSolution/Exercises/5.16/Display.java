import java.util.Scanner;
import javax.swing.JOptionPane;
public class Display
   {


         public static void main(String [] args)
           {
               JOptionPane.showMessageDialog(null,"Enter the number","Instruction",JOptionPane.INFORMATION_MESSAGE);
               

    
               int [] numbers = new int[5];
               int check;

               for(int i=0;i<5;i++)
                  {
                     
                    String input = JOptionPane.showInputDialog(i+1 + " - Enter the value: ");

                       check = Integer.parseInt(input);
                       if(check >= 1 && check<=30)
                         {
                            numbers[i] = check;
                         }

                       else {
                              System.out.println("Not accepted!");
                            }

                   }

 
              for(int i=0;i<5;i++)
               {

                  for(int j=0;j<numbers[i];j++) System.out.print("*");
                  System.out.println();
               }

       }
}


                