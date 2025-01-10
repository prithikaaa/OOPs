#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Virtual function to display information
    virtual void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    // Virtual function to get the type of the person
    virtual std::string getType() {
        return "Person";
    }
};

// Derived class Student
class Student : public Person {
private:
    std::string studentID;

public:
    Student(const std::string& n, int a, const std::string& id) : Person(n, a), studentID(id) {}

    // Override the display function for students
    void display() override {
        std::cout << "Student Information:" << std::endl;
        Person::display(); // Call the base class display
        std::cout << "Student ID: " << studentID << std::endl;
    }

    // Override the getType function for students
    std::string getType() override {
        return "Student";
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher(const std::string& n, int a, const std::string& subj) : Person(n, a), subject(subj) {}

    // Override the display function for teachers
    void display() override {
        std::cout << "Teacher Information:" << std::endl;
        Person::display(); // Call the base class display
        std::cout << "Subject: " << subject << std::endl;
    }

    // Override the getType function for teachers
    std::string getType() override {
        return "Teacher";
    }
};

int main() {
    // Create Person, Student, and Teacher objects
    Person person("John Doe", 30);
    Student student("Alice Smith", 20, "S12345");
    Teacher teacher("Mr. Johnson", 40, "Mathematics");

    // Display information for each object
    std::cout << "Information for " << person.getType() << ":" << std::endl;
    person.display();
    std::cout << std::endl;

    std::cout << "Information for " << student.getType() << ":" << std::endl;
    student.display();
    std::cout << std::endl;

    std::cout << "Information for " << teacher.getType() << ":" << std::endl;
    teacher.display();

    return 0;
}
*/
/*int sum(int arr[]){
   // cout<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0; i<3; i++){
        sum += arr[i];
    }
 return sum;
}*/
/*int main(){
    int n=90;
    int *p=0;
    p=&n;
    int *q=p;
    int arr[10];
    cout<<q<<endl;
    cout<<p<<endl;
    cout<<&arr[0]<<endl;
    int d[5]={2,5,13,17,1};
    cout<<d<<endl;
    cout<<*d<<endl;
    cout<<&d<<endl;
    cout<<&d[0]<<endl;
    int *p = &d[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    int n=9;
    int *p=&n;
    int l=(*p)++;
     cout<< l <<endl;
     cout<< *p <<endl;
    cout<< p <<endl;
    cout<< p++ <<endl;
     cout<< p++ <<endl;
}*/


//OPERATOR OVERLOADING
/*class B{
    public:
    int a;
    int operator+ (B object){
        int x = this -> a;
        int y = object.a;
        cout<< "prithika" <<endl;
        return (x-y); 

        return (a-object.a);
    }
   
    void operator() () {
        cout<<"bracket hai"<<a<<endl;
    }
    };
int main(){
    B obj1,obj2;
    obj1.a=7;
    obj2.a=5;
    int p= obj1 + obj2;
    cout<<p <<endl;
    obj1();

}*/
/*int main(){
    try{
        int a=9,b=0;
        if(b==0) throw 0;
        cout<< "div" << a/b<<endl;
    }
    catch(int x){
        cout<< x <<endl;
    }

}
