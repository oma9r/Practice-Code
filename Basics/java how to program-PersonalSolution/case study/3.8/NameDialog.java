import javax.swing.JOptionPane;
public class NameDialog
{
   public static void main(String [] args)
    {
        String answer = JOptionPane.showInputDialog("what's your name?");
        
        String message = String.format("welcome there: " + answer);

        JOptionPane.showMessageDialog(null,message);
    }
}