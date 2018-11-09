#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream wordsfile("words.in");
ifstream typesfile("types.in");
ofstream file;

string Words[5400];
int Types[5400];
char Lettrs1[5400];
char Lettrs2[5400];
//// The words that are shown.

string LastWords[1000];
//// Words that have the last 2 lettrs

string Word;
//// The word that is searched for.

int Type;
//// the type of the word

char Last1;
//// Last letter of the word that is searched for.

char Last2;
//// 2-nd last letter of the word that is searched for.

int i;
//// Iterator.

int make;
//// for the rand function

int NumWords=0;
//// How many words are found

string FileName;
//// Name of the file

char Init1(string a){
    return a[a.length()-1];;
}

char Init2(string a){
    return a[a.length()-2];;
}

string LargeLettr(string a){
    a[0]=toupper(a[0]);
    return a;
}

string WordSearchRand (int type){
    int k=0;
    for (i=0;i<=5039;i=i+1){
        if (Types[i]==type){
        k=k+1;
        LastWords[k]=Words[i];
        }
    }
    int r=(rand()+Type+make)%k;
    return LastWords[r];
}

string WordSearch (int type, char l1, char l2){
    int k=0;
    for (i=0;i<=5010;i=i+1){
      if (Types[i]==Type){
        if (Lettrs1[i]==l1){
            if (Lettrs2[i]==l2){
                LastWords[k]=Words[i];
                k=k+1;
            }
        }
      }
    }
    if (k==0){
        return "/nf";
    }
    if (k==1){
        return LastWords[0];
    }
    if (k>1){
    int r=rand();
    r=r%(k-1);
    return LastWords[r];
    }
}

void ShowText() {
    cout<<endl;
    cout<<"Welcome to RockFoundationCpp!"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<endl;
    cout<<"Instructions:"<<endl;
    cout<<". Enter file name."<<endl;
    cout<<". Enter your word."<<endl;
    cout<<". Enter your word type."<<endl;
    cout<<". Get words that rhyme with your word."<<endl;
    cout<<"That's it!"<<endl;
    cout<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<endl;
    cout<<"Enter file name: "<<endl;
    cin>>FileName;
    file.open(FileName+".tex");
    file<<"\\documentclass[b5paper,10pt]{book} \n \\renewcommand{\\thesection}{\\arabic{section}} \n \\usepackage[utf8]{inputenc} \n \\usepackage{graphicx} \\usepackage[margin=0.5in]{geometry}   \n \\usepackage{eso-pic,graphicx} \n \\usepackage{multicol}   \n \\usepackage{url} \n \\pagestyle{plain} \n \\begin{document}";
    cout<<"Enter your name:"<<endl;
    cin>>Word;
    cout<<"Enter a digit: ";
    cin>>Type;
    for (i=0;i<=5010;i=i+1){
    wordsfile>>Words[i];
    typesfile>>Types[i];
    }
    for (i=0;i<=4999; i=i+1){
        Lettrs1[i]=Init1(Words[i]);
        Lettrs2[i]=Init2(Words[i]);
    }
}

//// gutter demask the adrenaline / indangered assign the pile
////
//// Project contort the hundred.
//// Know concieve the equally!
//// Determine the arised
//// Commit the axiology mightly!


int main()
{
    char l1, l2, l3, l4, r, r1;
    int i0, i1;

    string word1, word2, a1, a2, a3, a4, Title;

    ShowText();

////    file<<"\n \\title{"<<FileName<<"}"<<endl;
////    file<<"\\author("<<Word<<"} \n \\date{} \n \\begin{document}"<<endl;
    ////file<<"\\verb||\\\\ \\begin{center} \\begin{Huge}\\textbf{"<<FileName<<"}\\end{Huge}\\\\ \\verb| |\\\\ "<<Word<<"\\end{center} \\newpage "<<endl;
    ////file<<"\\begin{large} \n \\section*{Preface}insert Preface \n \\newpage \n \\section*{Introduction}insert Introduction \n \\newpage \n \\"<<endl;
    file<<"\n \\begin{large} \n"<<endl;
////


    file<<" \n \\begin{multicols}{2}";

    Title=WordSearchRand((rand()%5+3)%5);
    Title=LargeLettr(Title);
    file<<"\\verb||\\begin{huge}\\textbf{"<<Title<<"}\\end{huge}\\\\"<<endl;
    file<<"\\verb|             |"<<"\\\\"<<endl;
    file<<"\\verb| |\\\\"<<endl;

        word1=WordSearchRand(2);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<Title<<". "<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;

        r1=rand()%4;

        if (r1==0){
            word1=WordSearchRand(1);
            word2=WordSearchRand(1);
            make=word1.length()+Word.length();
            l1=word1[word1.length()-1];
            l2=word1[word1.length()-2];
            l3=word2[word2.length()-1];
            l4=word2[word2.length()-2];
            a1=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word1+"."+"\\\\";
            a2=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word2+"!"+"\\\\";
            a3=LargeLettr(WordSearchRand(3))+" the "+WordSearch(1, l1, l2)+"\\\\";
            a4=LargeLettr(WordSearchRand(3))+" the "+WordSearchRand(1)+" "+WordSearch(4, l3, l4)+"!"+"\\\\";
            }

        if (r1==1){
            word1=WordSearchRand(1);
            word2=WordSearchRand(1);
            make=word1.length()+Word.length();
            l1=word1[word1.length()-1];
            l2=word1[word1.length()-2];
            l3=word2[word2.length()-1];
            l4=word2[word2.length()-2];
            a1=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word1+"."+"\\\\";
            a3=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word2+"!"+"\\\\";
            a2=LargeLettr(WordSearchRand(3))+" the "+WordSearch(1, l1, l2)+"\\\\";
            a4=LargeLettr(WordSearchRand(3))+" the "+WordSearchRand(1)+" "+WordSearch(4, l3, l4)+"!"+"\\\\";
            }


        if (r1==2){
            word1=WordSearchRand(1);
            word2=WordSearchRand(1);
            make=word1.length()+Word.length();
            l1=word1[word1.length()-1];
            l2=word1[word1.length()-2];
            l3=word2[word2.length()-1];
            l4=word2[word2.length()-2];
            a4=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word1+"."+"\\\\";
            a2=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word2+"!"+"\\\\";
            a1=LargeLettr(WordSearchRand(3))+" the "+WordSearch(1, l1, l2)+"\\\\";
            a3=LargeLettr(WordSearchRand(3))+" the "+WordSearchRand(1)+" "+WordSearch(4, l3, l4)+"!"+"\\\\";
            }

        if (r1==3){
            word1=WordSearchRand(1);
            word2=WordSearchRand(1);
            make=word1.length()+Word.length();
            l1=word1[word1.length()-1];
            l2=word1[word1.length()-2];
            l3=word2[word2.length()-1];
            l4=word2[word2.length()-2];
            a4=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word1+"."+"\\\\";
            a2=LargeLettr(WordSearchRand(1))+" "+WordSearchRand(3)+" the "+word2+"!"+"\\\\";
            a1=LargeLettr(WordSearchRand(3))+" the "+WordSearch(1, l1, l2)+"\\\\";
            a3=LargeLettr(WordSearchRand(3))+" the "+WordSearchRand(1)+" "+WordSearch(4, l3, l4)+"!"+"\\\\";
            }


        for (i1=1;i1<=10;i1=i1+1){

        r=(rand()+Type+Word.length())%40;

        if (i1==4 || i1==9){
            file<<a1<<endl;
            file<<a2<<endl;
            file<<a3<<endl;
            file<<a4<<endl;
            file<<"\\verb| |\\\\"<<endl;
        }

        if (r>16 && r<19){
            r=4;
        }

        if (r==0){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==1){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l3, l4)<<"\\\\"<<endl;
        file<<"Mine is the "<<WordSearchRand(1)<<", "<<WordSearchRand(3)<<" the "<<word1<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==2){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==3){
        word1=WordSearchRand(3);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearchRand(1)<<" is "<<WordSearchRand(4)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==4){
        word1=WordSearchRand(3);
        word2=WordSearchRand(3);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<", "<<WordSearchRand(3)<<", "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==5){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearch(1, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==6){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==7){
        word1=WordSearchRand(2);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<WordSearchRand(1)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==8){
        word1=WordSearchRand(3);
        word2=WordSearchRand(3);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<"I "<<word1<<"!"<<"\\\\"<<endl;
        file<<"I "<<word2<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==9){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==10){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"Mine is the "<<WordSearchRand(1)<<", "<<WordSearchRand(3)<<" the "<<word1<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l3, l4)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==11){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l3, l4)<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<word2<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==12){
        word1=WordSearchRand(3);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearchRand(1)<<" is "<<WordSearchRand(4)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==13){
        word1=WordSearchRand(3);
        word2=WordSearchRand(3);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<", "<<WordSearchRand(3)<<", "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==14){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearch(1, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==15){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==16){
        word1=WordSearchRand(2);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<WordSearchRand(1)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==17){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==19){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l3, l4)<<"\\\\"<<endl;
        file<<"Mine is the "<<WordSearchRand(1)<<", "<<WordSearchRand(3)<<" the "<<word1<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==20){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==21){
        word1=WordSearchRand(3);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearchRand(1)<<" is "<<WordSearchRand(4)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==22){
        word1=WordSearchRand(3);
        word2=WordSearchRand(3);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<", "<<WordSearchRand(3)<<", "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==23){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearch(1, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==24){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==25){
        word1=WordSearchRand(2);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<WordSearchRand(1)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==26){
        word1=WordSearchRand(3);
        word2=WordSearchRand(3);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<"I "<<word1<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<"!"<<"\\\\"<<endl;
        file<<"I "<<word2<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==27){
        word1=WordSearchRand(3);
        word2=WordSearchRand(3);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<"I "<<word1<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearch(3, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearch(3, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"I "<<word2<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==28){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==29){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"Mine is the "<<WordSearchRand(1)<<", "<<WordSearchRand(3)<<" the "<<word1<<"!"<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l3, l4)<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==30){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l3, l4)<<"\\\\"<<endl;
        file<<"I "<<WordSearchRand(3)<<" the "<<WordSearch(1, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<word2<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==31){
        word1=WordSearchRand(3);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<"I "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearchRand(1)<<" is "<<WordSearchRand(4)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==32){
        word1=WordSearchRand(3);
        word2=WordSearchRand(3);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<", "<<WordSearchRand(3)<<", "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==33){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearch(1, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==34){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==35){
        word1=WordSearchRand(2);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<". "<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==36){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<". "<<LargeLettr(WordSearchRand(3))<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==37){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<". "<<LargeLettr(WordSearchRand(3))<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" "<<WordSearch(1, l1, l2)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==39){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<". The "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        }

        if (r==39){
        word1=WordSearchRand(1);
        word2=WordSearchRand(1);
        make=word1.length()+Word.length();
        l1=word1[word1.length()-1];
        l2=word1[word1.length()-2];
        l3=word2[word2.length()-1];
        l4=word2[word2.length()-2];
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word1<<"."<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(1))<<" "<<WordSearchRand(3)<<" the "<<word2<<"!"<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearch(1, l1, l2)<<"\\\\"<<endl;
        file<<LargeLettr(WordSearchRand(3))<<" the "<<WordSearchRand(1)<<" "<<WordSearch(4, l3, l4)<<"!"<<"\\\\"<<endl;
        file<<"\\verb| |\\\\"<<endl;
        if (i1==5){
            file<<"\\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n "<<endl;
        }
        }

        }

        file<<" \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ \n \\verb| |\\\\ "<<endl;
        file<<"\\verb| |\\\\ \n \\end{multicols} \n \\newpage "<<endl;

////
    file<<"\n \\end{large} \n \\end{document}"<<endl;

    wordsfile.close();
    typesfile.close();

    return 0;
}
