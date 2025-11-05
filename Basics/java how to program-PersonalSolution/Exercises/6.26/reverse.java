public class reverse
   {


            private int degree;
            private int value;
            private int value1;
            private int value2;

           public reverse()
              {

                   degree = 0;
                    value = 0;
                    value1 = 0;
                    value2 = 0;
              }


            public int method1(int value)
               {

                    this.value1 = value2 = value;
                    int result = 0;
                    
                    
                      while(value1>0)
                     {
                            value1 = value1/10;
                            degree++;
                     }

                     int degree1 = degree;

                       int [] array1 = new int [degree];

                     for(int i=1;i<=degree;i++)
                      {
                           array1[i-1] = value2 % (10 * i);
                      }

                      for(int i=0;i<degree1;i++)
                       {
                          
                           for(int j=1; j<=degree;j++) { result+= array1[j-1] *j; }
                           degree--;
                        }

                return result;

                     
                      
               }
       }


                    


              