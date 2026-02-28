#include <iostream>
#include <string>
#include <vector>

using namespace std;
void showMenu() {
    cout << "\n --- notes booke --- " << endl;
    cout << "1. add New" << endl;
    cout << "2. Looke notes " << endl;
    cout << "Exite " << endl;
    cout << "Please sleket a number:  ";
}

void createNote(vector<string>& notes){
    string newNote;
    cout <<"\n ritht your note and enter " << endl;
    cin.ignore();
    getline(cin, newNote);
    notes.push_back(newNote);
    cout << "seved your notes " << endl;
}
void viewNotes(const vector<string>& notes){
    if(notes.empty()) {
        cout << "\n note notes fond"<< endl;
        
    }else{
        cout << "\n list of your notes" << endl;
        for(int i = 0; i < notes.size(); ++i){
            cout << i + 1 << ". " << notes[i] << endl;
        }
    }
}

int main(){
    vector<string> myNotes;
    int choice;
    do{
        showMenu();
        cin >> choice;
        switch (choice){
            case 1:
                createNote(myNotes);
                break;
            case 2:
                viewNotes(myNotes);
                break;
            case 3 :
               cout << "Tanckes for you Exit" << endl;
               break;
            default:
               cout << "Gazina na motabar ast " << endl;
        }
    }while(choice != 3);

    return 0;
}