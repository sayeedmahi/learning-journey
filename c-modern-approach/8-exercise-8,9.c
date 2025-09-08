#include <stdio.h>
int main () {
    double temperature_readings [30][24]; //assumes already filled
    double sum = 0.0; 
    int days=30, hours=24;
    for (int d=0; d<days; d++) {
        for (int h=0; h<hours; h++) {
            sum= sum+temperature_readings[d][h];
        }
    }
    double average = sum/ (days*hours);
    printf("%d\n", average);
}