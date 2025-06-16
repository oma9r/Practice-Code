import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class ShapesTest
 {
     public static void main(String [] args)
       {
          String input = JOptionPane.showInputDialog("Enter 1 to draw Rectangle\nEnter 2 to draw Oval");

          int choice = Integer.parseInt(input);
          
 
          Shapes shape = new Shapes(choice);
          Shapes shape1 = new Shapes(choice);
          
         JFrame application = new JFrame();
         
         application.add( shape );
         
         application.setSize(100,100);

         application.setVisible(true);

         JFrame application1 = new JFrame();
         
         application1.add( shape1 );
         
         application1.setSize(250,250);
         application1.setVisible(true);

       }
}
         
          
           