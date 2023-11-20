#include<iostream>
using namespace std;

class Vehicle{
    private:
        string make, model;
        int year;
    public:
        void inputData(){
            cout << "Enter Company Name :";
            cin >> make;
            cout << "Enter Model :";
            cin >> model;
            cout << "Enter Year :";
            cin >> year;
        }
        void display(){
            cout << "Make: " << make << endl;
            cout << "Model: "<< model << endl;
            cout << "Year: " << year << endl;
        }
};
class Car : public Vehicle{
    private:
        int numDoor;
    public:
        void inputData(){
            Vehicle :: inputData();
            cout << "Enter number of Doors: ";
            cin >> numDoor;
        };
        void display(){
            Vehicle:: display();
            cout << "Number of Doors : " << numDoor << endl;
        }
};
class ToyotaCar : public Car{
    private:
        string trimLevel;
    public:
        void inputData(){
        Car :: inputData();
        cout << "Enter Trim Level: ";
        cin >> trimLevel;
        }
        void display(){
        Car::display();
        cout << "Trim Level: " << trimLevel<< endl;
        }
};

main(){
    ToyotaCar myCar;
    cout << "------------------INPUT CAR INFO -------------------------"<< endl;
    myCar.inputData();
    cout << "------------------MY CAR INFO-----------------------------" << endl;
    myCar.display();
}
