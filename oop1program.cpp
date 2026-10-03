#include <iostream>
#include <string>
using namespace std;
class Person 
{ 
 public:
      string name;
      int age ;
      int id;

     void show()
    {
     cout << "name :" << name << endl;
     cout << "age :"  << age << endl ;
     cout << "id :" << id << endl;
    }
};
  int main()
  {
    Person p1;
    p1.name = "namal";
    p1.age = 12;
    p1.id = 76;
    p1.show();
   return 0;
}