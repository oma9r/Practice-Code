import javax.swing.JOptionPane;
import java.util.Scanner;

public class DisplayTest 
    {


         public static void main(String [] args)
            {
                 
                    
                    String input = JOptionPane.showInputDialog("Enter the message you want");

                    char fill = input.charAt( 0 );

                    input = JOptionPane.showInputDialog("Enter the number of the character you entered");

                    int number = Integer.parseInt(input);

                    Display ob1 = new Display(number,fill);

                    ob1.draw();

             }
      }
                    
                    
                    
                    