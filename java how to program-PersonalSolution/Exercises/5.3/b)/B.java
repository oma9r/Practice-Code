public class B
  {
      //attributes

       private double base;
       private double power;

      //constructors 

       public B()
        {
           this.base = 0;
           this.power = 0;
        }

       public B(double base,double power)
        {
            this.base = base;
            this.power = power;
        }

        //methods 

        public double Calculate()
          { 
              return Math.pow(this.base,this.power);
          }

   }//end of class