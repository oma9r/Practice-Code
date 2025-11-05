public class Digit
     {


            private int a,b;

            public Digit(int a,int b)
             {
                 this.a = a;
                 this.b = b;

             }


             public int qutCal()
               {
                  return (a/b);
               };


             public double remCal()
               {
                  return (this.a - this.b*(a/b) );
               }

        }