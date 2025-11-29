package sample;

class PhoneAdapter implements Observer {
    private PhoneDisplay phone;

    public PhoneAdapter(PhoneDisplay phone) {
        this.phone = phone;
    }

    @Override
    public void update(float temp) {
        phone.show(temp);
    }
}
