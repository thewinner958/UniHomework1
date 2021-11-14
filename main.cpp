#include <iostream>

using namespace std;

// Task 1 function
int interval(int note, int octave) {
    int interval = note - octave;
    if (interval < 0) {
        interval *= interval;
    }
    return interval;
}

// Task 2 function
string intToRoman(int n) {
    string romanNums[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";

    for (int i = 0; i < 13; ++i) {
        while (n - values[i] >= 0) {
            result += romanNums[i];
            n -= values[i];
        }
    }
    return result;
}

int main() {
    // Task 1
    int note1, octave1, note2, octave2;
    cin >> note1 >> octave1 >> note2 >> octave2;
    int intervals = interval(note1, octave1) + interval(note2, octave2);
    switch (intervals) {
        case 0:
            cout << "Normal sound\n";
            break;
        case 1:
            cout << "Fake sound\n";
            break;
        case 2:
            cout << "Pleasure sound\n";
            break;
        case 3:
            cout << "Normal sound\n";
            break;
        case 4:
            cout << "Empty sound\n";
            break;
        case 5:
            cout << "Normal sound\n";
            break;
        case 6:
            cout << "Fake sound\n";
            break;
        case 7:
            cout << "Normal sound\n";
            break;
        default:
            cout << "Cannot define\n";
            break;
    }

    // Task 2
    int num;
    cin >> num;
    if (num <= 1000) {
        cout << intToRoman(num) << endl;
    } else {
        cout << "Number over 1000\n";
    }

    // Task 4
    int n;
    cin >> n;
    if (n > 0) {
        int temp = n;
        while (temp > 1) {
            for (int j = 0; j < temp / 10 + 1; ++j) {
                cout << "*";
            }
            cout << temp << endl;
            if (temp % 2 == 0) {
                temp = temp / 2;
            } else {
                temp = temp * 3 + 1;
            }
        }
    } else {
        cout << "Not positive number\n";
    }
    return 0;
}
