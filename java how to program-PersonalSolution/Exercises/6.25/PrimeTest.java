import javax.swing.JOptionPane;
public class PrimeTest
   {


          public static void main(String [] args)
             {

                    Prime p1 = new Prime();

                  
                     for(int j = 1;j<=1000;j++)
                      {

                            if(p1.isPrime(j)) JOptionPane.showMessageDialog(null,j + " this is a prime number","Result for " + j,JOptionPane.INFORMATION_MESSAGE);
                            //else JOptionPane.showMessageDialog(null,j + " this is not a prime number","Result for " + j,JOptionPane.INFORMATION_MESSAGE);

                       }
              }
}