#include <integer.h>
  #include <iostream>
  #include <memory>

  using namespace std;

  void DisplayValue(Integer *p) {
      if(!p)
  	return;
      cout << p->GetValue() << endl;
  }

  Integer * GetPointer(int value) {           // Factory function - create an instance of a class
      Integer *p = new Integer {value};
      return p;
  }

void Store(unique_ptr<Integer> &p) {
    cout << "Storing data into a file: " << p->GetValue() << endl;
}


  
  void Operate(int value) {

      unique_ptr<Integer> p { GetPointer(value) } ; //unique pointer has explicit constructors

      if(p == nullptr) {
  	// p = new Integer {value};
  	p.reset(new Integer {value} );
      }
      p->SetValue(100);
      DisplayValue(p.get());   // get the underlying pointer
      p.reset(new Integer {});
      *p = __LINE__;
      DisplayValue(p.get());
      // Store(move(p));          // no copy of unique_ptr
      Store(p);                   // passing by reference is ok.
      *p = 200;
  }

  int main() {

      Operate(5);
      
      return 0;
  }
