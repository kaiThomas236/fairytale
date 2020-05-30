//Kai Thomas
//2-28-18
//Choose Your Own Story (fairy tale)

/*
Algorithm: call opening screen function, ask user if they want to play (yes or no: yes - call story function, no - goodbye)
story function: using while loops, if and if else statements, cout and cin, and good nesting, build the story

Update: deleted the opening screen function as it over complicated things, choices to play are now in main (yes and q) and call story from main
*/

//g++ -std=c++11 fairytale.cpp -o fairy && fairy

#include <iostream>
using namespace std;


void storyLine(string name)
{
    string choice1;
    string choice2;
    string choice3;
    string choice4;
    string choice5;
    string choice6;
    string choice7;
    string choice8;
    string choice9;
    string choice10;
    string choice11;
    cout << "\nOne day you awaken, in a large forest, on a forgotten island. Around you as far as the eye can see are trees. You wander a ways through the forest before stumbling upon a sign that reads 'Do Not Ignore Them'. You wander on for a while longer before stopping to rest against a large coniferous tree. It is so huge that if you were to wrap your arms around it, your hands wouldn't touch on the other side. 'Well, hello there', says a breezy voice above you, 'we haven't seen any new guests in quite some time. How did you happen to be here?'" << endl << endl << "What would you like to do? Please enter 'respond' to respond the trees or 'ignore' to ignore the trees: ";
    cin >> choice1;
    while (choice1 != "respond" && choice1 != "ignore")
    {
        cout << "\nNot a valid choice. Please input 'respond' or 'ignore': ";
        cin >> choice1;
    }
    if (choice1 == "respond")
    {
        cout << "\nThe voice is silent while you respond but the sound of the wind whistling through the leaves is starting to sound a whole lot like whispers. 'Pleasure to meet you " << name << ",' says the original voice 'We are the trees. We have been the guardians of this island, and all of it's treasures, since the beginning of time, and we will continue to do the job until the end of time.' After the tree falls silent you can hear a faint singing in the distance, you can't make out the words." << endl << endl << "What would you like to do? Please enter 'stay' to stay where you are or 'toward' to go toward the sound: ";
        cin >> choice2;
        while (choice2 != "stay" && choice2 != "toward")
        {
            cout << "\nNot a valid choice. Please input 'stay' or 'toward': ";
            cin >> choice2;
        }
        if (choice2 == "stay")
        {
            cout << "\nFaintly, over the whisperings of the trees, you hear the singing coming closer. Your eyes search for the sound through the wood but your feet feel stuck to the ground. Then suddenly you catch a glimpse, and a few moments later you see them.  They're the most beautiful human you've ever seen. You call out to them, introducing yourself. They look torn between running and responding for a few moments before deciding to respond. 'Wow, I haven't seen a human in years. How did you get here? Do you know how to leave? Will you take me with you? " << name << ", I've been stuck on this island since I was a child!'. You respond, explaining that you don't know how you got here and you don't know how to leave. 'They keep me here,' Jade whispers to you, 'I really don't know if its a good idea to try to leave if you don't know how you got here.' The two of you talk it over with a captive, responsive audience and decide that it is better to stay on the island and not fight against the trees. In the past Jade has slept up in the tree branches but you aren't comfortable doing so. You decide you want to build a shelter." << endl << endl << "What would you like to do? Please enter 'chop' to chop down trees for wood or 'ask' to ask the trees for wood: ";
            cin >> choice4;
            while (choice4 != "chop" && choice4 != "ask")
            {
                cout << "\nNot a valid choice. Please input 'chop' or 'ask': " ;
                cin >> choice4;
            }
            if (choice4 == "chop")
            {
                cout << "\nThe trees decide to punish you for chopping them. You both die." << endl;
                cout << "\nThe end!" << endl;
                return;
            }
            if (choice4 == "ask")
            {
                cout << "\nThe trees offer you enough wood to build a modest shelter. You and Jade live happily ever after on the island." << endl;
                cout << "\nThe end!" << endl;
                return;
            }
        }
        if (choice2 == "toward")
        {
            cout << "\nYou begin to walk away from the trees, toward the fascinating voice. Behind you the trees grumble and complain, calling you rude and making some pretty harsh assumptions about humans. As you weave through the forest they ignore you, and that voice draws nearer and nearer. Suddenly you break through the last of the trees and stumble onto a beautiful, sandy shore. The ocean stretches in front of you for what feels like forever. The voice has gone silent so you scan the beach, and standing about ten meters to your right is the most beautiful human you've ever seen. You call out to them, introducing yourself. They look torn between running and responding for a few moments before deciding to respond. 'Wow, I haven't seen a human in years. How did you get here? Do you know how to leave? Will you take me with you? " << name << ", I've been stuck on this island since I was a child!' " << endl << endl << "What would you like to do? Please enter 'swim' to swim for your freedom  or 'woods' to return to the woods: ";
            cin >> choice7;
            while (choice7 != "swim" && choice7 != "woods")
            {
                cout << "\nNot a valid choice. Please input 'swim' or 'woods': ";
                cin >> choice7;
            }
            if (choice7 == "swim")
            {
                cout << "\nAs soon as you can no longer touch the ground the waves pull you under. You drown. The waves whisk Jade back to the island to be a prisoner still." << endl;
                cout << "\nThe end!" << endl;
                return;
            }
            if (choice7 == "woods")
            {
                cout << "\nThe two of you enter into the woods and that familiar whispering starts up again. 'They keep me here,' Jade whispers to you, 'I really don't know if its a good idea to try to leave if you don't know how you got here.' The two of you talk it over with a captive, responsive audience and decide that it is better to stay on the island and not fight against the trees. In the past Jade has slept up in the tree branches but you aren't comfortable doing so. You decide you want to build a shelter." << endl << endl << "What would you like to do? Please enter 'chop' to chop down trees for wood or 'ask' to ask the trees for wood: ";
                cin >> choice8;
                while (choice8 != "chop" && choice8 != "ask")
                {
                    cout << "\nNot a valid choice. Please input 'chop' or 'ask': ";
                    cin >> choice8;
                }
                if (choice8 == "chop")
                {
                    cout << "\nThe trees decide to punish you for chopping them. You both die." << endl;
                    cout << "\nThe end!" << endl;
                    return;
                }
                if (choice8 == "ask")
                {
                    cout << "\nThe trees offer you enough wood to build a modest shelter. You and Jade live happily ever after on the island." << endl;
                    cout << "\nThe end!" << endl;
                    return;
                }
            }
        }
    }
    if (choice1 == "ignore")
    {
        cout << "\nThe trees begin hitting you with their branches, at first it doesn't hurt too bad but the longer you ignore them the harder they hit you. You feel yourself becoming weak and you can feel the wounds forming across your body. You decide to run for it." << endl << endl << "What would you like to do? Please enter 'woods' to run deeper into the woods or 'shore' to run to the shore: ";
        cin >> choice3;
        while (choice3 != "woods" && choice3 != "shore")
        {
            cout << "\nNot a valid choice. Please input 'woods' or 'shore': ";
            cin >> choice3;
        }
        if (choice3 == "woods")
        {
            cout << "\nThe trees are moving, intentionally confusing you and tripping you with their roots. You get lost in the woods. You starve to death." << endl;
            cout << "\nThe end!" << endl;
            return;
        }
        if (choice3 == "shore")
        {
            cout << "\nYou begin to walk away from the trees, toward the sound of the waves crashing. Behind you the trees grumble and complain, calling you rude and making some pretty harsh assumptions about humans. As you weave through the forest they ignore you, and the light on the shore draws nearer and nearer. Suddenly you break through the last of the trees and stumble onto a beautiful, sandy beach. The ocean stretches in front of you for what feels like forever. You scan the beach, and standing about ten meters to your right is the most beautiful human you've ever seen. You call out to them, introducing yourself. They look torn between running and responding for a few moments before deciding to respond. 'Wow, I haven't seen a human in years. How did you get here? Do you know how to leave? Will you take me with you? " << name << ", I've been stuck on this island since I was a child!' " << endl << endl << "What would you like to do? Please enter 'swim' to swim for your freedom  or 'woods' to return to the woods: ";
            cin >> choice6;
            while (choice6 != "swim" && choice6 != "woods")
            {
                cout << "\nNot a valid choice. Please input 'swim' or 'woods': ";
                cin >> choice6;
            }
            if (choice6 == "swim")
            {
                cout << "\nAs soon as you can no longer touch the ground the waves pull you under. You drown. The waves whisk Jade back to the island to be a prisoner again." << endl;
                cout << "\nThe end!" << endl;
                return;
            }
            if (choice6 == "woods")
            {
                cout << "\nThe two of you enter into the woods and that familiar whispering starts up again. 'They keep me here,' Jade whispers to you, 'I really don't know if its a good idea to try to leave if you don't know how you got here.' The two of you talk it over with a captive, responsive audience and decide that it is better to stay on the island and not fight against the trees. In the past Jade has slept up in the tree branches but you aren't comfortable doing so. You decide you want to build a shelter." << endl << endl << "What would you like to do? Please enter 'chop' to chop down trees for wood or 'ask' to ask the trees for wood: ";
                cin >> choice9;
                while (choice9 != "chop" && choice9 != "ask")
                {
                    cout << "\nNot a valid choice. Please input 'chop' or 'ask': ";
                    cin >> choice9;
                }
                if (choice9 == "chop")
                {
                    cout << "\nThe trees decide to punish you for chopping them. You both die." << endl;
                    cout << "\nThe end!" << endl;
                    return;
                }
                if (choice9 == "ask")
                {
                    cout << "\nThe trees offer you enough wood to build a modest shelter. You and Jade live happily ever after on the island." << endl;
                    cout << "\nThe end!" << endl;
                    return;
                }
            }
        }
    }

}

void openingScreen()
{
    string input;
    string name;
    cout << "Welcome to Kai's Choose Your Own Adventure Fairy Tale! Please input your name: ";
    cin >> name;
    cout << "\nWould you like to start the story? Please input 'yes' or 'no': ";
    cin >> input;
    if (input == "no")
    {
      cout << "Okay. See you later!";
      return;
    }
    while (input != "yes" && input != "q")
    {
        cout << "\nNot a valid choice. Please input 'yes' or 'no': ";
        cin >> input;
    }
    while (input == "yes")
    {
        cout << "\nGreat! Get ready..." << endl << endl;
        storyLine(name);
        cout << "\nWould you like to play again? Please input 'yes' to play again or 'q' to quit: ";
        cin >> input;
        while (input != "yes" && input != "q")
        {
            cout << "\nNot a valid choice. Please input 'yes' to start or 'q' to quit: ";
            cin >> input;
        }
        if (input == "q")
        {
          cout << endl << "Okay. See you later!" << endl;
          return;
        }
    }
    if (input == "q")
    {
      cout << endl << "Okay. See you later!" << endl;
      return;
    }
}

int main()
{
    openingScreen();
    return 0;
}
