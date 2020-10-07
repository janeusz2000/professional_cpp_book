#include <iostream>

using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base is dying" << endl;
    }
    virtual void someMethod()
    {
        cout << "This is base class" << endl;
    }

protected:
    int protectedInt_;

private:
    int privateInt;
};

class Derived : public Base
{
public:
    virtual ~Derived()
    {
        cout << "Derived is dying" << endl;
    }
    virtual void someMethod() override
    {
        cout << "this is derived method" << endl;
    }
};

class Dog
{
public:
    virtual void bark() { cout << "Woof!" << endl; }
    virtual void eat() { cout << "The dog ate." << endl; }
};

class Bird
{
public:
    virtual void chirp() { cout << "Chirp!" << endl; }
    virtual void eat() { cout << "The bird ate." << endl; }
};

class DogBird : public Dog, public Bird
{
public:
    void eat() override
    {
        Dog::eat();
    }
};

int main(int args, char *argv)
{
    // Base *basePtr = new Base;
    // Base *derivedPtr = new Derived;

    // basePtr->someMethod();
    // derivedPtr->someMethod();

    // delete basePtr;
    // delete derivedPtr;

    // basePtr = nullptr;
    // derivedPtr = nullptr;

    DogBird myConfusedAnimal;
    myConfusedAnimal.eat(); // // should be ambiguous error ;-)
    // now it works because of Dog::eat() in DogBird class method
}