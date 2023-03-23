#include <iomanip>
#include <iostream>
using namespace std;
void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

struct scores {
  int studentid;
  int marks1, marks2;
  float CA_1, CA_2;
} student[5];

int main() {
  int i = 0;
  for (i = 0; i < 5; i++) {
    cout << "Student Id: ";
    cin >> student[i].studentid;

    cout << "marks1: ";
    cin >> student[i].marks1;

    cout << "marks2: ";
    cin >> student[i].marks2;

    findMarks(student[i].marks1, student[i].marks2, student[i].CA_1,
              student[i].CA_2);

    cout << "CA_1: " << student[i].CA_1 << endl;
    cout << "CA_2: " << student[i].CA_2 << endl;
  }

  cout << setw(15) << "Student" << setw(15) << "Marks1" << setw(15) << "Marks2"
       << setw(15) << "CA_1" << setw(15) << "CA_2" << endl;

  for (i = 0; i < 5; i++) {
    cout << setw(15) << student[i].studentid << setw(15) << student[i].marks1
         << setw(15) << student[i].marks2 << setw(15) << setiosflags(ios::fixed)
         << setprecision(2) << student[i].CA_1 << setw(15)
         << setiosflags(ios::fixed) << setprecision(2) << student[i].CA_2
         << endl;
  }
}
void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {
  t_CA1 = (t_marks1 * 20) / 100;
  t_CA2 = (t_marks1 * 30) / 100;
}
