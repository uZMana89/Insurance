#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
void calFemale();
void calMale();

int main() {
    cout << "First time log in" << endl;
    string name, gender;
    int keynumber;
    
    cout << "Enter your username" << endl;
    cin >> name;
    cout << "Enter your password" << endl;
    cin >> keynumber;
    string username[5];
    int password[5];
    
    username[0] = name;
    password[0] = keynumber;
    string answer;
    
    cout << "Welcome" << endl;
    cout << "Enter your username" << endl;
    cin >> name;
    cout << "Enter your password" << endl;
    cin >> keynumber;
    if (username[0] != name || password[0] != keynumber) {
        cout << "You only have 3 chance" << endl;
        int count;
        
        count = 0;
        while (count < 3) {
            count = count + 1;
            if (username[0] != name || password[0] != keynumber) {
                cout << "Enter your username" << endl;
                cin >> name;
                cout << "Enter your password" << endl;
                cin >> keynumber;
            }
        }
        if (username[0] != name || password[0] != keynumber) {
        } else {
            cout << "Please enter gender" << endl;
            cin >> gender;
            if (gender != "M") {
                calFemale();
            } else {
                calMale();
            }
        }
    } else {
        cout << "Please enter gender" << endl;
        cin >> gender;
        if (gender != "M") {
            calFemale();
        } else {
            calMale();
        }
    }
    cout << "Do you want to continue" << endl;
    cin >> answer;
    while (answer != "No") {
        cout << "Please enter gender" << endl;
        cin >> gender;
        if (gender != "M") {
            calFemale();
        } else {
            calMale();
        }
    }
    cout << "Thank you for using me" << endl;
    cout << "Do you want to use it" << endl;
    cin >> answer;
    if (answer != "No") {
        cout << "Do you have account" << endl;
        cin >> answer;
        while (answer != "Yes") {
            cout << "Enter your username" << endl;
            cin >> name;
            cout << "Enter your password" << endl;
            cin >> keynumber;
            username[0] = name;
            password[0] = keynumber;
            cout << "Lets log in" << endl;
            cout << "Enter your username" << endl;
            cin >> name;
            cout << "Enter your password" << endl;
            cin >> keynumber;
            if (username[0] != name || password[0] != keynumber) {
                cout << "You only have 3 chance" << endl;
                int count;
                
                count = 0;
                while (count < 3) {
                    count = count + 1;
                    if (username[0] != name || password[0] != keynumber) {
                        cout << "Enter your username" << endl;
                        cin >> name;
                        cout << "Enter your password" << endl;
                        cin >> keynumber;
                    }
                }
                if (username[0] != name || password[0] != keynumber) {
                } else {
                    cout << "Please enter gender" << endl;
                    cin >> gender;
                    if (gender != "M") {
                        calFemale();
                    } else {
                        calMale();
                    }
                }
            } else {
                cout << "Please enter gender" << endl;
                cin >> gender;
                if (gender != "M") {
                    calFemale();
                } else {
                    calMale();
                }
            }
        }
        cout << "Lets log in" << endl;
        cout << "Enter your username" << endl;
        cin >> name;
        cout << "Enter your password" << endl;
        cin >> keynumber;
        if (username[0] != name || password[0] != keynumber) {
            cout << "You only have 3 chance" << endl;
            int count;
            
            count = 0;
            while (count < 3) {
                count = count + 1;
                if (username[0] != name || password[0] != keynumber) {
                    cout << "Enter your username" << endl;
                    cin >> name;
                    cout << "Enter your password" << endl;
                    cin >> keynumber;
                }
            }
            if (username[0] != name || password[0] != keynumber) {
            } else {
                cout << "Please enter gender" << endl;
                cin >> gender;
                if (gender != "M") {
                    calFemale();
                } else {
                    calMale();
                }
            }
        } else {
            cout << "Please enter gender" << endl;
            cin >> gender;
            if (gender != "M") {
                calFemale();
            } else {
                calMale();
            }
        }
    }
    cout << "Thank you for using" << endl;
    return 0;
}

void calFemale() {
    string answer;
    int age;
    int premium, faceValueofPolicy;
    
    cout << "Please enter face value of policy" << endl;
    cin >> faceValueofPolicy;
    cout << "Are you smoker" << endl;
    cin >> answer;
    if (answer != "No") {
        cout << "Please enter your age" << endl;
        cin >> age;
        if (age >= 18) {
            premium = (int) ((double) faceValueofPolicy / 1000 * 2.20);
            cout << premium << endl;
        } else {
            if (age >= 41) {
                premium = (int) ((double) faceValueofPolicy / 1000 * 2.25);
                cout << premium << endl;
            } else {
                if (age > 60) {
                    premium = (int) ((double) faceValueofPolicy / 1000 * 2.30);
                    cout << premium << endl;
                } else {
                    if (age < 18) {
                        premium = (int) ((double) faceValueofPolicy / 1000 * 2.15);
                        cout << premium << endl;
                    }
                }
            }
        }
    } else {
        cout << "Please enter your age" << endl;
        cin >> age;
        if (age >= 18) {
            premium = (int) ((double) faceValueofPolicy / 1000 * 2.10);
            cout << premium << endl;
        } else {
            if (age >= 41) {
                premium = (int) ((double) faceValueofPolicy / 1000 * 2.15);
                cout << premium << endl;
            } else {
                if (age > 60) {
                    premium = (int) ((double) faceValueofPolicy / 1000 * 2.20);
                    cout << premium << endl;
                } else {
                    if (age < 18) {
                        premium = (int) ((double) faceValueofPolicy / 1000 * 2.05);
                        cout << premium << endl;
                    }
                }
            }
        }
    }
}

void calMale() {
    string answer;
    int faceValueofPolicy, premium;
    int age;
    
    cout << "Please enter face value of policy" << endl;
    cin >> faceValueofPolicy;
    cout << "Are you smoker" << endl;
    cin >> answer;
    if (answer != "No") {
        cout << "Please enter your age" << endl;
        cin >> age;
        if (age >= 18) {
            premium = (int) ((double) faceValueofPolicy / 1000 * 2.70);
            cout << premium << endl;
        } else {
            if (age >= 41) {
                premium = (int) ((double) faceValueofPolicy / 1000 * 2.75);
                cout << premium << endl;
            } else {
                if (age > 60) {
                    premium = (int) ((double) faceValueofPolicy / 1000 * 2.80);
                    cout << premium << endl;
                } else {
                    if (age < 18) {
                        premium = (int) ((double) faceValueofPolicy / 1000 * 2.65);
                        cout << premium << endl;
                    }
                }
            }
        }
    } else {
        cout << "Please enter your age" << endl;
        cin >> age;
        if (age >= 18) {
            premium = (int) ((double) faceValueofPolicy / 1000 * 2.30);
            cout << premium << endl;
        } else {
            if (age >= 41) {
                premium = (int) ((double) faceValueofPolicy / 1000 * 2.35);
                cout << premium << endl;
            } else {
                if (age > 60) {
                    premium = (int) ((double) faceValueofPolicy / 1000 * 2.40);
                    cout << premium << endl;
                } else {
                    if (age < 18) {
                        premium = (int) ((double) faceValueofPolicy / 1000 * 2.25);
                        cout << premium << endl;
                    }
                }
            }
        }
    }
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

