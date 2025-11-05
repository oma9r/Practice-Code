import javax.swing.JOptionPane;
public class SmallestTest
    {

         public static void main(String [] args)
           {
                String inputN = JOptionPane.showInputDialog("Please enter the number of the numbers you want");
                int numOfNumbers = Integer.parseInt(inputN);
                
                int [] numbers = new int[numOfNumbers];                   

                Smallest test1 = new Smallest(numOfNumbers);

                for(int i=0; i<numbers.length;i++)
                  {
                     String input1 = JOptionPane.showInputDialog(i+1 + "- Enter the number: ");
                     numbers[i] = Integer.parseInt(input1);
                  }

                
            
                JOptionPane.showMessageDialog(null,"The smallest value: " + test1.cal(numbers),"The Result",JOptionPane.INFORMATION_MESSAGE);
                //System.out.printf("The smallest value: %d",test1.cal(numbers));
          }
}