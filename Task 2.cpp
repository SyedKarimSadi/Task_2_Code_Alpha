#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// Registration Function
void registerUser() {
    string username, password;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;
    if(username == "" || password == "") {
        cout<<"Invalid input!\n";
        return;
    }
    // Check duplicate username
    ifstream infile("users.txt");
    string u, p;
    while(infile >> u >> p) {
        if(u == username) {
            cout << "Username already exists!\n";
            infile.close();
            return;
        }
    }
    infile.close();
    ofstream outfile("users.txt", ios::app);
    outfile << username << " " << password << endl;
    outfile.close();
    cout << "Registration successful!\n";
}
// Login Function
void loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    ifstream infile("users.txt");
    string u, p;
    bool found = false;
    while(infile >> u >> p) {
        if(u == username && p == password) {
            found = true;
            break;
        }
    }
    infile.close();
    if(found){
        cout<<"Login successful!\n";
    }
    else{
        cout<<"Invalid username or password!\n";
    }
}
// Main Menu
int main() {
    int choice;
    do {
    	cout<<"===============WElCOME TO LOGIN AND REGISTRATION SYSTEM============"<<endl;
        cout<< "\n1. Register\n2. Login\n3. Exit\n";
        cout<< "Enter choice: ";
        cin>> choice;
        switch(choice){
            case 1:{
				registerUser();
				 break;
			}
            case 2:{
            	loginUser();
				break;
			}
            case 3:{
            	cout << "Exiting...\n"; 
				break;
			}
            default:{
            	cout << "Invalid choice!\n";
			}
        }
    } while(choice != 3);
    return 0;
}
