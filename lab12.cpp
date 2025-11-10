#include <iostream>
using namespace std;
class Patient {
public:
    int patientID;
    string name;
    string disease;
    // Function defined inside the class
    void setPatient(int id, string n, string d) {
        patientID = id;
        name = n;
        disease = d;
    }

    // Function declared inside, defined outside
    void showPatient();
};

// Function defined outside the class
void Patient::showPatient() {
    cout << "Patient ID: " << patientID
         << ", Name: " << name
         << ", Disease: " << disease << endl;
}

int main() {
    Patient p1, p2;
    // Using inside function to set details
    p1.setPatient(301, "Arjun", "Fever");
    p2.setPatient(302, "Meena", "Diabetes");

    // Using outside function to display
    p1.showPatient();
    p2.showPatient();
    return 0;
}
