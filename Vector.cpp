#include <bits/stdc++.h>
using namespace std;
template <class T>
class Vector
{
    T* data;
    int size;

public:
    //Add elements
    //access the element
    //changing the ith element
    //constructors
    Vector()
    {
        data = NULL;
        size = 0;
    }

    Vector(T arr[], int n)
    {
        data = new T(n);
        for (int i = 0; i < n; i++)
        {
            data[i] = arr[i];
        }
        size = n;
    }

    Vector()
    {
        if (data != NULL)
        {
            delete[] data;
        }
    }

    void push_back(T item)
    {
        T* temp = new T[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = data[i];
        }
        temp[size] = item;
        if (data != NULL)
        {
            delete[] data;
        }
        size++;
        data = temp;
    }

    T& operator[](int i)
    {
        return data[i];
    }

    int getSize()
    {
        return size;
    }

    friend ostream &operator<<(ostream &output, Vector<T> &v)
    {
        output << "[";
        for (int i = 0; i < (int)v.getSize() - 1; i++)
        {
            output << v[i] << ", ";
        }
        output << v[v.getSize() - 1];
        output << "]";
        return output;
    }
};
int main()
{
    int arr[] = {1, 2, 3, 4, 2, 1};
    Vector<int> v(arr, 6);
    cout << v;
    return 0;
}