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
class ElectricCar : public Car {
    private:
        int batteryRange;
    public:
    void setBatteryRange(int range) {
        batteryRange = range;
    }
    int getBatteryRange() const {
        return batteryRange;
    }
};
void printCarDetails(const Car &car) {
    cout << "Car Details: " << car.getBrand() << " " 
    << car.getModel() << " " << car.getYear() << endl;
}
int main() {
    ElectricCar myElectricCar;
    myElectricCar.setBrand("Tesla");
    myElectricCar.setModel("Model S");
    myElectricCar.setYear(2022);
    myElectricCar.setBatteryRange(400);
    printCarDetails(myElectricCar);
    return 0;
}