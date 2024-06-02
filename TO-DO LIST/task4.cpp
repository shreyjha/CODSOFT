#include <iostream>
using namespace std;

void add(string todo[], int counter) {
    cin>>todo[counter];
}

int main() {

    cout<<"-------------------------"<<endl;
    cout<<"WELCOME TO THE TO-DO LIST"<<endl;
    cout<<"-------------------------"<<endl;

    int key;
    string todo[10];
    int counter = 0;
    int del, completed;

    cout<<"ADD TASKS - PRESS 1"<<endl;
    cout<<"VIEW TASKS - PRESS 2"<<endl;
    cout<<"DELETE TASKS - PRESS 3"<<endl;
    cout<<"TASKS STATUS - PRESS 4"<<endl;
    cout<<"EXIT THE TO-DO LIST - PRESS 0"<<endl<<endl;

    while (key != 0) {
        cout<<"PRESS A KEY : ";
        cin>>key;

        switch (key) {
            case 0:
            cout<<"----------------------------------"<<endl;
            cout<<"THANK YOU FOR USING THE TO-DO LIST"<<endl;
            cout<<"----------------------------------"<<endl;
            break;

            case 1:
            cout<<"ADD A TO-DO : ";
            add(todo, counter);
            counter++;
            break;

            case 2:
            if (counter == 0) {
                cout<<"TO-DO LIST : NOTHING TO SEE :)"<<endl;
            }

            else {
                cout<<"TO-DO LIST : "<<endl;
            for (int j=0; j<counter; j++) {
                cout<<"TASK - "<<j+1<<" "<<todo[j]<<endl;
            }
            }
            break;  

            case 3:
            cout<<"PRESS THE TASK NO. TO BE DELETED : ";
            cin>>del;
            for (int k=del-1; k<counter; k++) {
                if (k == counter-1) {
                    counter--;
                    break;
                }
                
                todo[k] = todo[k+1];
            }
            break;

            case 4:
            cout<<"PRESS THE TASK NO. TO BE MARKED AS COMPLETED : ";
            cin>>completed;

            todo[completed-1] = todo[completed-1] + " (COMPLETED)";
            break;

            default :
            cout<<"INVALID INPUT KEY!"<<endl;
        }
    }

    return 0;
}