#ifndef ALUNOS_H
#define ALUNOS_H


typedef struct {
    int matricula;
    char nome[10]; 
} Aluno;
void cadastrarAlunos(Aluno *aluno, int *conta);



#endif 