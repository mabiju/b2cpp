#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// ================= PATIENT CLASS =================
class Patient
{
public:
    string name, gender, disease, phone;
    int age;

    void input()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        while (age <= 0)
        {
            cout << "Invalid age! Enter again: ";
            cin >> age;
        }
        cin.ignore();
        cout << "Enter Gender: ";
        getline(cin, gender);
        cout << "Enter Disease: ";
        getline(cin, disease);
        cout << "Enter Phone: ";
        getline(cin, phone);
    }

    void display()
    {
        cout << left << setw(15) << name
             << setw(5) << age
             << setw(10) << gender
             << setw(20) << disease
             << setw(15) << phone << endl;
    }
};

// ================= DOCTOR CLASS =================
class Doctor
{
public:
    string name, gender, specialization, phone;
    int age;

    void input()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        while (age <= 0)
        {
            cout << "Invalid age! Enter again: ";
            cin >> age;
        }
        cin.ignore();
        cout << "Enter Gender: ";
        getline(cin, gender);
        cout << "Enter Specialization: ";
        getline(cin, specialization);
        cout << "Enter Phone: ";
        getline(cin, phone);
    }

    void display()
    {
        cout << left << setw(15) << name
             << setw(5) << age
             << setw(10) << gender
             << setw(20) << specialization
             << setw(15) << phone << endl;
    }
};

// ================= APPOINTMENT CLASS =================
class Appointment
{
public:
    string patientName, doctorName, date, time;

    void input()
    {
        cin.ignore();
        cout << "Enter Patient Name: ";
        getline(cin, patientName);
        cout << "Enter Doctor Name: ";
        getline(cin, doctorName);
        cout << "Enter Date (dd/mm/yyyy): ";
        getline(cin, date);
        cout << "Enter Time (hh:mm): ";
        getline(cin, time);
    }

    void display()
    {
        cout << left << setw(20) << patientName
             << setw(20) << doctorName
             << setw(15) << date
             << setw(10) << time << endl;
    }
};

// ================= ADD RECORD FUNCTIONS =================

// For Patients
void addRecord(string filename, Patient &p)
{
    ofstream fout(filename, ios::app);
    if (!fout)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    fout << p.name << "|" << p.age << "|" << p.gender << "|" << p.disease << "|" << p.phone << endl;
    fout.close();
    cout << "Patient record added successfully!\n";
}

// For Doctors
void addRecord(string filename, Doctor &d)
{
    ofstream fout(filename, ios::app);
    if (!fout)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    fout << d.name << "|" << d.age << "|" << d.gender << "|" << d.specialization << "|" << d.phone << endl;
    fout.close();
    cout << "Doctor record added successfully!\n";
}

// For Appointments
void addRecord(string filename, Appointment &a)
{
    ofstream fout(filename, ios::app);
    if (!fout)
    {
        cout << "Error opening file!" << endl;
        return;
    }
    fout << a.patientName << "|" << a.doctorName << "|" << a.date << "|" << a.time << endl;
    fout.close();
    cout << "Appointment record added successfully!\n";
}

// ================= VIEW FUNCTIONS =================

void viewPatients()
{
    ifstream fin("patients.txt");
    if (!fin)
    {
        cout << "No patient records found.\n";
        return;
    }
    cout << left << setw(15) << "Name"
         << setw(5) << "Age"
         << setw(10) << "Gender"
         << setw(20) << "Disease"
         << setw(15) << "Phone" << endl;
    cout << "-------------------------------------------------------------\n";
    Patient p;
    while (getline(fin, p.name, '|'))
    {
        fin >> p.age;
        fin.ignore();
        getline(fin, p.gender, '|');
        getline(fin, p.disease, '|');
        getline(fin, p.phone);
        p.display();
    }
    fin.close();
}

void viewDoctors()
{
    ifstream fin("doctors.txt");
    if (!fin)
    {
        cout << "No doctor records found.\n";
        return;
    }
    cout << left << setw(15) << "Name"
         << setw(5) << "Age"
         << setw(10) << "Gender"
         << setw(20) << "Specialization"
         << setw(15) << "Phone" << endl;
    cout << "-------------------------------------------------------------\n";
    Doctor d;
    while (getline(fin, d.name, '|'))
    {
        fin >> d.age;
        fin.ignore();
        getline(fin, d.gender, '|');
        getline(fin, d.specialization, '|');
        getline(fin, d.phone);
        d.display();
    }
    fin.close();
}

void viewAppointments()
{
    ifstream fin("appointments.txt");
    if (!fin)
    {
        cout << "No appointment records found.\n";
        return;
    }
    cout << left << setw(20) << "Patient Name"
         << setw(20) << "Doctor Name"
         << setw(15) << "Date"
         << setw(10) << "Time" << endl;
    cout << "-------------------------------------------------------------\n";
    Appointment a;
    while (getline(fin, a.patientName, '|'))
    {
        getline(fin, a.doctorName, '|');
        getline(fin, a.date, '|');
        getline(fin, a.time);
        a.display();
    }
    fin.close();
}

// ================= SEARCH FUNCTION =================
void searchRecord(string filename, string searchName)
{
    ifstream fin(filename);
    if (!fin)
    {
        cout << "No records found.\n";
        return;
    }
    string line;
    bool found = false;
    while (getline(fin, line))
    {
        if (line.find(searchName) != string::npos)
        {
            cout << "Record found: " << line << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No record found for: " << searchName << endl;
    fin.close();
}

// ================= DELETE FUNCTION =================
void deleteRecord(string filename, string searchName)
{
    ifstream fin(filename);
    ofstream temp("temp.txt");
    if (!fin)
    {
        cout << "No records found.\n";
        return;
    }
    string line;
    bool deleted = false;
    while (getline(fin, line))
    {
        if (line.find(searchName) == string::npos)
        {
            temp << line << endl;
        }
        else
        {
            deleted = true;
        }
    }
    fin.close();
    temp.close();
    remove(filename.c_str());
    rename("temp.txt", filename.c_str());
    if (deleted)
        cout << "Record deleted successfully!\n";
    else
        cout << "No record found to delete.\n";
}

// ================= MAIN MENU =================
int main()
{
    int choice;
    do
    {
        cout << "\n========== HOSPITAL MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Patient\n";
        cout << "2. View Patients\n";
        cout << "3. Search Patient\n";
        cout << "4. Delete Patient\n";
        cout << "5. Add Doctor\n";
        cout << "6. View Doctors\n";
        cout << "7. Search Doctor\n";
        cout << "8. Delete Doctor\n";
        cout << "9. Add Appointment\n";
        cout << "10. View Appointments\n";
        cout << "11. Search Appointment\n";
        cout << "12. Delete Appointment\n";
        cout << "13. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            Patient p;
            p.input();
            addRecord("patients.txt", p);
        }
        else if (choice == 2)
        {
            viewPatients();
        }
        else if (choice == 3)
        {
            string name;
            cin.ignore();
            cout << "Enter patient name to search: ";
            getline(cin, name);
            searchRecord("patients.txt", name);
        }
        else if (choice == 4)
        {
            string name;
            cin.ignore();
            cout << "Enter patient name to delete: ";
            getline(cin, name);
            deleteRecord("patients.txt", name);
        }
        else if (choice == 5)
        {
            Doctor d;
            d.input();
            addRecord("doctors.txt", d);
        }
        else if (choice == 6)
        {
            viewDoctors();
        }
        else if (choice == 7)
        {
            string name;
            cin.ignore();
            cout << "Enter doctor name to search: ";
            getline(cin, name);
            searchRecord("doctors.txt", name);
        }
        else if (choice == 8)
        {
            string name;
            cin.ignore();
            cout << "Enter doctor name to delete: ";
            getline(cin, name);
            deleteRecord("doctors.txt", name);
        }
        else if (choice == 9)
        {
            Appointment a;
            a.input();
            addRecord("appointments.txt", a);
        }
        else if (choice == 10)
        {
            viewAppointments();
        }
        else if (choice == 11)
        {
            string name;
            cin.ignore();
            cout << "Enter patient name to search appointment: ";
            getline(cin, name);
            searchRecord("appointments.txt", name);
        }
        else if (choice == 12)
        {
            string name;
            cin.ignore();
            cout << "Enter patient name to delete appointment: ";
            getline(cin, name);
            deleteRecord("appointments.txt", name);
        }
        else if (choice == 13)
        {
            cout << "Exiting program... Goodbye!\n";
        }
        else
        {
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 13);

    return 0;
}
