  #include <integer.h>
  #include <iostream>

// Smart Pointer for Integer Class
class IntPtr {
    Integer *m_p;
public:
    IntPtr(Integer *p) :m_p(p) {
	
    }
    ~IntPtr() {
	delete m_p;
    }
    Integer *operator ->() {
	return m_p;
    }
    Integer & operator *() {
	return *m_p;
    }
};

// Raw Pointer
// void CreateInteger() {
//     Integer *p = new Integer;
//     p->SetValue(3);
//     std::cout << p->GetValue() << std::endl;
//     delete p;  // risk of memory leak if not delete is not called!!
// }

// Smart Pointer for Integer Class
void CreateInteger() {
    IntPtr p = new Integer;
    p->SetValue(3);
    std::cout << p->GetValue() << std::endl;
}

int main() {
        using namespace std;

	CreateInteger();
	
// 10) Smart Pointer

        return 0;
    }
