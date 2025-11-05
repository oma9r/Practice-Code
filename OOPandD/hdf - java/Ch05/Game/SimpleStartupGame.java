import java.util.Scanner;
import javax.swing.JOptionPane;

public class SimpleStartupGame
  {
       public static void main(String [] args)
        {
             int numOfGuesses;
             String input1 = JOptionPane.showInputDialog("Please enter the number of Guesses");
            numOfGuesses = Integer.parseInt(input1);
            
             int [] locations = new int[numOfGuesses];
 
            for(int i=0; i < numOfGuesses; i++)
                {
                   String input2 = JOptionPane.showInputDialog(i+1 + "- Enter the value: ");
                   locations[i] = Integer.parseInt(input2);
                }

              String printValues = "i\tlocations[i]\t";

               JOptionPane.showMessageDialog(null,"The value you eneter: ","Message",JOptionPane.INFORMATION_MESSAGE);  
               JOptionPane.showMessageDialog(null,printValues,"Message",JOptionPane.INFORMATION_MESSAGE);
      
               SimpleStartup S1 = new SimpleStartup(locations,numOfGuesses);
               String input3 = JOptionPane.showInputDialog("Enter the Value guess");
               int userGuess = Integer.parseInt(input3);
               S1.checkYourself(userGuess);
               JOptionPane.showMessageDialog(null,S1.checkYourself(userGuess),"Result",JOptionPane.INFORMATION_MESSAGE);
          }// end of main
  }//end of class