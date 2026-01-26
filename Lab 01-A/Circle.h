class Circle {
    public:
        Circle (double);
        Circle (Circle &);
        void setRadius (double &);
        double getRadius () const;
        double getArea() const;
        void print() const;
    private:
        double radius;
        static double PI;
};