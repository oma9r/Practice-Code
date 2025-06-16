class Rectangle
{
    private: 
    double length;
    double width;

    public: 
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;

    Rectangle operator+(const Rectangle&) const;

    Rectangle operator*(const Rectangle&) const;

    bool operator==(const Rectangle&) const;

    bool operator!=(const Rectangle&) const;


};