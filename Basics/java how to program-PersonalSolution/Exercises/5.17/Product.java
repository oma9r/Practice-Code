import java.util.Scanner;
import javax.swing.JOptionPane;
public class Product 
{
   
     public static void main(String [] args)
          {
              String number = JOptionPane.showInputDialog("Enter the number of product you want to buy: ");

              int num = Integer.parseInt(number);
              
              double [] quntity = new double[num];

              int [] numbers = new int[num];
              double sum = 0;

              for(int i=0;i<numbers.length;i++)
               {
                  String productNumber = JOptionPane.showInputDialog(i+1 + " - Enter the product number: ");
                  String quntityNumber = JOptionPane.showInputDialog("Enter the quntity of the previous product: ");

                  numbers[i] = Integer.parseInt(productNumber);
                  quntity[i] = Double.parseDouble(quntityNumber);

                  switch(numbers[i])
                     {
                        case 1: 
                        quntity[i] = 2.98 * quntity[i];
                        break;
                        case 2: 
                        quntity[i] = 4.50 * quntity[i];
                        break;
                        case 3: 
                        quntity[i] = 3.98 * quntity[i];
                        break;
                        case 4: 
                        quntity[i] = 4.49 * quntity[i];
                        break;
                        case 5: 
                        quntity[i] = 6.87 * quntity[i];
                        break;
                     }

                  sum+=quntity[i];
              }

             String formattedSum = String.format("%.2f", sum);

           JOptionPane.showMessageDialog(null,"The sum of products: " + formattedSum,"Result",JOptionPane.INFORMATION_MESSAGE);
       }
}

               


                
               