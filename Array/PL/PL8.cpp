#include <bits/stdc++.h>
using namespace std;

double stdev (double x[], int n);
double mean(double x[], int n);

int main() {
    double data[] = {2.0, 4.0, 4.0, 4.0, 5.0, 5.0, 7.0, 9.0};
    int n = sizeof(data) / sizeof(data[0]);

    // Calculate standard deviation
    double result = stdev(data, n);

    // Output the result
    cout << "The standard deviation is: " << result << endl;

    return 0;
}
double stdev(double x[], int n) {
    
    double x_mean = mean(x, n);
    double sum_sq_diff = 0.0;
    for (int i = 0; i < n; ++i) {
        sum_sq_diff +=pow(x[i] - x_mean,2); //(x[i] - x_mean) * (x[i] - x_mean);
    }
    return sqrt(sum_sq_diff / (n - 1));
}


double mean(double x[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += x[i];
    }
    return sum / n;
}

