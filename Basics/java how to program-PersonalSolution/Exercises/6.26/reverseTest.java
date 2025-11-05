import javax.swing.JOptionPane;
public class reverseTest
   {


            public static void main(String [] args)
               {
                   String input2;

                    do{

                    String input1 = JOptionPane.showInputDialog("Enter the number you want: ");
                    


                     reverse r1 = new reverse();

                     int value = Integer.parseInt(input1);

                      
                    JOptionPane.showMessageDialog(null,"The Result: " + r1.method1(value),"Result",JOptionPane.INFORMATION_MESSAGE);

                    input2 = JOptionPane.showInputDialog("Would you do it again?");

                   }while(input2 == "yes");

                 

                 }

               
    }