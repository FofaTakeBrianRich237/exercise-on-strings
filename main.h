#ifndef _main_h_
#define _ main_h_

int length(const char* word);
void copie(const char * test,char *& source);
void concatenate( char * test,const char * source);
int compare(const char* test,const char* source);
char* find(const char* test,char find);
void display1(const char* w);
void display( char* w);
void inverse(char * word);
char* find_word(const char * sentence, const char * word);
void sup_word(const char* sentence , char*& test, int begin,int lenth);
int count_word(const char* sentence);
void delete_letter(char*& word,char letter);
void upper_case(char*& word);
void display_pendu(int pendu[10][10]);
void pendu_game(const char* word);

#endif