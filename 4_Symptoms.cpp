case 4:
gotoxy(25, 17);
SetConsoleTextAttribute(color, 14);
cout << "---------------------------------------------------------------------------";
gotoxy(52, 18);
cout << "COVID-19 SYMPTOMS";
gotoxy(25, 19);
cout << "---------------------------------------------------------------------------";
gotoxy(25, 22);
SetConsoleTextAttribute(color, 15);
cout << "-- Most common symptoms:";
gotoxy(25, 23);
cout << "   * FEVER";
gotoxy(25, 24);
cout << "   * DRY COUGH";
gotoxy(25, 25);
cout << "   * TIREDNESS";
gotoxy(25, 27);
cout << "-- LESS COMMON SYMPTOMS:";
gotoxy(25, 28);
cout << "   * ACHES AND PAINS";
gotoxy(25, 29);
cout << "   * SORE THROAT";
gotoxy(25, 30);
cout << "   * DIARRHOEA";
gotoxy(25, 31);
cout << "   * CONJUNCTIVITIS";
gotoxy(25, 32);
cout << "   * HEADACHE";
gotoxy(25, 33);
cout << "   * LOSS OF TASTE AND OR SMELL";
gotoxy(25, 34);
cout << "   * A RASH ON SKIN, OR DISCOLOURATION OF FINGERS OR TOES ";
gotoxy(25, 36);
cout << "-- SERIOUS SYMPTOMS:";
gotoxy(25, 37);
cout << "   * DIFFICULTY BREATHING OR SHORTNESS OF BREATH";
gotoxy(25, 38);
cout << "   * CHEST PAIN OR PRESSURE";
gotoxy(25, 39);
cout << "   * LOSS OF SPEECH OR MOVEMENT";
gotoxy(25, 43);
cout << "Seek immediate medical attention if you have serious symptoms.Always call before visiting your ";
gotoxy(25, 44);
cout << "doctor or health facility.";
gotoxy(25, 46);
cout << "People with mild symptoms who are otherwise healthy should manage their symptoms at home.";
gotoxy(25, 48);
cout << "On average it takes 5 to 6 days from when someone is infected with the virus for symptoms to";
gotoxy(25, 49);
cout << "show,4 however it can take up to 14 days.";
tryyes_no:
cout << "\n\n\n\t\t\t";
cout << "IF YOU WANT TO LOCATE A COVID-19 HOSPITAL NEAR YOU I CAN HELP YOU.";
cout << "\n\t\t\t";
cout << "1. YES";
cout << "\n\t\t\t";
cout << "2. NO";
cout << "\n\n\t\t\t";
cout << "CHOICE = ";
int yes_no;
cin >> yes_no;
switch (yes_no) {
case 1:
goto label1;
break;
case 2:
cout << "\n\t\t\t";
cout << "THANK YOU\n\n\n\n\n\n\n";
exit(0);
break;
default:
cout << "\n\n\t\t\t";
cout << "I2NVALID INPUT ";
cout << "\n\t\t\t";
cout << "TRY AGAIN";
goto tryyes_no;
break;
}
break;