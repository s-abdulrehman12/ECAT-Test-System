#include <iostream>
#include <windows.h>
using namespace std;
void add(int &num)
{
    num = num + 4;
}
void sub(int &num)
{
    num = num - 1;
}
void same(int &num)
{
    num = num;
}
int main()
{
    cout << "   _ \\         _)              \\      _  \\    _ \\      " << endl;
    cout << "  |   |  |   |  | _  /        _ \\    |   |  |   |         " << endl;
    cout << "  |   |  |   |  |   /        ___ \\   ___/   ___/          " << endl;
    cout << " \\__\\_\\ \\__,_| _| ___|     _/    _\\ _|     _|         " << endl;

    int number = 0;
    char option;
    string name;
    string fname;
    int operation;
    char gender;
    long long int cnic;
    for (int i = 0; i < 9; i++)
    {
        cout << "what the kind of operation you want to perform :" << endl;
        cout << "1)Enrollment of Ecat test :" << endl;
        cout << "2)Checking the key of Ecat :" << endl;
        cout << "3)Ending the ECAT TEST SYSTEM;" << endl;
        cin >> operation;
        int rollno[8] = {520, 545, 530, 518, 500, 471, 408, 421};
        int *pointer = rollno;
        if (operation == 1)
        {
			system("cls");
            cout << "Here You want to enroll the test (y/n)";
            cin >> option;
            if(option=='n'|| option =='N'){
            	break;
			}
            if (option == 'y' || option == 'Y')
            {
                cout << "Enter the Name :";
                cin >> name;
                cout << "Enter the Father Name :";
                cin >> fname;
                cout << "Enter your gender (m/f)):";
                cin >> gender;
                cout << "Enter your CNIC number :";
                cin >> cnic;
                system("cls");
			
                cout << "**********************************************************************************" << endl;
                cout << "**************************Here is your Information********************************" << endl;
                cout << "Name :" << name << "\t"
                     << "Father Name :" << fname << "\t" << endl;
                cout << "Gender :" << gender << "\t"
                     << "CNIC NO :" << cnic << "\t" << endl;
                cout << "Here is your roll no assigned by UET:";
                cout << *(pointer + i) << endl;
                cout << "***********************************************************************************" << endl;
                system("pause");
            }
            system("cls");
            cout << "*******************************************************************************" << endl;
            cout << "**********************Instructions about Ecat**********************************" << endl;
            cout << "*******************************************************************************" << endl;
            cout << "Test consists of 30 MCQS OF MATHEMATICS,30 MCQS OF PHYSICS,30 MCQS OF CHEMISTRY,10 MCQS OF ENGLISH :" << endl;
            cout << "Test has 120 minutes for your attempt:" << endl;
            cout << "Correct answere results in addition of 4 marks :" << endl;
            cout << "Wrong answere result in subtraction of 1 mark from your original marks :" << endl;
            cout << "If you dont attempt question,this result in no evaluation and deduction:" << endl;
            cout << "Press t for ending the test :" << endl;
           
            cout << "ARE YOU READY TO STARRT YOUR TEST :";
            cin >> option;
             system("cls");
            if (option == 'y' || option == 'Y')
            {
            	
            question1:
                system("cls");
                cout << "1)  What is the Capital of Pakistan ??" << endl;
                cout << "A)Lahore                             B)Karachi" << endl;
                cout << "C)Islamabad                          D)None of these " << endl;
                cout << "Enter your Option :";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'C' || option == 'c')
                {
                    add(number);
                }
                else if ((option != 'C' || option != 'c') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question2;
                }
            question2:
                system("cls");
                cout << "2) What is the capital of punjab ??" << endl;
                cout << "A)Lahore                             B)Karachi" << endl;
                cout << "C)Islamabad                          D)None of these " << endl;
                cout << "Enter your Option :";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question3;
                }
            question3:
                system("cls");
                cout << "3)What is the capital of Sindh ?? " << endl;
                cout << "A)Lahore                             B)Karachi" << endl;
                cout << "C)Islamabad                          D)None of these " << endl;
                cout << "Enter your Option (press t for skip ):";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'B' || option == 'b')
                {
                    add(number);
                }
                else if ((option != 'B' || option != 'b') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question4;
                }
            question4:
                system("cls");
                cout << "4)Find the value of x in the equation: 3x + 7 = 22." << endl;
                cout << "a)5 \t b)15" << endl;
                cout << "c)10 \t b)none of tehse " << endl;
                cout << "Enter your option :";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }

                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question5;
                }
            question5:
                system("cls");
                cout << "5)If a circle has a diameter of 10 cm, what is its circumference? (Take p = 3.14)" << endl;
                cout << "a) 10p cm \t b)15p cm" << endl;
                cout << "c)20p cm \t  d)5pcm" << endl;
                cout << "Enter your option :";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'C' || option == 'c')
                {
                    add(number);
                }
                else if ((option != 'C' || option != 'c') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question6;
                }
            question6:
                system("cls");
                cout << "6)What is the formula for calculating kinetic energy?" << endl;
                cout << "a) KE = mv \t	b) KE = 0.5 * m * v^2" << endl;
                cout << "c) KE = m / v \t    d)d) KE = m * a" << endl;
                cout << "Enter your option :";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'B' || option == 'b')
                {
                    add(number);
                }
                else if ((option != 'B' || option != 'b') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question7;
                }
            question7:
                system("cls");
                cout << "7)What happens to the resistance in a wire if its length is doubled while keeping the cross-sectional area constant?" << endl;
                cout << "a) It is halved \t b) It doubles." << endl;
                cout << "c) It remains the same. \t d) It becomes four times." << endl;
                cout << "Enter your option :";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'C' || option == 'c')
                {
                    add(number);
                }
                else if ((option != 'C' || option != 'c') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question8;
                }
            question8:
                system("cls");
                cout << "8)Which of the following is an alkali metal?" << endl;
                cout << "a) Sodium (Na) \t b) Iron (Fe)" << endl;
                cout << "c) Calcium (Ca) \t d) Chlorine (Cl)" << endl;
                cout << "Enter your option :";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question9;
                }
            question9:
                system("cls");
                cout << "9)What is the chemical formula for sulfuric acid?" << endl;
                cout << "a) H2SO3 \t b) HCl" << endl;
                cout << "c) H2SO4 \t d) HNO3" << endl;
                cout << "Enter your option :";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'C' || option == 'c')
                {
                    add(number);
                }
                else if ((option != 'C' || option != 'c') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question10;
                }
            question10:
                system("cls");
                cout << "10)If If the sum of the angles of a triangle is 180 degrees and two of the angles are 40 and 70 degrees, find the third angle." << endl;
                cout << "A) 50 degrees \t B) 60 degrees" << endl;
                cout << "C) 70 degrees \t D)80 degrees" << endl;
                cout << "Enter your option :";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'C' || option == 'c')
                {
                    add(number);
                }
                else if ((option != 'C' || option != 'c') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question11;
                }
            question11:
                system("cls");
                cout << "11)Solve the equation for x: x^2 + 4x - 12 = 0" << endl;
                cout << "a) x = 2, x = -6 \t b) x = -2, x = 6" << endl;
                cout << "c) x = -3, x = 4 \t d) x=0, x=4" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question12;
                }
            question12:
                system("cls");
                cout << "12)Find the area of a triangle with base 10 cm and height 5 cm." << endl;
                cout << "a) 25 cm² \t b) 30 cm²" << endl;
                cout << "c) 50 cm² \t d) 100 cm²" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'a' || option != 'A') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question13;
                }
            question13:
                system("cls");
                cout << "13)If f(x) = x^3 - 2x^2 + 5x, find f'(x)." << endl;
                cout << "a) f'(x) = 3x^2 - 4x + 5 \t b) f'(x) = 3x^2 - 2x + 5" << endl;
                cout << "c) f'(x) = x^2 - 2x + 5 \t d) f'(x) = 3x^3 - 6x^2 + 15x" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question14;
                }
            question14:
                system("cls");
                cout << "14)What is the unit of force?" << endl;
                cout << "a) Newton (N) \t b) Joule (J)" << endl;
                cout << "c) Meter per second (m/s) \t d) Watt (W)" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question15;
                }
            question15:
                system("cls");
                cout << "15)the formula for the gravitational force between two objects." << endl;
                cout << "a) F = G * (m1 * m2) / r^2 \t b) F = ma" << endl;
                cout << "c) F = mv^2 \t d) F = V/I" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question16;
                }
            question16:
                system("cls");
                cout << "16)What is the chemical formula for water?" << endl;
                cout << "a) H2O \t b) CO2" << endl;
                cout << "c) NH3 \t d) NaCl" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question17;
                }
            question17:
                system("cls");
                cout << "17)What is the chemical formula for water?" << endl;
                cout << "a) H2O \t b) CO2" << endl;
                cout << "c) NH3 \t d) NaCl" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question18;
                }
            question18:
                system("cls");
                cout << "18)Balance the following equation: Fe + HCl -> FeCl2 + H2" << endl;
                cout << "a) Fe + 2HCl -> FeCl2 + H2 \t b) 2Fe + 4HCl -> 2FeCl2 + 2H2" << endl;
                cout << "c) 3Fe + 6HCl -> 3FeCl2 + 3H2 \t d) 4Fe + 8HCl -> 4FeCl2 + 4H2" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question19;
                }
            question19:
                system("cls");
                cout << "19)Choose the synonym for the word :obscure." << endl;
                cout << "a) Clear \t b) Unknown" << endl;
                cout << "c) Common \t d) Familiar" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'B' || option == 'b')
                {
                    add(number);
                }
                else if ((option != 'B' || option != 'b') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question20;
                }
            question20:
                system("cls");
                cout << "20)Identify the grammatical error in the following sentence: We were very happy to hear the good news." << endl;
                cout << "a) were should be was \t b) to hear should be hearing" << endl;
                cout << "c) the should be a \t d) Sentence is grammatically correct" << endl;
                cout << "Enter your option:";
                cin >> option;
                if (option == 't')
                {
                    cout << "Your total Numbers out of 100  :" << number << endl;
                    continue;
                }
                if (option == 'D' || option == 'd')
                {
                    add(number);
                }
                else if ((option != 'D' || option != 'd') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
            question21:
                system("cls");
                cout << "21) Who is the father of Computers  ??" << endl;
                cout << "A)Charles Babbage                             B)pascal" << endl;
                cout << "C)abacas                           D)None of these" << endl;
                cout << "Enter your Option :";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question22;
                }
            question22:
                system("cls");
                cout << "22) What is the current generation of Computers ??" << endl;
                cout << "A)first                             B)third" << endl;
                cout << "C)Four                         D)Fifth " << endl;
                cout << "Enter your Option :";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'D' || option == 'd')
                {
                    add(number);
                }
                else if ((option != 'D' || option != 'd') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question23;
                }
            question23:
                system("cls");
                cout << "23) What is the purpose of computers at early stages??" << endl;
                cout << "A)to perform calculations                            B)watching reels" << endl;
                cout << "C)to playing games                          D)None of these " << endl;
                cout << "Enter your Option :";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'A' || option == 'a')
                {
                    add(number);
                }
                else if ((option != 'A' || option != 'a') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question24;
                }
            question24:
                system("cls");
                cout << "24) In c++,how many types of loops are :??" << endl;
                cout << "A)4                             B)3" << endl;
                cout << "C)1                          D)None of these " << endl;
                cout << "Enter your Option :";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'B' || option == 'b')
                {
                    add(number);
                }
                else if ((option != 'B' || option != 'b') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                    goto question25;
                }
            question25:
                system("cls");
                cout << "25) In C++,how many projects are you created  ??" << endl;
                cout << "A)16                             B)10" << endl;
                cout << "C)100                          D)0 " << endl;
                cout << "Enter your Option :";
                cin >> option;
                if (option == 't')
                {
                    same(number);
                    cout << "Your number :" << number << endl;
                    continue;
                }
                if (option == 'D' || option == 'd')
                {
                    add(number);
                }
                else if ((option != 'D' || option != 'd') && (option != 's' && option != 't'))
                {
                    sub(number);
                }
                else if (option == 'S' || option == 's')
                {
                    same(number);
                }
            }
        }
        cout << "Your total Numbers out of 100  :" << number << endl;

        if (operation == 2)
        {
            cout << "***********************************************************************************" << endl;
            cout << "********************************Ecat Test key portion******************************" << endl;
            int id = 1;
            int pass = 1;
            cout << "Enter your teacher id given by UET :";
            cin >> id;
            cout << "Enter the password given by UET :";
            cin >> pass;
            if (id == 520 && pass == 2023)
            {
                cout << "**************************************************************************:" << endl;
                cout << "********************Here is your key**************************************" << endl;
                cout << "***************************************************************************" << endl;
                cout << "1)C \t 2)A \t 3)B" << endl;
                cout << "4)A \t 5)C \t 6)B" << endl;
                cout << "7)C \t 8)A \t 9)C" << endl;
                cout << "10)C \t 11)A \t 12)A" << endl;
                cout << "13)A \t 14)A \t 15)A" << endl;
                cout << "16)A \t 17)A \t 18)A" << endl;
                cout << "19)B \t 20)D \t 21)A" << endl;
            	cout << "22)D \t 23)A \t 24)B" << endl;
            	cout<<"25)D";
			}
            else
            {
                cout << "Yoou are a theif try to cheat :" << endl;
            }
        }
        if (operation == 3)
        {
            cout << "Thanks for using our ECAT test system :";
            cout << "                       ____|           |   |                        " << endl;
            cout << "               _)      __|    __ \\    _` |     _)                " << endl;
            cout << " _____| _____|         |      |   |  (   ||       _____| _____|    " << endl;
            cout << "               _)     _____| _|  _| \\__,_|     _)                " << endl;
            break;
        }
    }
}

