#include <iostream>
using namespace std;
int main()
{
    int speed;
    int gear;
    cout << "Enter ur speed" << endl;
    cin >> speed;
    cout << "Enter ur gear" << endl;
    cin >> gear;
    if(speed >= 67 && gear >= 3){
           cout << "Woah! Woah! Now that's really fast lad!" << endl;
           if(speed >= 51 && gear >= 2){
           cout << "i said get movin, not rollin dude!" << endl;
           }
    }else{
        for(int x = 1; x <= 50; x++){
        x = speed;
        cout << "speed?" << endl;
        cin >> speed;}
        while(speed <= 50){
        cout << "get movin dude!" << endl;
        speed = speed + 1;
    }
    };
    return 0;
}


/* if/else STATEMENTS

- An if statement consists of keyword 'if' followed by a (test which contains relational/comparison operators,
equality operators or logical operators) followed by the {code which runs if the given if statement is true}.

- An else statement necessarily needs an 'if {statement}' prior to the 'else{statement}' and runs only if the
if statement prior to it is false.

- You can nest as many if statements inside an if/else statement as you want, only if you know how to nest em
properly. LOL! I said that because you gotta watch out where one statement ends and the next one begins, what
condition/test it contains and how different statements are interacting with each other.

- You also need to observe in what order/sequence the program is running those different statements. It's quite
likely that you are trying to write code for something you have on your mind but you have failed to put your
statements in the right order, so the program enters somewhere else and gets stuck there instead of doing what
you originally had on your mind while writing it.

- It's called the 'The Loop of Infinite Embarrassment', ehm ehm! Just Kidding, hehe!

- Anyhow, moving forwards, this repo contains 4 .cpp files(names mentioned underneath aren't case-sensitive:
    1. if statement in C++.cpp
    2. if/else statement in C++.cpp
    3. While Loop in C++.cpp
    4. For Loop in C++

- As the names indicate, all the files contain simple/basic code for each of the statements/loops.

- Additionally, "if/else statement in C++.cpp" contains the code I was trying to write for something I had on
mind. I could not make it produce the exact result I wanted but it did pretty well given the fact I had very
basic knowledge and no prior experience with computational logic & thinking.

- Remember those "fasten your seat belt" indicators and ännoying sound your car makes until you have fastened
your seat belt? I was trying to mimic that by telling my program to say "get moving dude!" until it reached
the speed of 50 where speed is a variable I had defined earlier in the program.

- Well, I was able to do that but I wanted my program to continuously take speed variable as an input until
it reached the speed of 50.

- I succeeded in making half part of the logic where it continuously took the input from the user(which would
have been the car's speed sensor in real life scenario).

- However, I failed at the second part of the logic where my program should've left the for loop(I made to take
input until the speed was 50) and ran the else{statement}.

- I have not given up, I shall definitely make it work but it needs alot of tinkering and I have got basics to
cover. I shall come back to it later.

- Till then, have fun! And see if you can do it.

- Lemme know if u succeed.

*/
