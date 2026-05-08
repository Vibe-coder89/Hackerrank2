You are given a base class Person that stores a person's ID and age. Create three derived classes using different types of inheritance: 1. Public Inheritance → Student 2. Protected Inheritance → Teacher 3. Private Inheritance → Doctor

Each derived class must calculate a specific value using the inherited data and print the result. Rules • Person – id,age, (M) validateAge, setPerson(id,age) • Student must access id and age directly. (M) Input, ValidateMarks() Display() validate marks/age then details • Teacher must access the inherited data using a member function. (M) Input(), Display(), ValidateClass() • Doctor must not allow direct access outside the class (M) Input() ValidatePatients() and Display() will validateAge and Patient and then display else return. • Main input N and type and output accordingly displayed Class Requirements Base Class class Person { protected: int id; int age; };

Derived Classes 1. Student (Public Inheritance) • Input: marks of 3 subjects • Output: Total Marks = marks1 + marks2 + marks3 2. Teacher (Protected Inheritance) • Input: number of classes taken • Output: Salary = age × classes 3. Doctor (Private Inheritance) • Input: number of patients • Output: Earnings = age × patients × 50

Sample Input 5 1 101 20 70 80 90 2 102 35 10 0 0 3 103 40 25 0 0 1 104 19 60 50 70 2 105 50 15 0 0

Sample Output Student Total = 240 Teacher Salary = 350 Doctor Earnings = 50000 Student Total = 180 Teacher Salary = 750

Input Format

N → number of records For each record: type id age value1 value2 value3 Where: type Meaning 1 Student 2 Teacher 3 Doctor

Constraints

1 ≤ N ≤ 100 1 ≤ id ≤ 1000 18 ≤ age ≤ 65 0 ≤ marks ≤ 100 1 ≤ classes ≤ 30 1 ≤ patients ≤ 100

Output Format

Print result based on type: Student Total = _ Teacher Salary = _ Doctor Earnings = _ Input Validation Rules You must validate the following: 1. If N ≤ 0 → print Invalid Input 2. If age < 18 or age > 65 → print Invalid Age 3. If marks < 0 or marks > 100 → print Invalid Marks 4. If classes ≤ 0 → print Invalid Classes 5. If patients ≤ 0 → print Invalid Patients

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
