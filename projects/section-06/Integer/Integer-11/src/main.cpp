  #include <integer.h>
  #include <iostream>
  #include <memory>   // for smart pointer

using namespace std;

void Process(unique_ptr<Integer> ptr) {
    (void)ptr;
}

void Process(shared_ptr<Integer> ptr) {  // copy by value
                                         // increments shared-ptr reference counter
    (void)ptr;
}


// Smart Pointer C++11
void CreateInteger() {
    unique_ptr<Integer> p1(new Integer);
    p1->SetValue(3);
    cout << p1->GetValue() << endl;
    cout << "move: ";
    Process(move(p1));                  // move is allowed
                                        // pointer is deleted when Process terminates

    // auto px(p);                      // error use of deleted function
                                        // unique_ptr(const unique_ptr&) = delete;

    // cout << p1->GetValue() << endl;  // after move p1 is not valid anymore

    shared_ptr<Integer> p2(new Integer);
    Process(p2);                        // Copy by Value
    p2->SetValue(5);
    cout << p2->GetValue() << endl;     // P2 is deleted when shared-ptr reference counter is 0
}                                       // this is the case when CreateInteger exits.

int main() {
    CreateInteger();
	
    return 0;
}
