#ifndef JIPPV2_STUDENT_H
#define JIPPV2_STUDENT_H

#include <string>

using namespace std;

class Student {
public:
    void setName(string name);
    void setSurname(string basicString);
    void setID(int IDNumber);
    void setNumOfQuestions(int questions);
    void setNumOfCorrectAnswers(int correctAnswers);
    string getName();
    string getSurname();
    int getIDnumber();
    int getNumOfQuestions();
    int getNumOfCorrectAnswers();
    float percentageScore();


private:
    string name;
    string surname;
    int IDnumber;
    int numOfQuestions;
    int numOfCorrectAnswers;
};


#endif //JIPPV2_STUDENT_H
