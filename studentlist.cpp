// This is a program that creates a list of students (gets their name, id, and gpa) and is able to add, delete, and print out the list! The commands are "ADD", "PRINT", "DELETE", and "QUIT"
// Made by Ehan Masud
// Completed on 11/6/2021

#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

struct Student { // struct to add for each person
  char firstname[200];
  char lastname[200];
  int id;
  float gpa;
};


void add(vector<Student*> &s){ // function to add students
  
  Student* student = new Student();
  
  cout << "Insert the student's first name" << endl;
  cin >> student->firstname;

  cout << "Insert the student's last name" << endl;
  cin >> student->lastname;

  cout << "Insert the student's id" << endl;
  cin >> student->id;

  cout << "Insert the student's gpa" << endl;
  cin >> student->gpa;

  (s).push_back(student); // sends information to vector
  
}

void print(vector<Student*> &s) { // function to print all students

  vector<Student*>::iterator it;

  for (it = (s).begin(); it < (s).end(); it++) { // iterates through the vector and sends out information 
    cout << (*it)->firstname << " ";
    cout << (*it)->lastname << " ";
    cout << (*it)->id << " ";
    cout << fixed << setprecision(2) << (*it)->gpa << "\n";  //after information of a student is done, start printing from another line
  }
  
}

void deletestudent(vector<Student*> &s) { // function to delete students
  
  int idnumber;
  vector<Student*>::iterator it;

  
  cout << "Insert the ID number of the student: " << endl;
  cin >> idnumber;

  for (it = s.begin(); it < s.end(); it++) { // iterates through vector and if at a point in the vector the specific id is right, use erase()
    if ((*it)->id == idnumber) {
      s.erase(it);
      return;
    }
  }

  cout << "Student ID doesn't exist in your list!" << endl;

  
}



int main() {

  vector<Student*> studentlist; // making a vector
  
  bool cont = true;
  char input[100];

  cout << "Welcome to Student List! This program will read in students, information about the students, print them out, and delete them." << endl;
  
  while (cont == true) {
    
    cout << "What would you like to do? (ADD, PRINT, DELETE, QUIT)" << endl;

    cin >> input; // inputs and depending on input, 

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
      break; // end the program
      
    }
    else {

      cout << "Invalid input!" << endl;
    }

    memset(input, 0, 100); // clear the input after each input (kept getting random "invalid inputs")

    
  }

  return 0;
  
}
