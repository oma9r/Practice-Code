package sample;

import java.util.Observable;

public class ByTenChangedObserver extends Observer {
    public ByTenChangedObserver(Subject subject) {
        super(subject);
    }
    public void update(int newType,int oldValue) {
        if(newType - oldValue >= 10)
        {
            int result = newType - oldValue;
            System.out.println("ByTenChangedObserver: " + newType + " - " + oldValue + " = " + result);
        }
    }
}
