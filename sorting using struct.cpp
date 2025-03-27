#include<iostream>
using namespace std;

struct student {
    string name;
    int ID;
    int mark[10];
    int sum;
    int rank;
};


void getdata(student &s, int num_of_courses) {
    s.sum = 0; 
    cout << "Enter the details of the student: " << endl;
    cout << "Name: ";
    cin >> s.name;
    cout << "ID: ";
    cin >> s.ID;

    cout << "Enter marks of " << num_of_courses << " courses out of 100%: " << endl;
    for (int i = 0; i < num_of_courses; i++) {
        cin >> s.mark[i];
        s.sum += s.mark[i]; 
    }
}


void calculate_rank(student &s, int num_of_courses) {
    int max_marks = num_of_courses * 100;

    if (s.sum >= 0.9 * max_marks) { 
        s.rank = 1;
    } else if (s.sum >= 0.8 * max_marks) { 
        s.rank = 2;
    } else if (s.sum >= 0.7 * max_marks) { 
        s.rank = 3;
    } else if (s.sum >= 0.6 * max_marks) { 
        s.rank = 4;
    } else if (s.sum >= 0.5 * max_marks) { 
        s.rank = 5;
    } else {
        s.rank = 6; 
    }
}

int main() {
    int num_of_courses, num_of_students;

    cout << "Enter the number of students: ";
    cin >> num_of_students;

    cout << "Enter the number of courses they enrolled currently: ";
    cin >> num_of_courses;

    student students[num_of_students]; 
    for (int i = 0; i < num_of_students; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        getdata(students[i], num_of_courses);
        calculate_rank(students[i], num_of_courses); 
    }

    
    cout << "\nStudents detailed information:" << endl;
    for (int i = 0; i < num_of_students; i++) {
        cout << "Name: " << students[i].name << "\tID: " << students[i].ID
             << "\tTotal Marks: " << students[i].sum << "\tRank: " << students[i].rank << endl;
    }

    return 0;
}