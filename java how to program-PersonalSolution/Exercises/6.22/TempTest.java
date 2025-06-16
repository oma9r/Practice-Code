import javax.swing.JOptionPane;
public class TempTest
    {

           public static void main(String [] args)
              {

                  String input = JOptionPane.showInputDialog("Enter the type of the function you want to Display:\n1 - Celsius\n2 - Fahrenheit\n3 - Exit");
                  
                  int type = Integer.parseInt(input);
                
                  input = JOptionPane.showInputDialog("Enter the value of the temp: ");

                  double value = Double.parseDouble(input);

                  Temp temp1 = new Temp(type,value);

                  switch(type)
                    {

                        case 1: JOptionPane.showMessageDialog(null,temp1.cel()+"\nThanks for using","Result",JOptionPane.INFORMATION_MESSAGE);
                        break;

                        case 2: JOptionPane.showMessageDialog(null,temp1.fah()+"\nThanks for using","Result",JOptionPane.INFORMATION_MESSAGE);
                        break;

                        case 3: JOptionPane.showMessageDialog(null,"Thanks! for using","Message",JOptionPane.INFORMATION_MESSAGE);
                        break;
                    }
                }
       }
                  
                  