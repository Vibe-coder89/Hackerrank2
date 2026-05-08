You are given multiple patient records. Each patient object stores: • Patient ID • Patient Age • Number of days admitted in hospital Your task is to: 1. Create a class Patient 2. Store all patient details inside the class 3. Implement a conversion operator that converts a Patient object into a basic integer representing the total hospital cost

Cost Calculation Rule: Total Cost = Age × Days Admitted

The program must: • Read multiple patient records • Convert each object into an integer using the conversion operator • Print the total cost for each patient

Description This problem tests: • Object to basic type conversion operator • Multiple object handling • Array of objects • Real-world scenario (hospital billing) • HackerRank-style input/output handling

Required Conversion Operator You must use: operator int()

What Validation Does If any value is outside the allowed range: • Program stops immediately • Displays an error message

Input Format

First line contains integer N (number of patients) Next N lines contain: PatientID Age DaysAdmitted

If N not in valid range validation error => Invalid number of patients If Id,Age,days not in valid range validation error => Invalid input for patient 1

Constraints

1 ≤ N ≤ 100 1 ≤ PatientID ≤ 10000 0 ≤ Age ≤ 120 1 ≤ DaysAdmitted ≤ 365

Output Format

Print the total hospital cost for each patient in a new line

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    
    if(n < 1 || n > 100) {
        cout << "Invalid number of patients";
        return 0;
    }

    int id, age, days;

    for(int i = 0; i < n; i++) {

        cin >> id >> age >> days;

        
        if(id < 1 || id > 10000 || age < 0 || age > 120 || days < 1 || days > 365) {
            cout << "Invalid input for patient " << i + 1;
            return 0;
        }

       
        int cost = age * days;

        cout << cost << endl;
    }

    return 0;
}
