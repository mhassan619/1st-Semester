#include <iostream>
#include <string>
using namespace std;

class StudentPortal {
public:
    void showMenu() {
        cout << "\n--- University of Layyah Student Portal ---" << endl;
        cout << "1. Check Attendance" << endl;
        cout << "2. Check Academic Details" << endl;
        cout << "3. Exit" << endl;
        cout << "Please choose an option (1-3): ";
    }

    void showAttendance(int studentID) {
        // Example attendance data for students (can be replaced with actual data)
        if (studentID == 1001) {
            cout << "\nAttendance: 85%" << endl;
        } else if (studentID == 1002) {
            cout << "\nAttendance: 90%" << endl;
        } else {
            cout << "\nAttendance: Data not available for this student." << endl;
        }
    }

    void showAcademicDetails(int studentID) {
        // Example academic details (can be replaced with actual data)
        if (studentID == 1001) {
            cout << "\nAcademic Details: \n";
            cout << "Course: Computer Science\n";
            cout << "GPA: 3.8/4.0\n";
            cout << "Major: Software Engineering\n";
        } else if (studentID == 1002) {
            cout << "\nAcademic Details: \n";
            cout << "Course: Electrical Engineering\n";
            cout << "GPA: 3.6/4.0\n";
            cout << "Major: Power Systems\n";
        } else {
            cout << "\nAcademic Details: Data not available for this student." << endl;
        }
    }

    bool validateStudentID(int studentID) {
        // This function checks if the user ID exists
        return (studentID == 1001 || studentID == 1002);  // Add more valid IDs as needed
    }
};

int main() {
    StudentPortal portal;
    int studentID;
    int option;

    // Start the portal
    cout << "Welcome to the University of Layyah Student Portal!" << endl;

    // Using do-while loop to handle student login and interaction
    do {
        cout << "\nEnter your Student User ID: ";
        cin >> studentID;

        // Validate Student ID
        if (portal.validateStudentID(studentID)) {
            cout << "\nWelcome Student ID: " << studentID << endl;

            // Loop to show the menu until the student chooses to exit
            do {
                portal.showMenu();
                cin >> option;

                switch (option) {
                    case 1:
                        portal.showAttendance(studentID);
                        break;
                    case 2:
                        portal.showAcademicDetails(studentID);
                        break;
                    case 3:
                        cout << "\nExiting the portal. Have a nice day!" << endl;
                        break;
                    default:
                        cout << "\nInvalid option. Please select again." << endl;
                        break;
                }

            } while (option != 3); // Continue until the student chooses to exit
        } else {
            cout << "\nInvalid Student ID. Please try again." << endl;
        }

    } while (true); // Continue until valid student ID is entered
    return 0;
}