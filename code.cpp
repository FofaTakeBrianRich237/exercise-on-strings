#include "main.h"
#include <iostream>
using namespace std;


int length(const char * word)
{
    if(word != nullptr)
    {
    int i = 0,a = 0;
    bool g = true;
    while(g)
    {
        if(word[a] == '\0')
        {
            g = false;
        }
        else i++;
        a++;
    }
    return i;
    }
    else return 0;
}


void copie(const char * test,char *& source)
{
    int i = 0;
    bool g = true;
    while(g)
    {
        if(test[i] == '\0' ) g = false;
        source[i] = test[i];
        i++;
        
    }
}


void concatenate(char * test,const char * source)
{
    bool g = true;
    int i = 0,j = 0;;
    while(g)
    {
        if(test[i] == '\0') g = false; 
        else i++;
    }
    g = true;
    while(g)
    {
        if(source[j] == '\0') g = false;
        test[i] = source[j];
        i++; j++;
    }
    display(test);
}


int compare(const char* test,const char* source)
{
    int a = length(test),b = length(source);
    if (a < b) return -1;
    else if (b < a) return 1;
    else return 0;
}


char* find(const char* test,char f)
{
    char* ptr;
    bool g = false;
    for(int i = 0; test[i] != '\0'; i++)
    {
        if(test[i] == f)
        {
            ptr[0] = test[i];
            g = true;
            break;
        }
    }
    if(g) return ptr;
    else return nullptr;
}


void display(char* w)
{
    if(w != nullptr)
    {
      for(int i = 0; w[i] != '\0'; i++)
      {
          cout << w[i];
      }
    }
}


void display1(const char* w)
{
    if(w != nullptr)
    {
       for(int i = 0; w[i] != '\0'; i++)
       {
          cout << w[i];
       }
    }
}


void inverse(char * word)
{
    char temp;
    int a = length(word);
    int b = a/2,d = a;
    bool g = true;
    if(a == 1) 
    {
        word[1] = '\0';
    }
    else if(a%2 == 0)
    {
        b -= 1;
        a -= 1;
        int c = 0;
        while (c <= b)
        {
           temp = word[a];
           word[a] = word[c];
           word[c] = temp;
           c++; a--;
        }
    }
    else
    {
        a -= 1;
        int c = 0;
        while (c<b)
        {
           temp = word[a];
           word[a] = word[c];
           word[c] = temp;
           c++; a--;
        }
    }
    display(word);
}


void get(const char* w)
{
    for(int i = 0; w[i] != '\0'; i++)
    {
        cout << w[i];
    }
}


 char* find_word(const char * sentence, const char * word)
 {
    int j = length(word);
    int c = length(sentence);
    bool g = true;
    bool f = false;
    char* z;
    for(int i = 0; sentence[i] != '\0'; i++)
     {
        int h = 0;
        int e = i;
        z = nullptr;
        if(sentence [e] == word[0]) 
        {
           z[h] = sentence[e];
           if((e + (j-1) <= (c - 1)))
           {
              for(int d = 1; word[d] != '\0'; d++) 
              {
                e++;
                h++;
                if (sentence[e] != word[d]) 
                {
                    g = false;
                    break;
                }
                else 
                {
                  z[h] = sentence[e];
                }
              }
              if(g) 
              {
                 f = true;
                 break;
              }
           }
           if (f) break;
        }
     }
     
     if(f) 
     {
        z[c] = '\0';
        return z;
     }
     else return nullptr; 
 }


 void sup_word(const char* sentence , char*& test, int begin,int lenth)
 {
    int a = 0,b = length(sentence);
    int c = b + (lenth - 1);
    for(int i = begin; sentence[i] != '\0' && i < c ; i++)
    {
        test[a] = sentence[i];
        a++;
    }
    test[lenth] = '\0';
 }


 int count_word(const char* sentence)
 {  
    int a = 0;
    if(sentence != nullptr)
    {
        if(sentence[0] != ' ')
        {
          for(int i = 0; sentence[i] != '\0'; i++) 
          { 
             if (i == 1) a++;
             if(sentence[i] == ' ' && sentence[i+1] != ' ' && sentence[i+1] != '\0')
             {
                a++;
             }
          }
        }
        else
        {
            for(int i = 0; sentence[i] != '\0'; i++)
            {
               if(sentence[i] == ' ' && sentence[i+1] != ' ' && sentence[i+1] != '\0')
               {
                   a++;
               }
            }
        }
    }
    return a;
 }


void upper_case(char*& word)
{
    for(int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] -= ('a' - 'A');
        }
    }
}


void delete_letter(char*& word,char letter)
{
    int b = length(word),c = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == letter)
        {
            for(int j = i; word[j] != '\0'; j++)
            {
                word[j] = word[j+1];
            }
        }
    }
}


void display_pendu(int pendu[10][10])
{
   for(int i = 0; i < 10; i++)  
   {
    for(int j = 0; j < 10; j++)
    {
        if(pendu[i][j] == 0) cout << " ";
        else cout << '*';
    }
    cout << endl;
   }
}