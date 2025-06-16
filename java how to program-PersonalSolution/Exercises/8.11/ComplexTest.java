public class ComplexTest
   {


          public static void main(String [] args)
            {
                 System.out.println("***********************Zero case****************");
                 Complex c1 = new Complex();
                 c1.print();
                 c1.addComplex(3.5,4);
                 c1.print();
                 c1.subComplex(2,3);
                 c1.print();
                 System.out.println("==============================");

                 System.out.println("*****************10,12**********************");
                 Complex c2 = new Complex(10,12);
                 c2.print();
                 c2.addComplex(3,3);
                 c2.print();
                 c2.subComplex(2,1);
                 c2.print();
                 System.out.println("==============================");



            }
  }
                 