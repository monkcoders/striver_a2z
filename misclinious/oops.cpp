#include <iostream>
using namespace std;


//encapsulation - wrappingup of data members and member functions in a single unit such that not external environments can directly manipulate and access data.
//Used to protect the data from outside environment and can interact only using methods of the class.
//Access Modifiers are used to implement encapsulation


//abstraction - Its a method of only showing essential information to the user and hiding the unnecessary information.
//

//whichever class inherits this class, that class has to provide implementation for member function of this class
//abstract
class AbstractEmployee{
    virtual void AskForPromotion() = 0;//abstract function or pure virtual function
};

class Employee: AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;
    
public:
    Employee(string name,string cmpny,int age){
        Name = name;
        Company = cmpny;
        Age = age;
    }
    Employee(){

    }

    void IntroduceYourself(){
        cout<<"NAME "<<Name<<endl;
        cout<<"Company "<<Company<<endl;
        cout<<"Age "<<Age<<endl;
    }
    void setAge(int age){//setter
        Age = age;
    }

    int getAge(){//getter
        return Age;
    }

    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }

    void AskForPromotion(){
        if(Age>30){
            cout<<Name<<" got promoted "<<endl;
        }else{
            cout<<Name<<" sorry No promotion for you.";
        }
    }




};

int main()
{
    Employee emp1("Abhsihek","My company",21);
    Employee emp2;
    emp2.setAge(34);
    emp2.setName("Hello");
    emp2.setCompany("Hello");
    emp1.IntroduceYourself();
    emp2.IntroduceYourself();

    emp1.AskForPromotion();
    emp2.AskForPromotion();
    return 0;
}