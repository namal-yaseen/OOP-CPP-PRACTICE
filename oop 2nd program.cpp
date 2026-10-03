#include <iostream>
#include <string>
using namespace std;
class Person
{
   public:
         string name ;
         int age;
         int id ;
   Person()
   {
     cout << "constructor called: object created"<< endl;
   }
   ~ Person()
   {
     cout << " deconstructor called : object destroyed" << endl;
   }
   void show()
   {  
     cout << "name" << name << endl;
     cout << "age"  << age << endl;
     cout << "id"   << id << endl;
   }
};
int main()
{
 Person p1;
 p1.name = "namal";
 p1.age = 18;
 p1.id = 23;
 p1.show();
 return 0;
}