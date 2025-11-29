package sample;

class ExternalWeatherAdapter {
    private ExternalWeatherAPI external;

    public ExternalWeatherAdapter(ExternalWeatherAPI external) {
        this.external = external;
    }

    public float getTemperatureInCelsius() {
        double f = external.fetchExternalReading();
        return (float)((f - 32) * 5.0 / 9.0);
    }
}

