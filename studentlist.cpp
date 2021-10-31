#include <iostream>
#include <cstring>
#include <vector>

using namespace std;


struct Student {
  char firstname[10];
  char lastname[10];
  int id;
  float gpa;
};

vector<Student> studentlist;

void add(){

  Student student;

  cout << "Insert the student's first name" << endl;
  cin >> student.firstname;

  cout << "Insert the student's last name" << endl;
  cin >> student.lastname;

  cout << "Insert the student's id" << endl;
  cin >> student.id;

  cout << "Insert the student's gpa" << endl;
  cin >> student.gpa;

  studentlist.push_back(student);
  
}



void print() {

  Student student;

  cout << firstname
  
}



int main() {

  Student student;
  bool cont = true;
  char input[100];

  cout << "Welcome to Student List! This program will read in students, information about the students, print them out, and delete them.";
  
  while (cont == true) {
    
    cout << "What would you like to do? (ADD, PRINT, DELETE, QUIT)" << endl;

    cin >> input;

    if (strcmp(input, "ADD") == 0) {

      add(&student);
     
    }
    if else (strcmp(input, "DELETE") == 0) {

      cout << "Delete thing";
      
    }
    if else (strcmp(input, "PRINT") == 0) {

      cout << "Print thing";
    }
    if else (strcmp(input, "QUIT") == 0) {

      cont = false;
      break;
      
    }
    else {

      cout << "Invalid input!" << endl;
    }

    
  }

  return 0;
  
}
