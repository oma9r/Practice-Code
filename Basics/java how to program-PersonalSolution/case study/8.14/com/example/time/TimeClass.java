package com.example.time;

/**
 * A simple class to represent time.
 * @author Omar Abumazen 
 */

  public class TimeClass
{

    private int hour;
    private int minute;
    private int second;

    public TimeClass(int hour,int minute,int second)
     {

          if(hour < 0 || hour >=24){
            throw new IllegalArgumentException("Hour must be 0-23");
          }

          if(minute < 0 || minute >=60){
              throw new IllegalArgumentException("Minute must be 0-59");
          }

          if(second < 0 || second >= 60){
              throw new IllegalArgumentException("Second must be 0-59");
           }

          this.hour = hour;
          this.minute = minute;
          this.second = second;
       }

         public String toUniversalString()
           {
              return String.format("%02d:%02d:%02d",hour,minute,second);
            }

         @Override
                   public String toString()
                    {
                      return String.format("%d:%02d:%02d %s",((hour==0||hour==12)? 12: hour%12),
                       minute,second,(hour < 12?"AM":"PM"));
                    }
   
}