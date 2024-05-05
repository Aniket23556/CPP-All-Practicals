// #include <iostream>

// using namespace std;

// template<class T>
// void fun(int m, int n, float a, float b)
// {
//     cout << "m and n before swap: " << m << " " << n << "\n";
//     ::swap(m,n);
//     cout << "m and n after swap: " << m << " " << n << "\n";

//     cout << "a and b before swap: " << a << " " << b << "\n";
//     ::swap(a,b);
//     cout << "a and b after swap: " << a << " " << b << "\n";
// }
// template<class T>
// void swap(T &x, T &y)
// {
//     T temp = x;
//     x = y;
//     y = temp;
// }

// int main() 
// {
//     // int m = 100, n = 200;
//     // float a = 11.22, b = 33.44;

//     fun(100, 200, 11.22, 33.44);

//     return 0;
// }


#include <iostream>

using namespace std;

template<class T>
void swap(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

template<class T>
void fun(int m, int n, T a, T b) {
    cout << "m = " << m << ", n = " << n << ", a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 100, y = 200;
    double a = 11.22, b = 33.44;

    fun(100, 200, 11.22f, 33.44f); // Providing floats instead of doubles

    ::swap(x, y);
    ::swap(a, b);

    fun(100, 200, 11.22f, 33.44f); // Providing floats instead of doubles

    return 0;
}

