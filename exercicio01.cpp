#include "Exercicio01.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;


struct Student {
    char name[50];
    int registration;
};


Student registerStudent() {
    fflush(stdin);
    Student student;
    cout << "Digite o nome do aluno:" << endl;
    cin.getline(student.name, 50);
    cout << "Digite a matricula do aluno:" << endl;
    cin >> student.registration;
    return student;
}

void listStudent(Student pAluno, int numStudent) {
    for (int i = 0; i < numStudent; i++) {
        cout << "Nome do Aluno" << i+1 << ": " << pAluno.name << endl;
        cout << "Numero de matricula: " << pAluno.registration << endl;
    }
}



void exercicio01()
 {
    fflush(stdin);
    Student listStudents[50];
    int i = 0;
    while (i < 50) {
        int option;
        cout << "===== MENU DE OPCOES =====" << endl;
        cout << "1. Cadastrar Alunos" << endl;
        cout << "2. Listar Alunos" << endl;
        cout << "3. Sair" << endl;
        cout << "Digite uma opcao: " << endl;
        cin >> option;
        switch (option) {
            case 1:
                cout << "=== Cadastro de Alunos ===" << endl;
                listStudents[i] = registerStudent();
                i++;
            break;
            case 2:
                cout << "=== Lista de Alunos ===" << endl;
                listStudent(*listStudents, i);
                break;
            case 3:
                i = 51;
                cout << "Saindo..."<<endl;
                break;
            default:
                cout << "Opcao invalida..." << endl;
            break;
        }
    }
}

