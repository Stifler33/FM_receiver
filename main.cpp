#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
using namespace std;
void test(float* fm, int count){
    for (int i = 0; i < count; i++){
        cout << fm[i] << endl;
    }
}
void userStation(float* fm, int userFM){
    if (userFM > 10 || userFM < 0){
        cerr << "out of rage!" << endl;
    }else if (userFM == 0){
        cout << "Receiver off\n";
    }else{
        cout << "frequency " << fm[userFM-1] << endl;
    }
}
int main() {
    ifstream freq("C:\\Users\\bagi3\\CLionProjects\\FM_receiver\\FM_frequency.txt");
    float fm[10];
    float station=0;
    int countFM = 0;
    while (!freq.eof()){
        assert(countFM < 10);
        freq >> fm[countFM];
        countFM++;
    }
    //test(fm, countFM);
    int userFM=0;
    do{
        cout << "Enter station FM :" , cin >> userFM;
        userStation(fm, userFM);
    }while (userFM != 0);

    return 0;
}
