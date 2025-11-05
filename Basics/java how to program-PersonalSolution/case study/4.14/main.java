import javax.swing.JFrame;
//package p1;



public class main
   {
        public static void main(String [] args)
        {
           p1 panel = new p1();
           
           JFrame application = new JFrame();
           
           application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
           
           application.add(panel);
           application.setSize(25,250);
           application.setVisible(true);
         }//end of main
}//end of class






