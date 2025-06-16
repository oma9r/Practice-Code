import javax.swing.JOptionPane;
public class DigitTest
    {
        
           public static void main(String [] args)
             {
                 int flag = -1;
                do
                 {
                     
                  
                   String input = JOptionPane.showInputDialog("Enter the Dividend value");
                   
                   int a = Integer.parseInt(input);

                   input = JOptionPane.showInputDialog("Enter the Divisor");

                  int b = Integer.parseInt(input);

                   Digit di = new Digit(a,b);

                   input = JOptionPane.showInputDialog("Enter the process you want:\n1- Cal qutiont\n2- Cal reminder\n3 - Cal both\n4 - Exit");
                     
                   int choice = Integer.parseInt(input);

                   switch(choice) 
                     {
                        
                         case 1:
                                 JOptionPane.showMessageDialog(null,"The ques of " + a + " & " + b + " is " + di.qutCal() + "\nThanks!"); 
                                 //System.out.printf("The ques of %d & %d is %d\nThanks!",a,b,di.qutCal());
                                 break; 

                         case 2:
                                 JOptionPane.showMessageDialog(null,"The remidner of " + a + " & " + b + " is " + di.remCal() + "\nThanks!"); 
                                 //System.out.printf("The reminder of %d & %d is: %.2f\nThanks!",a,b,di.remCal());
                                 break;
     
                        
                         case 3:
                                 JOptionPane.showMessageDialog(null,"The ques and  remidner of " + a + " & " + b + "\nQues: " +di.qutCal() + "\nRem: " +  di.remCal() + "\nThanks!"); 
                                 //System.out.printf("The ques and reminder of %d & %d is\nQues: %d\nRem: %.2f!",a,b,di.qutCal(),di.remCal());
                                 break;

                         
                         default:
                                 JOptionPane.showMessageDialog(null,"Invlaide result!");
                                 input = JOptionPane.showInputDialog("Would you do it again?");
                                 if(input.equals("no") ) flag++;
                                 else{ };
                                 break;

                   }
                                 
                                 input = JOptionPane.showInputDialog("Would you do it again?");
                                 if(input.equals("no") )
                                    {
                                       flag++;
                                        JOptionPane.showMessageDialog(null,"Thanks for shaing!");
                                    }
                                          
                                 else{ };

                 }while(flag!=0);
              }
     }

