import javax.swing.JOptionPane;
public class Min
    {
          public static void main(String [] args)
              {

                  float [] val = new float[3];
                  
                  float result;
                  String input2;
            do{
                     
                 for(int i=0;i<3;i++)
                  {
                       String input = JOptionPane.showInputDialog(i+1 + " - Enter the value you want");
                       
                       val[i] = Float.parseFloat(input);
                   };

                   result = Math.min(val[0],val[1]);


                   if(val[2] < result)
                       {
                          result = val[2];

                        }

                   JOptionPane.showMessageDialog(null,"The Result you want: " + result + "\nThanks for using!","Result",JOptionPane.INFORMATION_MESSAGE);

                   input2 = JOptionPane.showInputDialog("Would you do it again?");     
              
                }while(input2 == "yes");

                  JOptionPane.showMessageDialog(null,"Thanks for using!","Welcome!",JOptionPane.INFORMATION_MESSAGE);
            }
     }