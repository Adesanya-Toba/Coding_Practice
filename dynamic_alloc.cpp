#include <iostream>
using namespace std;

void print_array(int *buffer, int size);

int main()
{
    int n;
    cout <<"Enter the size of the buffer you want: " << endl;
    cin >> n;

    int *buffer = new int(n);

    cout << "Fill up the array please.. thank you" << endl;
    for (int i = 0; i < n; i++) {
		cin >> buffer[i];
	}

    print_array(buffer, n);
    delete(buffer);
}

void print_array(int *buffer, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(buffer + i) << " ";
    }
}
