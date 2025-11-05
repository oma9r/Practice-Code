import javax.swing.JFrame;
import javax.swing.JOptionPane
;
public class CircleTest
  {
        public static void main(String [] args)
         {
            String input = JOptionPane.showInputDialog("Enter the number of circuts you want");
            int N = Integer.parseInt( input );
            
            Circle c1 = new Circle(N);
           
            JFrame app1 = new JFrame();

            app1.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
            app1.add(c1);
            app1.setSize(1000,1000);
            app1.setVisible(true);

          }
}