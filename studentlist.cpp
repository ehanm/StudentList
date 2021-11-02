#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;


struct Student {
  char firstname[10];
  char lastname[10];
  int id;
  float gpa;
};

vector<Student> studentlist;

void add(vector<Student>* s){

  Student student;

  cout << "Insert the student's first name" << endl;
  cin >> student.firstname;

  cout << "Insert the student's last name" << endl;
  cin >> student.lastname;

  cout << "Insert the student's id" << endl;
  cin >> student.id;

  cout << "Insert the student's gpa" << endl;
  cin >> student.gpa;

  s->push_back(student);
  
}



void print(vector<Student>* s) {

  
  for (int i = 0; i < s->size(); i++) {
    Student currentstudent = s->at(i);
    cout << s[i].firstname << " " << s[i].lastname << s[i].id << s[i].gpa << endl;
  }
  
}



int main() {
  
  bool cont = true;
  char input[100];

  cout << "Welcome to Student List! This program will read in students, information about the students, print them out, and delete them.";
  
  while (cont == true) {
    
    cout << "What would you like to do? (ADD, PRINT, DELETE, QUIT)" << endl;

    cin >> input;

    if (strcmp(input, "ADD") == 0) {

      add(&studentlist);
     
    }
    else if (strcmp(input, "DELETE") == 0) {

      cout << "Delete thing";
      
    }
    else if (strcmp(input, "PRINT") == 0) {

      print(&studentlist);
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
