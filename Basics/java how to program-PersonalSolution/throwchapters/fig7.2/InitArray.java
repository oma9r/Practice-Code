import javax.swing.JOptionPane;

public class InitArray{

       
       
        public static void main(String [] args) 
                {
                    
                       int [] array = new int[10];
                         
                       
            JOptionPane.showMessageDialog(null,"Index   Value \n","Message",JOptionPane.INFORMATION_MESSAGE);
                       
                        for(int i = 0;i<array.length;i++)
                           {

                               System.out.printf( "%5d%8d\n", i, array[ i ] );
                            }
              }
}
