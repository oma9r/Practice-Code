public class Rectangle {


       private double length;
       private double width;


       public Rectangle()
        {
           this.setLength(1);
           this.setWidth(1);
        }

       public Rectangle(double l, double w)
         {
            this.setLength(l);
            this.setWidth(w);
         }

        public void setLength(double l)
         {
             if(l <= 0 || l >=20)
              {
                System.out.println("Sorry");
               throw new IllegalArgumentException();

            
               }
           else
           {
             this.length = l;
            }
        }

         public void setWidth(double w)
          {
             if(w <= 0 || w>=20)
               {
               System.out.println("Sorry");
               throw new IllegalArgumentException();
                
            
               }

              else
             {

             this.width = w;
             }
          }

         public double getWidth()
          {
              return this.width;
          }
      
         public double getLength()
           {
               return this.length;
           }

          public double perimeter()
           {
              return 2 * ( this.getWidth() + this.getLength() );
            }

          public double area()
           {
              return this.getWidth() * getLength();
           }

      }// end of class

         