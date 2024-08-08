#include <iostream>
#include <string>
using namespace std;
class Car {
    private:
        string brand;
        string model;
        int year;
    public:
        void setBrand(const string &b) {
            brand = b;
        }
        void setModel(const string &m) {
            model = m;
        }
        void setYear(const int y) {
            year = y;
        }
        string getBrand() const {
            return brand;
        }
        string getModel() const {
            return model;
        }
        int getYear() const {
            return year;
        }
};
int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2020);
    cout << "Car Details: " << myCar.getBrand() << " " 
    << myCar.getModel() << " " << myCar.getYear() << endl;
    return 0;
}