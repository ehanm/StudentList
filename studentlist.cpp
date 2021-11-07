#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

struct Student {
  char firstname[200];
  char lastname[200];
  int id;
  float gpa;
};

vector<Student*> studentlist;

void add(vector<Student*> &s){
  
  Student* student = new Student();
  
  cout << "Insert the student's first name" << endl;
  cin >> student->firstname;

  cout << "Insert the student's last name" << endl;
  cin >> student->lastname;

  cout << "Insert the student's id" << endl;
  cin >> student->id;

  cout << "Insert the student's gpa" << endl;
  cin >> student->gpa;

  (s).push_back(student);
  
}



void print(vector<Student*> &s) {

  vector<Student*>::iterator it;

  for (it = (s).begin(); it < (s).end(); it++) {
    cout << (*it)->firstname << " ";
    cout << (*it)->lastname << " ";
    cout << (*it)->id << " ";
    cout << fixed << setprecision(2) << (*it)->gpa << "\n"; 
  }
  
}

void deletestudent(vector<Student*> &s) {
  
  int idnumber;
  vector<Student*>::iterator it;

  
  cout << "Insert the ID number of the student: " << endl;
  cin >> idnumber;

  for (it = s.begin(); it < s.end(); it++) {
    if ((*it)->id == idnumber) {
      s.erase(it);
      return;
    }
  }

  cout << "Student ID doesn't exist in your list!" << endl;

  
}



int main() {
  
  bool cont = true;
  char input[100];

  cout << "Welcome to Student List! This program will read in students, information about the students, print them out, and delete them.";
  
  while (cont == true) {
    
    cout << "What would you like to do? (ADD, PRINT, DELETE, QUIT)" << endl;

    cin >> input;

    if (strcmp(input, "ADD") == 0) {

      add(studentlist);
     
    }
    else if (strcmp(input, "DELETE") == 0) {

      deletestudent(studentlist);
      
    }
    else if (strcmp(input, "PRINT") == 0) {

      print(studentlist);
    }
    else if (strcmp(input, "QUIT") == 0) {

      cont = false;
      break;
      
    }
    else {

      cout << "Invalid input!" << endl;
    }

    
  }

  return 0;
  
}
