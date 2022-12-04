#include <iostream>
#include <iomanip>
using namespace std;
double Average(int *arr, int n);
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << fixed << setprecision(4) << Average(arr,n) << endl;
    delete[]arr;
    return 0;
}
double Average(int *arr, int n)
{
    double sum = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum+=arr[i];
            odd++;
        }
    }
    return sum/odd;
}