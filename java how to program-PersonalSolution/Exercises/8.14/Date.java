public class Date
  {

          private int day;
          private int month;
          private int year;
          private String monthString;

          public Date(int day,int month,int year)
            {
                this.setDay(day);
                this.setMonth(month);
                this.setYear(year);
                
            }

          public Date(int day, String month, int year)
            {
               this.setDay(day);
               this.setMonthString(month);
               this.setYear(year);
            }

          public Date(int day, int year)
            {
               this.setDay(day);
               this.setYear(year);
             }



           public void setDay(int day)
            {
               this.day = day;
            }

            public void setMonth(int month)
             {
                this.month = month;
             }

            public void setYear(int year)
             {
                 this.year = year;
             }

             public void setMonthString(String month)
              {
                   this.monthString = month;
              }

             public int getDay()
              {
                 return this.day;
              }
             
             public int getMonth()
              {
                  return this.month;
              }

              public int getYear()
              {
                 return this.year;
              }

              public String getMonthString()
               {
                  return this.monthString;
               }



           public void showFirstFormat()
              {
                  System.out.println(this.getMonth() + "/" + this.getDay() + "/" + this.getYear());
              }

           public void showSecondFormat()
              {
                  System.out.println(this.getMonthString() + " " + this.getDay() + ", " + this.getYear() );
              }
         
            public void showThirdFormat()
              {
                  int sum = 12 * this.getMonth() + this.getDay();
                  System.out.println(sum + " " + this.getYear() );
               }

 }