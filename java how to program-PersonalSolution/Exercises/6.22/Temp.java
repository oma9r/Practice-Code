public class Temp
   {

        private double cel;
        private double fah;

        
        public Temp(int type,double value)
             {

                 if(type == 1)
                   {
                      this.cel = value;
                      
                   }

                 else if(type == 2)
                   {
                      this.fah = value;
                   }

                 else if(type == 3) return;

             }


           public String cel()
              {
                 
                  
                   this.cel = 5.0 / 9.0 * ( this.fah - 32 );
                   String celF = String.format("%.2f",cel);
                   return celF;
              };

 
              public String fah()
              {
                 
                  this.fah = 5.0 / 9.0 * ( this.cel - 32 );
                  String fahF = String.format("%.2f",fah);
                  return fahF;
              };


     }

            

 
         


          


       