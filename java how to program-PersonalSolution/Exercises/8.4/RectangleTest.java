public class RectangleTest
  {
         
       public static void main(String [] args)
          {
               
               Rectangle r1 = new Rectangle();
               
               System.out.println("Rectngle 1: ");
               System.out.println("Width: " + r1.getWidth() + "\nLength: " + r1.getLength());
               System.out.println("Primeter: " + r1.perimeter() + "\nArea: " + r1.area() );
               System.out.println("========================================================");


               Rectangle r2 = new Rectangle(3,4);
               
               System.out.println("Rectngle 2: ");
               System.out.println("Width: " + r2.getWidth() + "\nLength: " + r2.getLength());
               System.out.println("Primeter: " + r2.perimeter() + "\nArea: " + r2.area() );
               System.out.println("========================================================");

               Rectangle r3 = new Rectangle(-2,22);
               
               System.out.println("Rectngle 3: ");
               System.out.println("Width: " + r3.getWidth() + "\nLength: " + r3.getLength());
               System.out.println("Primeter: " + r3.perimeter() + "\nArea: " + r3.area() );

               System.out.println("========================================================");
            }
}
             