package sample;

public abstract class Observer {

    Subject subject;

    public abstract void update(int newType,int oldValue);

    Observer(Subject subject) {
        this.subject = subject;
    }

    Observer() {}
}
