#include <iostream>

using namespace std;

template<class program12_1>
class vector {
private:
    program12_1 *v;                           // type program12_1 vector
    size_t size;
public:
    vector() : size(3) {
        v = new program12_1[size];
        for(int i = 0; i < size; i++)
            v[i] = 0;
    }

    vector(program12_1* arr, size_t s) : size(s) {
        v = new program12_1[size];
        for(int i = 0; i < size; i++)
            v[i] = arr[i];
    }

    program12_1 operator*(vector<program12_1>& y) {
        program12_1 sum = 0;
        for(int i = 0; i < size; i++)
            sum += this->v[i] * y.v[i];
        return sum;
    }

    void display() {
        for(int i = 0; i < size; i++)
            cout << v[i] << " ";
        cout << endl;
    }
};

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    vector<int> v1(arr1, 3);
    vector<int> v2(arr2, 3);

    cout<<"v1  = ";
    v1.display();

    cout<<"v2  = ";
    v2.display();

    cout << "Dot product of v1 & v2: " << (v1 * v2) << endl;
    return 0;
}
