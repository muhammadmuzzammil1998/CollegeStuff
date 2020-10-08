class Sample {
   private:
    int x;
    double y;

   public:
    Sample() {
        this->x = 0, this->y = 0;
    }
    Sample(int x) {
        this->x = x, y = 0;
    }
    Sample(int x, int y) {
        this->x = x, this->y = y;
    }
    Sample(int x, double y) {
        this->x = x, this->y = y;
    }
};
