#include "../header/Student.h"

void Student::setName(string name) {
    this->name = name;
}

void Student::setSurname(string surname) {
    this->surname = surname;
}

void Student::setID(int IDNumber) {
    this->IDnumber = IDNumber;
}

void Student::setNumOfQuestions(int questions) {
    this->numOfQuestions = questions;
}

void Student::setNumOfCorrectAnswers(int correctAnswers) {
    this->numOfCorrectAnswers = correctAnswers;
}

string Student::getName() {
    return name;
}

string Student::getSurname() {
    return surname;
}

int Student::getIDnumber() {
    return IDnumber;
}

int Student::getNumOfQuestions() {
    return numOfQuestions;
}

int Student::getNumOfCorrectAnswers() {
    return numOfCorrectAnswers;
}

float Student::percentageScore() {
    return ((float)numOfCorrectAnswers / numOfQuestions) * 100;
}
