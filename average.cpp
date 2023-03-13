#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    if(argc == 1){
        cout << "Please input numbers to find average.";
        return 0;
    }
    double sum = 0;
    int count = 0;
    for(int i = 1;i<argc;i++){
        sum+=atof(argv[i]);
        count++;
    }
    double mean = sum/count;
    cout << "---------------------------------\n";
    cout << "Average of " << count << " numbers = " << mean << endl;
    cout << "---------------------------------\n";
    return 0;
}