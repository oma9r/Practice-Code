import java.awt.Graphics;
import javax.swing.JPanel;

public class Circle extends JPanel
{
      
       //attrubites 

       private int numOfCircles;

       //constructors 

       public Circle(int n)
        {
            this.numOfCircles = n;
         }

        public void paintComponent(Graphics g)
          {
              super.paintComponent(g);

              int radius = 10;

              for(int i=0;i < numOfCircles ; i++)
                {

                     
                     g.drawOval(i* 10,i* 10,i+i*10,i+i*10); // oval(x,y,width,length)
                }
           }
  }

