#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

// Convert input to lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    cout << "------------------------------------------\n";
    cout << " Simple AI ChatBot in C++\n";
    cout << "Type 'exit' to end the chat.\n";
    cout << "------------------------------------------\n\n";

    map<string, string> responses;

    // Predefined responses
    responses["hi"] = "Hello! How can I help you today?";
    responses["hello"] = "Hey there! What can I do for you?";
    responses["how are you"] = "I'm just a program, but I'm doing great! ";
    responses["what is your name"] = "I'm ChatCpp, your friendly chatbot built in C++!";
    responses["bye"] = "Goodbye! Have a great day Shubh! ";
    responses["who made you"] = "I was created using C++ — by a developer like you!";
    responses["help"] = "I can answer simple questions like 'hi', 'your name', 'how are you', etc.";
    responses["time"] = "Sorry, I can’t tell the exact time yet, but I can chat anytime!";
    responses["thanks"] = "You're welcome! ";

    string userInput;

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        userInput = toLowerCase(userInput);

        if (userInput == "exit" || userInput == "quit") {
            cout << "ChatBot: It was nice talking to you. Bye! " << endl;
            break;
        }

        bool found = false;

        for (auto &pair : responses) {
            if (userInput.find(pair.first) != string::npos) {
                cout << "ChatBot: " << pair.second << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "ChatBot: I'm not sure I understand that. " << endl;
    }

    return 0;
}
