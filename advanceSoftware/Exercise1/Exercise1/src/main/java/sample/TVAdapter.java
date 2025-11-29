package sample;

class TVAdapter implements Observer {
    private TVDisplay tv;

    public TVAdapter(TVDisplay tv) {
        this.tv = tv;
    }

    @Override
    public void update(float temp) {
        tv.displayWeather(temp);
    }
}

