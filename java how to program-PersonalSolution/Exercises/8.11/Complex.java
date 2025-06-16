public class Complex
  {
       
         //private final double i = Math.sqrt(-1); 
         private double realPart;
         private double imaginaryPart;

         public Complex()
          {
              this.setRealPart(0);
              this.setImaginaryPart(1);

          }

         public Complex(double realPart, double imaginaryPart)
          {
              this.setRealPart(realPart);
              this.setImaginaryPart(imaginaryPart);

          }


         public void setRealPart(double realPart)
          {
             this.realPart = realPart;
          }

         public void setImaginaryPart(double imaginaryPart)
          {
              this.imaginaryPart = imaginaryPart;
          }

          public double getRealPart()
           {
              return this.realPart;
           }

           public double getImaginaryPart()
            {
               return this.imaginaryPart;
            }

         public void addComplex(double realPart, double imaginaryPart)
          {
             this.setRealPart(this.realPart + realPart);
             this.setImaginaryPart(this.imaginaryPart + imaginaryPart);
          }

          public void subComplex(double realPart, double imaginaryPart)
          {
             this.setRealPart(this.realPart - realPart);
             this.setImaginaryPart(this.imaginaryPart - imaginaryPart);
          }

          public void print()
           {
              System.out.println("( " + this.getRealPart() + " , " + this.getImaginaryPart() + " )");
           }





}// end of class

          
           