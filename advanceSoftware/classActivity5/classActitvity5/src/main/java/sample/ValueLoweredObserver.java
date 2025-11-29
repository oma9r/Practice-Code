package sample;

public class ValueLoweredObserver extends Observer {
    public ValueLoweredObserver(Subject subject) {
        super(subject);
    }

    public void update(int newType, int oldValue) {
        if(oldValue < newType)
        {
            System.out.println("ValueLoweredObserver: " + newType + " is lower than " + oldValue);
        }
    }
}
