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

int main() {

  Student student;
  char input[100];
  char list[100];
  bool cont = true;
  
  while (cont == true) {
    cout << "What would you like to do? (ADD, PRINT, DELETE, QUIT)" << endl;

    cin >> input;

    if (strcmp(input, "ADD") == 0) {

      cout << "Enter the student's first name" << endl;
      cin >> student.firstname;
      cout << student.firstname << endl;
      
    }

    
  }
  
}
