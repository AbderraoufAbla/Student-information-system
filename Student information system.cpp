#include <iostream>
#include <string>
using namespace std;

class Student {
   public:
      // Default constructor
      Student() {}

      // Parameterized constructor
      Student(string name, int age, string address, int rollNo) {
         this->name = name;
         this->age = age;
         this->address = address;
         this->rollNo = rollNo;
      }

      // Function to set student information
      void setInformation(string name, int age, string address, int rollNo) {
         this->name = name;
         this->age = age;
         this->address = address;
         this->rollNo = rollNo;
      }

      // Function to print student information
      void printInformation() {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
         cout << "Address: " << address << endl;
         cout << "Roll No: " << rollNo << endl;
      }

   private:
      string name;
      int age;
      string address;
      int rollNo;
};

int main() {
   Student s1("John", 20, "123 Main St, Anytown, USA", 1);
   s1.printInformation();

   Student s2;
   s2.setInformation("Jane", 19, "456 Elm St, Anytown, USA", 2);
   s2.printInformation();

   return 0;
}
