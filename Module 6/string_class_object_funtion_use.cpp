#include <bits/stdc++.h>

using namespace std;
class person {
   public: string name;
   int age;
   string country;

   person(string nm, int ag, string cnt) {
      name = nm;
      age = ag;
      country = cnt;
   }

   void print() {
      cout << name << " " << age << " " << country << endl;
   }
};
int main() {
   string name = "Md Zobaer Islam";
   string country = "Bangladesh";
   person saikot(name, 29, country);

   string name1 = "Falguni Ahmed";
   string country2 = "Bangladesh";
   person limu(name1, 24, country2);

   saikot.print();
   limu.print();

   return 0;
}