#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void print(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int sum(int* arr, int SIZE)
{
    int result = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0 && !(arr[i] % 4 == 0))
        {
            result += arr[i];
        }
    }
    return result;
}

int count(int* arr, int SIZE)
{
    int result = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0 && !(arr[i] % 4 == 0))
        {
            result++;
        }
    }
    return result;
}

void updateArray(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0 || arr[i] % 4 == 0)
        {
            arr[i] = 0;
        }
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    const int SIZE = 23;
    int arr[SIZE];
    create(arr, SIZE, -19, 25);
    print(arr, SIZE);
    cout << "sum = " << sum(arr, SIZE) << endl;
    cout << "count = " << count(arr, SIZE) << endl;
    updateArray(arr, SIZE);

    return 0;
}
