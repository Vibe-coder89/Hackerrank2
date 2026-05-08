#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

   
    if(N <= 0) {
        cout << "Invalid Input";
        return 0;
    }

    for(int i = 0; i < N; i++) {

        int type, id, age;
        cin >> type >> id >> age;

        
        if(age < 18 || age > 65) {
            cout << "Invalid Age";
            return 0;
        }

        
        if(type == 1) {

            int m1, m2, m3;
            cin >> m1 >> m2 >> m3;

            
            if(m1 < 0 || m1 > 100 ||
               m2 < 0 || m2 > 100 ||
               m3 < 0 || m3 > 100) {

                cout << "Invalid Marks";
                return 0;
            }

            int total = m1 + m2 + m3;

            cout << "Student Total = " << total << endl;
        }

       
        else if(type == 2) {

            int classes;
            cin >> classes;

          
            if(classes <= 0) {
                cout << "Invalid Classes";
                return 0;
            }

            int salary = age * classes;

            cout << "Teacher Salary = " << salary << endl;
        }

        
        else if(type == 3) {

            int patients;
            cin >> patients;

           
            if(patients <= 0) {
                cout << "Invalid Patients";
                return 0;
            }

            int earnings = age * patients * 50;

            cout << "Doctor Earnings = " << earnings << endl;
        }
    }

    return 0;
}