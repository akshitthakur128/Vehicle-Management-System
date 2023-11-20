# Vehicle Management System

This C++ project demonstrates several Object-Oriented Programming (OOP) concepts for managing vehicle information. The primary concepts employed are:

## Encapsulation

The use of private and public access specifiers in the Vehicle, Car, and ToyotaCar classes encapsulates the data (make, model, year, numDoor, trimLevel) within the classes. The private members are not directly accessible from outside the class, promoting data hiding.

## Inheritance

The Car and ToyotaCar classes inherit from the Vehicle and Car classes, respectively, using the public keyword. Inheritance allows the derived classes to reuse and extend the functionalities of the base classes. For example, Car inherits the inputData and display functions from Vehicle.

## Polymorphism

Function overriding is used for polymorphism. The inputData and display functions are overridden in the derived classes (Car and ToyotaCar). This allows the use of the same function names across different levels of the class hierarchy, providing a consistent interface while allowing for specific implementations.

## Abstraction

The Vehicle, Car, and ToyotaCar classes provide a level of abstraction by hiding the internal details of their implementations. Users interact with the public interface (inputData and display methods) without needing to know the specific implementation details.

Feel free to explore the code to understand how these OOP concepts are implemented in the context of managing vehicle information.
