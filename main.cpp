#include <iostream>
#include<string.h>
using namespace std;

class Item {
  private:
    int itemCode;
    char name[20];
    float price;
  public:

  void setItemCode(int i);
  void setName(char n[]);
  void setPrice(float p);

  int getItemCode();
  char* getName();
  float getPrice();
  void display();

};

  void Item::setItemCode(int i){
    itemCode = i;
  }
  void Item::setName(char n[]) {
    strcpy(name, n);
  }
  void Item::setPrice(float p){
    price = p;
  }
  int Item::getItemCode() {
       return itemCode;
    }
    // don't worry about this
     char* Item::getName() {
        return name;
     }
     float Item::getPrice() {
        return price;
     }
     void Item::display() {
       cout << itemCode << endl;
       cout << name << endl;
       cout << price << endl;
     }

int main() {
  Item p;
  p.setName ("Eggs");
  p.setItemCode(100);
  p.setPrice(25.5);
  p.display();

  Item i2;
  char itemname[20];
  int code;
  float price;
  cout << "Enter Item Code :";
  cin >> code;
  cout << "Enter Item Name :";
  cin >> itemname;
  cout << "Enter the price :";
  cin >> price;

  i2.setItemCode(code);
  i2.setName(itemname);
  i2.setPrice(price);

  i2.display();

   cout << "Item Code is " << i2.getItemCode() 
     << " price is " << i2.getPrice() << endl;
  return 0;
}

