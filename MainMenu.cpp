// CS1300 Fall 2021
// Author: Tome Dudanov
// Recitation: 313 - Kaleb Bishop
// Project 3  - Code Skeleton (Main Menu)
#include <iostream>
#include <fstream>
#include <string>
#include "Players.h"
#include "Cars.h"
#include "NPCs.h"
#include "Leaderboard.h"
#include "Map.h"
using namespace std;

/*
 * This main function doesn't do anything quite yet, I'm just making it to see what choices I need.
 * The main function in the game will NOT look even remotely similar to this.
 * My idea is to make a standalone function that'll print and do everything.
 * The final main function will have 1 to 2 lines, basically just calling the standalone function mentioned above.
 * For example, if I name it void play(), then int main will consist of only play(); and return 0;
 */

int minigame()
{
    int x,c=0;
    cout<<"1. Do you start the race with a higher or lower RPM (Rotations per Minute of the pistons in the engine) count?\n"
          "1 - Higher 2 - Lower"<<endl;
    do {
        cin>>x;
        switch (x)
        {
            case 1:
                c++;
                break;
            case 2:
                break;
            default:
                cout<<"Invalid Input"<<endl;
        }
    }
    while (x != 1 && x != 2);
    cout<<"2. You're in first gear, 5000 RPMs. Shift to 2?\n"
          "1 - Yes 2 - No"<<endl;
    do {
        cin>>x;
        switch (x)
        {
            case 1:
                c++;
                break;
            case 2:
                break;
            default:
                cout<<"Invalid Input"<<endl;
        }
    }
    while (x != 1 && x != 2);
    cout<<"3. You're now in 2 gear, 3000 RPMs. Do you shift to 3?\n"
          "1 - Yes 2 - No"<<endl;
    do {
        cin>>x;
        switch (x)
        {
            case 1:
                break;
            case 2:
                c++;
                break;
            default:
                cout<<"Invalid Input"<<endl;
        }
    }
    while (x != 1 && x != 2);
    cout<<"4. You have nitrous in your car. Do you boost it earlier or later in the race?\n"
          "1 - Earlier 2 - Later"<<endl;
    do {
        cin>>x;
        switch (x)
        {
            case 1:
                break;
            case 2:
                c++;
                break;
            default:
                cout<<"Invalid Input"<<endl;
        }
    }
    while (x != 1 && x != 2);
    cout<<"5. You're about to corner with a high speed and in 4th gear. Do you downshift or stay in the current gear?\n"
          "1 - Downshift 2 - Stay in Gear"<<endl;
    do {
        cin>>x;
        switch (x)
        {
            case 1:
                c++;
                break;
            case 2:
                break;
            default:
                cout<<"Invalid Input"<<endl;
        }
    }
    while (x != 1 && x != 2);
    return c;
}

int main()
{
    //These are all helper variables I use throughout my code.
    int input=0;
    int input_beg=0;
    string playerName;
    Players player1;
    string temp;
    char input2;
    bool hasProgress=0;
    NPCs James; //I really should've named the NPCs class "Drivers", but it is what it is.
    Map map;
    char move;
    Leaderboard James_lb;
    int input_kc1=0;
    int input_kc11=0;
    int input_kc12=0;
    int input_kc2=0;
    int input_kc21=0;
    int input_kc22=0;
    NPCs Hector; //Hector is in the story. I set his variables here so I don't have to scope my switch() statement.
    Hector.setNPCName("Hector");
    Hector.setNPCCar("Mazda Miata NC", "Manual", 68);
    Leaderboard Hector_lb;
    Hector_lb.setName("Hector");
    Hector_lb.setTotalSC(Hector.getNPCCarSC() + 22);
    int count=0; //This is for the mini-game, to count the number of correct choices.
    //It'll take the return value from the mini game, and see if it's >4 or 5.

    a:cout<<"--- <THE UNDERGROUND RACER>  ---"<<endl; //The "a:" is for a goto statement I use in the switch below.
    // The name of this game is the underground racer. Yes, I know it's corny.
    cout<<"Main Menu"<<endl;
    cout<<"1. Start Game"<<endl;
    cout<<"2. Read Progress File"<<endl;
    cout<<"3. How To Play"<<endl;
    cout<<"4. Quit Game"<<endl;
    cin>>input;
    switch (input)
    {
        case 1:
        {
            cout << "Enter your player name: ";
            cin >> playerName;
            cout << endl;
            player1.setPlayerName(playerName); //Setting the Name of the new player.
            player1.setPlayerProgressFile(playerName); //Setting the player1 progress file name.
            ofstream Progress(player1.getPlayerProgressFile());

            //Game Start
            //Every cout has an ofstream with exactly the same contents, so the progress will be saved.
            //Unfortunately, due to a lack of time, I couldn't make a Load Game.
            //That would've been amazing to do and although hard, it could've been done, but I underestimated the amount of time this project would take me.

            cout<<"-----11 AM, Thursday-----"<<endl;
            Progress<<"-----11 AM, Thursday-----"<<endl;
            cout<<"Narrator: \"You work at a bank during a busy day. You're tired from working all night on a PowerPoint or Excel they made you do. \n"
                  "You are made to do things that are kind of degrading - you went through college to work a job any high school kid with a computer can do.\n"
                  "You wanna quit, but you can't.\""<<endl;
            Progress<<"Narrator: \"You work at a bank during a busy day. You're tired from working all night on a PowerPoint or Excel they made you do. \n"
                  "You are made to do things that are kind of degrading - you went through college to work a job any high school kid with a computer can do.\n"
                  "You wanna quit, but you can't.\""<<endl;
            cout<< "Boss: *to you* \"James! I need this month's stats and the PowerPoint you needed to do!\""<<endl;
            Progress<< "Boss: *to you* \"James! I need this month's stats and the PowerPoint you needed to do!\""<<endl;
            cout<<"James (you): (choose input)"<<endl;
            Progress<<"James (you): "<<endl;
            cout<<"1. Right away, boss!"<<endl;
            cout<<"2. Fuck you and this lame dead end job, Jim! I'll get them to you when I get them to you!"<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"Right away, boss!\""<<endl;
                        Progress<<"\"Right away, boss!\""<<endl;
                        break;
                    case 2:
                        cout<<"\"(quietly) I wish I could say that... (loudly, to boss) Of course, sir!\""<<endl;
                        Progress<<"\"(quietly) I wish I could say that... (loudly, to boss) Of course, sir!\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Boss: \"Thanks, James. You're a good kid.\""<<endl;
            Progress<<"Boss: \"Thanks, James. You're a good kid.\""<<endl;
            cout<<"James: (quietly and ironically) \"Thanks...\""<<endl;
            Progress<<"James: (quietly and ironically) \"Thanks...\""<<endl;
            cout<<"Andrew: \"Sup, James?\""<<endl;
            Progress<<"Andrew: \"Sup, James?\""<<endl;
            cout<<"Narrator: \"Andrew's James' best friend. He's the one guy who's truly there for him through anything. James got this job because of him.\""<<endl;
            Progress<<"Narrator: \"Andrew's James' best friend. He's the one guy who's truly there for him through anything. James got this job because of him.\""<<endl;
            cout<<"James:"<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. (ironically) \"Super excited to be here, Andy, feel VERY happy.\""<<endl;
            cout<<"2. \"Oh, hey, bro. I'm super tired, can't wait for this day to be over.\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"(ironically) \"Super excited to be here, Andy, feel VERY happy.\""<<endl;
                        Progress<<"(ironically) \"Super excited to be here, Andy, feel VERY happy.\""<<endl;
                        break;
                    case 2:
                        cout<<"\"Oh, hey, bro. I'm super tired, can't wait for this day to be over.\""<<endl;
                        Progress<<"\"Oh, hey, bro. I'm super tired, can't wait for this day to be over.\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Andrew: \"Hey, don't forget Saturday night!\""<<endl;
            Progress<<"Andrew: \"Hey, don't forget Saturday night!\""<<endl;
            cout<<"James: \"Of course not, bro, I'm dying to go.\""<<endl;
            Progress<<"James: \"Of course not, bro, I'm dying to go.\""<<endl;
            cout<<"Narrator: \"James and Andrew are car enthusiasts. Something about cars calms James down, he feels fulfilled when driving...\n"
                  "Andrew is a simpler guy than him, though. Andrew just likes to see a guy's car spit flames or hear a roaring American V8.\n"
                  "Their Saturday night plans were to go to a track, watch some races. They were both very excited to go.\""<<endl;
            Progress<<"Narrator: \"James and Andrew are car enthusiasts. Something about cars calms James down, he feels fulfilled when driving...\n"
                  "Andrew is a simpler guy than him, though. Andrew just likes to see a guy's car spit flames or hear a roaring American V8.\n"
                  "Their Saturday night plans were to go to a track, watch some races. They were both very excited to go.\""<<endl;
            cout<<"-----5 PM, The Same Day-----"<<endl;
            Progress<<"-----5 PM, The Same Day-----"<<endl;
            cout<<"James:"<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. \"Thank god this day's over!\"\n"
                  "2. *Say nothing*"<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<" \"Thank god this day's over!\"\n";
                        Progress<<" \"Thank god this day's over!\"\n";
                        break;
                    case 2:
                        Progress<<"*sigh*"<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Narrator: \"James is always excited when work ends. It's not because he hates it or anything, it just means he gets to speed home in his car.\""<<endl;
            Progress<<"Narrator: \"James is always excited when work ends. It's not because he hates it or anything, it just means he gets to speed home in his car.\""<<endl;
            cout<<"Christina: \"Hey, James. Are you leaving?\""<<endl;
            Progress<<"Christina: \"Hey, James. Are you leaving?\""<<endl;
            cout<<"James:"<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. Yeah."<<endl;
            cout<<"2. No, I'm gonna stick around doing nothing here! What do you think?"<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"Yeah.\""<<endl;
                        Progress<<"\"Yeah.\""<<endl;
                        break;
                    case 2:
                        cout<<"\"(to himself) What's with me today? (louder) Oh hey, yeah I'm just about to go home.\""<<endl;
                        Progress<<"\"(to himself) What's with me today? (louder) Oh hey, yeah I'm just about to go home.\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Narrator: \"Christina is the hot new girl. Everyone likes to do her favors.\""<<endl;
            Progress<<"Narrator: \"Christina is the hot new girl. Everyone likes to do her favors.\""<<endl;
            cout<<"Christina: \"Oh, cool. Hey, I missed the bus, I think. Can you give me a ride home?\""<<endl;
            Progress<<"Christina: \"Oh, cool. Hey, I missed the bus, I think. Can you give me a ride home?\""<<endl;
            cout<<"James:"<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. \"Yeah.\"\n"
                  "2. \"Sure.\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"Yeah.\""<<endl;
                        Progress<<"\"Yeah.\""<<endl;
                        break;
                    case 2:
                        cout<<"\"Sure.\""<<endl;
                        Progress<<"\"Sure.\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Christina: \"Awesome, thanks. Hey, what kinda car do you drive?\""<<endl;
            Progress<<"Christina: \"Awesome, thanks. Hey, what kinda car do you drive?\""<<endl;
            James.setNPCName("James");
            cout<<"Narrator: \"See, the exciting thing about video games is, you can choose what you drive right there on the spot.\n"
                  "Who's gonna stop you? It's a game.\""<<endl;
            Progress<<"Narrator: \"See, the exciting thing about video games is, you can choose what you drive right there on the spot.\n"
                      "Who's gonna stop you? It's a game.\""<<endl;
            cout<<"James: "<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. \"Oh, just an Audi A5 TDI.\"\n"
                  "2. \"A Mercedes S280 sedan.\"\n"
                  "3. \"A Ferrari 458 Speciale! Nah, I'm just playing - I got a BMW 330d.\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"Oh, just an Audi A5 TDI.\""<<endl;
                        Progress<<"\"Oh, just an Audi A5 TDI.\""<<endl;
                        James.setNPCCar("Audi A5 TDI", "Automatic", 30);
                        James_lb.setName("James");
                        James_lb.setTotalSC(James.getNPCCarSC());
                        break;
                    case 2:
                        cout<<"\"A Mercedes S280 sedan.\""<<endl;
                        Progress<<"\"A Mercedes S280 sedan.\""<<endl;
                        James.setNPCCar("Mercedes S280", "Automatic", 30);
                        James_lb.setName("James");
                        James_lb.setTotalSC(James.getNPCCarSC());
                        break;
                    case 3:
                        cout<<"\"A Ferrari 458 Speciale! Nah, I'm just playing - I got a BMW 330d.\""<<endl;
                        Progress<<"\"A Ferrari 458 Speciale! Nah, I'm just playing - I got a BMW 330d.\""<<endl;
                        James.setNPCCar("BMW 330d", "Automatic", 30);
                        James_lb.setName("James");
                        James_lb.setTotalSC(James.getNPCCarSC());
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2 && input_beg != 3);
            cout<<"Narrator: \"Christina's house is the C, take her there!\""<<endl;
            map.spawnNPC(2, 5); //Again, for the sake of time, I just modified what I needed to modify.
            //I didn't touch the function names from the sandiego map class thing.
            //That's why this is spawn npc when we're going to this girl's house. I know that's a horrible way to code, but it was convenient.
            for(int i = 0; i < 10; i++) {
                map.displayMap();

                cout << "Valid moves are: " << endl;
                map.displayMoves();

                cout << "Input a move: ";
                cin >> move;
                cout << endl;
                map.executeMove(move);
                if (map.isNPCLocation()) {
                    break;
                }
                i--; //this line makes the for loop an infinite loop.
                //You can drive around town with this chick for hours, if you're entertained by that.
                //But I'd just take her home, ngl.
            }
            cout<<"Christina: \"You have a pretty cool car. Thanks for the ride, James!\""<<endl;
            Progress<<"Christina: \"You have a pretty cool car. Thanks for the ride, James!\""<<endl;
            cout<<"Narrator: \"So, after you got Christina home safe, you go home too exhausted to do anything at all and just pass out on your couch.\""<<endl;
            Progress<<"Narrator: \"So, after you got Christina home safe, you go home too exhausted to do anything at all and just pass out on your couch.\""<<endl;
            cout<<"-----12PM, Saturday-----"<<endl;
            Progress<<"-----12PM, Saturday-----"<<endl;
            cout<<"*Phone Ringing*"<<endl;
            Progress<<"*Phone Ringing*"<<endl;
            cout<<"James: \"Hello?\""<<endl;
            Progress<<"James: \"Hello?\""<<endl;
            cout<<"Andrew:\"Hey man, what are you up to?\""<<endl;
            Progress<<"Andrew:\"Hey man, what are you up to?\""<<endl;
            cout<<"James:"<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. \"I'm sleeping in, bro, it's Saturday.\"\n"
                  "2. \"Nothing much, to be honest, just enjoying a cup of coffee.\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"I'm sleeping in, bro, it's Saturday.\""<<endl;
                        Progress<<"\"I'm sleeping in, bro, it's Saturday.\""<<endl;
                        break;
                    case 2:
                        cout<<"\"Nothing much, to be honest, just enjoying a cup of coffee.\""<<endl;
                        Progress<<"\"Nothing much, to be honest, just enjoying a cup of coffee.\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Andrew: \"Bro, come on, you can't be serious, we gotta go!\""<<endl;
            Progress<<"Andrew: \"Bro, come on, you can't be serious, we gotta go!\""<<endl;
            cout<<"James:"<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. \"What do you mean, man, go where?\"\n"
                  "2. \"Riiiiight. I must be forgetting something - our plans were about tonight.\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"What do you mean, man, go where?\""<<endl;
                        Progress<<"\"What do you mean, man, go where?\""<<endl;
                        break;
                    case 2:
                        cout<<"\"Riiiiight. I must be forgetting something - our plans were about tonight.\""<<endl;
                        Progress<<"\"Riiiiight. I must be forgetting something - our plans were about tonight.\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Andrew: \"Dude, you can't be serious. You're not seriously planning on going to the race in your car, are you?\""<<endl;
            Progress<<"Andrew: \"Dude, you can't be serious. You're not seriously planning on going to the race in your car, are you?\""<<endl;
            cout<<"James:"<<endl;
            Progress<<"James:"<<endl;
            cout<<"1. \"Actually, I was.\"\n"
                  "2. \"What car am I going to take to then, Andy?\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"Actually, I was.\""<<endl;
                        Progress<<"\"Actually, I was.\""<<endl;
                        break;
                    case 2:
                        cout<<"\"What car am I going to take to then, Andy?\""<<endl;
                        Progress<<"\"What car am I going to take to then, Andy?\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Andrew: \"Dude, there's this like really cool guy, he's a crazy genius mechanic who can hook us up. \n"
                  "He's got all these project cars which are super sick. Skylines, Supras, GT-Rs if you want something more modern...\n"
                  "I'll rent us one, bro, I'll drive.\""<<endl;
            Progress<<"Andrew: \"Dude, there's this like really cool guy, he's a crazy genius mechanic who can hook us up. \n"
                      "He's got all these project cars which are super sick. Skylines, Supras, GT-Rs if you want something more modern...\n"
                      "I'll rent us one, bro, I'll drive.\""<<endl;
            cout<<"James: \"Alright, fine, you win. SKYLINE R34! Or I'm not going.\""<<endl;
            Progress<<"James: \"Alright, fine, you win. SKYLINE R34! Or I'm not going.\""<<endl;
            cout<<"Andrew: \"Bet.\""<<endl;
            Progress<<"Andrew: \"Bet.\""<<endl;
            cout<<"-----8PM, Saturday-----"<<endl;
            Progress<<"-----8PM, Saturday-----"<<endl;
            cout<<"Narrator: \"So, James and Andrew pull up in the R34 that Andrew got for them.\n"
                  "They had heard about what this race was like, but, wow - they never expected this.\n"
                  "Muscle cars, the finest of JDM, Germany's racing legends, a Hyundai here and there - it was legendary.\""<<endl;
            Progress<<"Narrator: \"So, James and Andrew pull up in the R34 that Andrew got for them.\n"
                      "They had heard about what this race was like, but, wow - they never expected this.\n"
                      "Muscle cars, the finest of JDM, Germany's racing legends, a Hyundai here and there - it was legendary.\""<<endl;
            cout<<"James: \"Bro, I still can't believe you got us an automatic R34. What's wrong with you?\n"
                  "I didn't even know they made these things in auto...\""<<endl;
            Progress<<"James: \"Bro, I still can't believe you got us an automatic R34. What's wrong with you?\n"
                      "I didn't even know they made these things in auto...\""<<endl;
            cout<<"Andrew: \"Well, what am I supposed to say?! This was all he had. \n"
                  "I should've gotten the Miata and who cares what you think.\""<<endl;
            Progress<<"Andrew: \"Well, what am I supposed to say?! This was all he had. \n"
                      "I should've gotten the Miata and who cares what you think.\""<<endl;
            cout<<"James: "<<endl;
            Progress<<"James: "<<endl;
            cout<<"1. \"On second thought, this is fine.\"\n"
                  "2. \"Yeah, that's what happens when you're brain-dead.\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"On second thought, this is fine.\""<<endl;
                        Progress<<"\"On second thought, this is fine.\""<<endl;
                        break;
                    case 2:
                        cout<<"\"Yeah, that's what happens when you're brain-dead.\""<<endl;
                        Progress<<"\"Yeah, that's what happens when you're brain-dead.\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Andrew: \"Anyway, hurry up, man, races are starting.\""<<endl;
            Progress<<"Andrew: \"Anyway, hurry up, man, races are starting.\""<<endl;
            cout<<"Narrator: \"And, man, were the races amazing. Fire-breathing track monsters were racing.\n"
                  "Every single car tuned, customized. Racers have an expression, \"Built, not bought.\" Well, all of these were built.\n"
                  "Andrew and James just sat there, truly amazed, watching these beasts running the quarter mile, all of them in under 9 seconds flat.\n"
                  "\n"
                  "That is, of course... until the race ended.\""<<endl;
            Progress<<"Narrator: \"And, man, were the races amazing. Fire-breathing track monsters were racing.\n"
                      "Every single car tuned, customized. Racers have an expression, \"Built, not bought.\" Well, all of these were built.\n"
                      "Andrew and James just sat there, truly amazed, watching these beasts running the quarter mile, all of them in under 9 seconds flat.\n"
                      "\n"
                      "That is, of course... until the race ended.\""<<endl;
            cout<<"-----11PM, Saturday, as all the races wrapped up-----"<<endl;
            Progress<<"-----11PM, Saturday, as all the races wrapped up-----"<<endl;
            cout<<"Narrator: \"After these type of races, it's only typical there's gonna be show-off kids.\n"
                  "It's only expected that some punk will try to drift, powerslide, burn his tires, anything that'll basically damage his car in a fun way.\n"
                  "And Andrew and James are watching one of them. They want to be that punk, too, of course.\n"
                  "He's the center of attention at these things. It's only logical.\""<<endl;
            Progress<<"Narrator: \"After these type of races, it's only typical there's gonna be show-off kids.\n"
                      "It's only expected that some punk will try to drift, powerslide, burn his tires, anything that'll basically damage his car in a fun way.\n"
                      "\n"
                      "And Andrew and James are watching one of them. They want to be that punk, too, of course.\n"
                      "He's the center of attention at these things. It's only logical.\""<<endl;
            cout<<"Andrew: \"Hey is that guy gonna-\"\n"
                  "Andrew: \"Oh, you gotta be kidding me!\""<<endl;
            Progress<<"Andrew: \"Hey is that guy gonna-\"\n"
                      "Andrew: \"Oh, you gotta be kidding me!\""<<endl;
            cout<<"Narrator: \"Yup... Their emotions quickly turned from admiration of this kid to pure hatred.\""<<endl;
            Progress<<"Narrator: \"Yup... Their emotions quickly turned from admiration of this kid to pure hatred.\""<<endl;
            cout<<"Andrew: \"Yo, man!\"\n"
                  "Hector: \"Hey, my bad, G!\"\n"
                  "Andrew: \"What do you mean, 'my bad, G', you just scratched a $100k vehicle.\"\n"
                  "Hector: \"Ay, man, I said I was sorry, get the fuck outta my face.\"\n"
                  "Andrew: \"Look, kid. This doesn't have to be this way - just give me the name of your insurance company and we'll figure this out.\"\n"
                  "Hector: \"Man, I ain't paying for that shitbox!\""<<endl;
            Progress<<"Andrew: \"Yo, man!\"\n"
                      "Hector: \"Hey, my bad, G!\"\n"
                      "Andrew: \"What do you mean, 'my bad, G', you just scratched a $100k vehicle.\"\n"
                      "Hector: \"Ay, man, I said I was sorry, get the fuck outta my face.\"\n"
                      "Andrew: \"Look, kid. This doesn't have to be this way - just give me the name of your insurance company and we'll figure this out.\"\n"
                      "Hector: \"Man, I ain't paying for that shitbox!\""<<endl;
            cout<<"James: "<<endl;
            Progress<<"James: "<<endl;
            cout<<"1. \"Oh, you got some jokes to go along with your ugly powersliding, huh? Race me for pink slips - then whoever wins can pay for the damage on the Skyline... And keeps it.\"\n"
                  "2. \"If you're so good at driving, why don't you race me for it then.\""<<endl;
            do {
                cin>>input_beg;
                switch (input_beg)
                {
                    case 1:
                        cout<<"\"Oh, you got some jokes to go along with your ugly powersliding, huh? Race me for pink slips - then whoever wins can pay for the damage on the Skyline... And keeps it.\""<<endl;
                        Progress<<"\"Oh, you got some jokes to go along with your ugly powersliding, huh? Race me for pink slips - then whoever wins can pay for the damage on the Skyline... And keeps it.\""<<endl;
                        break;
                    case 2:
                        cout<<"\"If you're so good at driving, why don't you race me for it then.\""<<endl;
                        Progress<<"\"If you're so good at driving, why don't you race me for it then.\""<<endl;
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            cout<<"Andrew: (quietly, to you) \"Ey, man, that guy, Gomez, the guy who rents this stuff? He won't be okay with this.\""<<endl;
            Progress<<"Andrew: (quietly, to you) \"Ey, man, that guy, Gomez, the guy who rents this stuff? He won't be okay with this.\""<<endl;
            cout<<"James: \"Relax, Andy, I got this, he's in an NC Miata for God's sake.\""<<endl;
            Progress<<"James: \"Relax, Andy, I got this, he's in an NC Miata for God's sake.\""<<endl;
            cout<<"Narrator: \"And James thought having an NC Miata would mean you're a slow guy. \n"
                  "Not necessarily, as he would end up learning. James sat down in his Skyline, ready to race, and that's when Andy heard it.\n"
                  "A sound of a roaring V8 coming from the tiny little Miata. Somehow, a supercharged, Chevy LS1 V8 managed to fit inside it. Andy already knew.\n"
                  "James lost before the race even started.\n"
                  "You see, Hector had experience in these kinds of things. They called him the demon - he was an underground racer, almost as good as the pros they'd seen earlier, and his nickname?\n"
                  "His nickname comes from the cars he builds and races. He calls them demons from hell, each one faster and more insane than the other. He's one of the best there is.\""<<endl;
            Progress<<"Narrator: \"And James thought having an NC Miata would mean you're a slow guy. \n"
                      "Not necessarily, as he would end up learning. James sat down in his Skyline, ready to race, and that's when Andy heard it.\n"
                      "A sound of a roaring V8 coming from the tiny little Miata. Somehow, a supercharged, Chevy LS1 V8 managed to fit inside it. Andy already knew.\n"
                      "James lost before the race even started.\n"
                      "You see, Hector had experience in these kinds of things. They called him the demon - he was an underground racer, almost as good as the pros they'd seen earlier, and his nickname?\n"
                      "His nickname comes from the cars he builds and races. He calls them demons from hell, each one faster and more insane than the other. He's one of the best there is.\""<<endl;
            cout<<"-----Right after the race-----"<<endl;
            Progress<<"-----Right after the race-----"<<endl;
            cout<<"Hector: \"Keys, please!\""<<endl;
            Progress<<"Hector: \"Keys, please!\""<<endl;
            Hector_lb.setTotalSC(Hector_lb.getTotalSC() + 1);
            cout<<"James: "<<endl;
            Progress<<"James: "<<endl;
            cout<<"1. *Choose to run away, fix the Skyline and make things even with Gomez*"<<endl;
            cout<<"2. \"Fine. Good race.\""<<endl;

            //This is the first choice in the story that actually alters it.
            do {
                cin>>input_beg;
                switch (input_beg) {
                    case 1:
                        cout << "*Choose to run away, fix the Skyline and make things even with Gomez*" << endl;
                        Progress << "*Choose to run away, fix the Skyline and make things even with Gomez*" << endl;

                        //If chosen 1, now the game goes on in this case.
                        cout << "Narrator: \"Ah, James... You don't even know what you just got into.\n"
                                "As he's about to learn - it's never a good idea to run from racers who can beat a Skyline with Miatas.\""
                             << endl;
                        Progress << "Narrator: \"Ah, James... You don't even know what you just got into.\n"
                                    "As he's about to learn - it's never a good idea to run from racers who can beat a Skyline with Miatas.\""
                                 << endl;
                        cout << "-----10 Minutes after Race, Gomez' Garage-----" << endl;
                        Progress << "-----10 Minutes after Race, Gomez' Garage-----" << endl;
                        cout << "Gomez: \"BOY, WHAT THE HELL HAPPENED TO MY CAR?!\"" << endl;
                        Progress << "Gomez: \"BOY, WHAT THE HELL HAPPENED TO MY CAR?!\"" << endl;
                        cout << "James:" << endl;
                        Progress << "James:" << endl;
                        cout
                                << "1. \"Listen, I can explain. We were at the races and this guy, he just crashed into the thing - it wasn't my fault. How much for the damage?\"\n"
                                   "2. \"Some punk crashed into it, I'll pay for the damage myself.\"" << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout
                                            << "\"Listen, I can explain. We were at the races and this guy, he just crashed into the thing - it wasn't my fault. How much for the damage?\""
                                            << endl;
                                    Progress
                                            << "\"Listen, I can explain. We were at the races and this guy, he just crashed into the thing - it wasn't my fault. How much for the damage?\""
                                            << endl;
                                    break;
                                case 2:
                                    cout << "\"Some punk crashed into it, I'll pay for the damage myself.\"" << endl;
                                    Progress << "\"Some punk crashed into it, I'll pay for the damage myself.\""
                                             << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2);
                        cout
                                << "Gomez: \"First of all, that car is one of my sources of income. I need it fixed ASAP with a full new midnight purple premium wrap and everything. \n"
                                   "And it's supposed to be done by tonight. I need the car. And why didn't you take the guy's insurance? Are you that dumb?\""
                                << endl;
                        Progress
                                << "Gomez: \"First of all, that car is one of my sources of income. I need it fixed ASAP with a full new midnight purple premium wrap and everything. \n"
                                   "And it's supposed to be done by tonight. I need the car. And why didn't you take the guy's insurance? Are you that dumb?\""
                                << endl;
                        cout << "James:" << endl;
                        Progress << "James:" << endl;
                        cout << "1. Well.." << endl;
                        cout << "2. Speaking of... I may have screwed up." << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout
                                            << "\"Well... about that; I couldn't exactly get his money because... I kind of made him race me and lost the car, so I bolted.\n"
                                               "I'm more afraid of you than him.\"" << endl;
                                    Progress
                                            << "\"Well... about that; I couldn't exactly get his money because... I kind of made him race me and lost the car, so I bolted.\n"
                                               "I'm more afraid of you than him.\"" << endl;
                                    break;
                                case 2:
                                    cout
                                            << "\"Speaking of... I may have screwed up. I couldn't exactly get the money because I challenged him to a race for pink slips... and lost.\""
                                            << endl;
                                    Progress
                                            << "\"Speaking of... I may have screwed up. I couldn't exactly get the money because I challenged him to a race for pink slips... and lost.\""
                                            << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2);
                        cout << "Gomez: \"YOU WHAT? I OUGHTA KILL YOU RIGHT NOW!\"" << endl;
                        Progress << "Gomez: \"YOU WHAT? I OUGHTA KILL YOU RIGHT NOW!\"" << endl;
                        cout
                                << "James: \"Listen, man, I'll pay for your car and I won't owe you anything, we'll be all done and I'll just owe the guy a car. I can live with that.\""
                                << endl;
                        Progress
                                << "James: \"Listen, man, I'll pay for your car and I won't owe you anything, we'll be all done and I'll just owe the guy a car. I can live with that.\""
                                << endl;
                        cout
                                << "Gomez: \"Well... I suppose that's fine by me, as long as I get my payday. Who did you lose to, anyway?\""
                                << endl;
                        Progress
                                << "Gomez: \"Well... I suppose that's fine by me, as long as I get my payday. Who did you lose to, anyway?\""
                                << endl;
                        cout << "James:" << endl;
                        Progress << "James:" << endl;
                        cout << "1. \"Some kid, uh... The devil? The demon?\"\n"
                                "2. \"His name was 'The Demon'.\"" << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout << "\"Some kid, uh... The devil? The demon?\"" << endl;
                                    Progress << "\"Some kid, uh... The devil? The demon?\"" << endl;
                                    break;
                                case 2:
                                    cout << "\"His name was 'The Demon'.\"" << endl;
                                    Progress << "\"His name was 'The Demon'.\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2);
                        cout << "Gomez: \"The demon? HECTOR, The Demon?\"" << endl;
                        Progress << "Gomez: \"The demon? HECTOR, The Demon?\"" << endl;
                        cout << "James: \"Yeah, he's the one. You know him?\"" << endl;
                        Progress << "James: \"Yeah, he's the one. You know him?\"" << endl;
                        cout << "Gomez: \"I do. And you're gonna wish you didn't.\"" << endl;
                        Progress << "Gomez: \"I do. And you're gonna wish you didn't.\"" << endl;
                        cout << "James: \"What?\"" << endl;
                        Progress << "James: \"What?\"" << endl;
                        cout << "Gomez: \"Hector's the kid of this underground thug - they call him Phantom. \n"
                                "Phantom's the real deal. Only people who have seen him are his sons. There are speculations as to what he actually looks like, but that's about it.\n"
                                "That's called power, kid. You're going up against an opponent you don't even know what he looks like.\n"
                                "Look, you killed yourself the moment you decided to run away from that race when you lost. Phantom's dogs are probably on your ass right now.\n"
                                "You're putting me in danger, now. I can't take this car back, if I do - I'm dead.\n"
                                "I usually rent out my weaker ones - the ones cocky kids like you drive to \"get the ladies\". Take the keys, I'll hook you up with a crew.\n"
                                "My name will never get mentioned. I DO NOT know you. \n"
                                "You're gonna go to Kelly's garage. Tell them that the Underdog sent you, and to say 'Code Black - Phantom'. Kelly's crew have been at war with Phantom since forever.\n"
                                "You tell them that, and they'll get you under their wing. It's either that, or dying, kid.\""
                             << endl;
                        Progress << "Gomez: \"Hector's the kid of this underground thug - they call him Phantom. \n"
                                    "Phantom's the real deal. Only people who have seen him are his sons. There are speculations as to what he actually looks like, but that's about it.\n"
                                    "That's called power, kid. You're going up against an opponent you don't even know what he looks like.\n"
                                    "Look, you killed yourself the moment you decided to run away from that race when you lost. Phantom's dogs are probably on your ass right now.\n"
                                    "You're putting me in danger, now. I can't take this car back, if I do - I'm dead.\n"
                                    "I usually rent out my weaker ones - the ones cocky kids like you drive to \"get the ladies\". Take the keys, I'll hook you up with a crew.\n"
                                    "My name will never get mentioned. I DO NOT know you. \n"
                                    "You're gonna go to Kelly's garage. Tell them that the Underdog sent you, and to say 'Code Black - Phantom'. Kelly's crew have been at war with Phantom since forever.\n"
                                    "You tell them that, and they'll get you under their wing. It's either that, or dying, kid.\""
                                 << endl;
                        cout << "James:" << endl;
                        Progress << "James:" << endl;
                        cout << "1. \"Where do I find this Kelly's garage?\"\n"
                                "2. \"If you say there's no other way...\"" << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout << "\"Where do I find this Kelly's garage?\"" << endl;
                                    Progress << "\"Where do I find this Kelly's garage?\"" << endl;
                                    break;
                                case 2:
                                    cout << "\"If you say there's no other way...\"" << endl;
                                    Progress << "\"If you say there's no other way...\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2);
                        cout
                                << "Gomez: \"Find the X. You know the rest. And, kid! Don't leave town! You owe me a $65k car! Whatever you win, you bring straight to me. Otherwise, I'm not at war with Kelly.\n"
                                   "One word, you die.\"" << endl;
                        Progress
                                << "Gomez: \"Find the X. You know the rest. And, kid! Don't leave town! You owe me a $65k car! Whatever you win, you bring straight to me. Otherwise, I'm not at war with Kelly.\n"
                                   "One word, you die.\"" << endl;
                        map.resetMap();
                        map.spawnBestBuy(4, 2);
                        for (int i = 0; i < 10; i++) {
                            map.displayMap();

                            cout << "Valid moves are: " << endl;
                            map.displayMoves();

                            cout << "Input a move: ";
                            cin >> move;
                            cout << endl;
                            map.executeMove(move);
                            if (map.isBestBuyLocation()) {
                                break;
                            }
                            i--;
                        }
                        cout << "-----Right after, Kelly's Garage-----" << endl;
                        Progress << "-----Right after, Kelly's Garage-----" << endl;
                        cout << "James:" << endl;
                        Progress << "James:" << endl;
                        cout << "1. \"Hi. The underdog sent me, said to tell you 'Code Black - Phantom'.\"\n"
                                "2. \"'Code Black - Phantom.' The Underdog said to meet you here.\"" << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout << "\"Hi. The underdog sent me, said to tell you 'Code Black - Phantom'.\""
                                         << endl;
                                    Progress << "\"Hi. The underdog sent me, said to tell you 'Code Black - Phantom'.\""
                                             << endl;
                                    break;
                                case 2:
                                    cout << "\"'Code Black - Phantom.' The Underdog said to meet you here.\"" << endl;
                                    Progress << "\"'Code Black - Phantom.' The Underdog said to meet you here.\""
                                             << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2);
                        cout << "Kelly: \"Oh, God. Who are you, then.\"" << endl;
                        Progress << "Kelly: \"Oh, God. Who are you, then.\"" << endl;
                        cout << "James: \"Name's Jame--\"" << endl;
                        Progress << "James: \"Name's Jame--\"" << endl;
                        cout
                                << "Kelly: \"I really don't wanna know your name. But since Gomie sent you, and it's about that dog, come in. Nice Skyline.\""
                                << endl;
                        Progress
                                << "Kelly: \"I really don't wanna know your name. But since Gomie sent you, and it's about that dog, come in. Nice Skyline.\""
                                << endl;
                        cout << "James: \"Thanks!\"" << endl;
                        Progress << "James: \"Thanks!\"" << endl;
                        cout << "Kelly: \"So, why are you interested in taking down Phantom?\n"
                                "You one of his boys that went rogue?\"" << endl;
                        Progress << "Kelly: \"So, why are you interested in taking down Phantom?\n"
                                    "You one of his boys that went rogue?\"" << endl;
                        cout << "James: " << endl;
                        Progress << "James: " << endl;
                        cout << "1. \"I lost a race, now I'm looking for a rematch.\"\n"
                                "2. \"It's personal, I really wouldn't like to get into it. All I need is to win a race against his boys.\""
                             << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout << "\"I lost a race, now I'm looking for a rematch.\"" << endl;
                                    Progress << "\"I lost a race, now I'm looking for a rematch.\"" << endl;
                                    break;
                                case 2:
                                    cout
                                            << "\"It's personal, I really wouldn't like to get into it. All I need is to win a race against his boys.\""
                                            << endl;
                                    Progress
                                            << "\"It's personal, I really wouldn't like to get into it. All I need is to win a race against his boys.\""
                                            << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2);
                        cout << "Kelly: \"Not in that piece of crap, though. That's one of Gomez' show cars, right?\n"
                                "The ones he rents out to pay for that crappy old apartment? Come on, follow me.\""
                             << endl;
                        Progress
                                << "Kelly: \"Not in that piece of crap, though. That's one of Gomez' show cars, right?\n"
                                   "The ones he rents out to pay for that crappy old apartment? Come on, follow me.\""
                                << endl;
                        cout
                                << "Narrator: \"And Kelly and James walked into a room full of cars. This, to James, was heaven.\n"
                                   "Kelly's collection - pristine cars, all won through illegal racing. Kelly ran the scene.\n"
                                   "She kept all her cars as trophies, but new recruits always got benefits with her. That is, if you prove yourself.\""
                                << endl;
                        Progress
                                << "Narrator: \"And Kelly and James walked into a room full of cars. This, to James, was heaven.\n"
                                   "Kelly's collection - pristine cars, all won through illegal racing. Kelly ran the scene.\n"
                                   "She kept all her cars as trophies, but new recruits always got benefits with her. That is, if you prove yourself.\""
                                << endl;
                        cout << "James: " << endl;
                        Progress << "James: " << endl;
                        cout << "1. \"Wow.\"\n"
                                "2. Stay silent" << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout << "\"Wow.\"" << endl;
                                    Progress << "\"Wow.\"" << endl;
                                    break;
                                case 2:
                                    cout << "*looks around and says nothing*" << endl;
                                    Progress << "*looks around and says nothing*" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2);
                        cout
                                << "Kelly: \"You know how hunters have those deer heads on the walls of their offices hung as trophies from a good hunt?\n"
                                   "Well, this is my room full of deer heads. Except, well, if the deer had 4 wheels and 6 and 8 cylinder engines.\n"
                                   "Pick your poison, kid.\"" << endl;
                        Progress
                                << "Kelly: \"You know how hunters have those deer heads on the walls of their offices hung as trophies from a good hunt?\n"
                                   "Well, this is my room full of deer heads. Except, well, if the deer had 4 wheels and 6 and 8 cylinder engines.\n"
                                   "Pick your poison, kid.\"" << endl;
                        cout << "Narrator: \"So, Kelly offered 3 choices of cars:\n"
                                "1. One of the finest Nissans - the Silvia S15, right hand drive, imported straight from Japan. 2JZ engine swap, two of the biggest turbos James had ever seen and a perfect tuning job.\n"
                                "2. The best America has to offer - Dodge Viper, a V10 engine sports car, some would say even super car. That's all I need to say, no?\n"
                                "3. Germany's beast - the BMW E36 M3. Pushing north of 650 horsepower, this car was the ultimate track killer.\""
                             << endl;
                        Progress << "Narrator: \"So, Kelly offered 3 choices of cars:\n"
                                    "1. One of the finest Nissans - the Silvia S15, right hand drive, imported straight from Japan. 2JZ engine swap, two of the biggest turbos James had ever seen and a perfect tuning job.\n"
                                    "2. The best America has to offer - Dodge Viper, a V10 engine sports car, some would say even super car. That's all I need to say, no?\n"
                                    "3. Germany's beast - the BMW E36 M3. Pushing north of 650 horsepower, this car was the ultimate track killer.\""
                                 << endl;
                        cout << "James: " << endl;
                        Progress << "James: " << endl;
                        cout << " 1. \"I'll take the Silvia!\"" << endl;
                        cout << "2. \"Can I have the Viper, please?\"" << endl;
                        cout << "3. \"No-brainer - give me the Bimmer.\"" << endl;
                        cout
                                << "4. \"Actually, can I get a different car? Possibly an automatic? I don't drive manual.\""
                                << endl;
                        do {
                            cin >> input_kc1;
                            switch (input_kc1) {
                                case 1:
                                    cout << "\"I'll take the Silvia!\"" << endl;
                                    Progress << "\"I'll take the Silvia!\"" << endl;
                                    James.setNPCCar("Nissan Silvia", "Manual", 72);
                                    James_lb.setTotalSC(James.getNPCCarSC());
                                    //Another Key Choice (1.1)
                                    cout<<"Kelly: \"Excellent choice!\""<<endl;
                                    Progress<<"Kelly: \"Excellent choice!\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Thanks\"\n"
                                          "2. *Nod*"<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Thanks\"" << endl;
                                                Progress << "\"Thanks\"" << endl;
                                                break;
                                            case 2:
                                                cout << "*Nod*" << endl;
                                                Progress << "*Nod*" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Listen, kid. You don't just get into our world like that.\n"
                                          "Our people generally don't trust some punks like you. I'm gonna need you to prove yourself.\""<<endl;
                                    Progress<<"Kelly: \"Listen, kid. You don't just get into our world like that.\n"
                                              "Our people generally don't trust some punks like you. I'm gonna need you to prove yourself.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"How?\"\n"
                                          "2. \"Prove myself?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"How?\"" << endl;
                                                Progress << "\"How?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Prove myself?\"" << endl;
                                                Progress << "\"Prove myself?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Simple. All you gotta do is get yourself out there. Make yourself known.\n"
                                          "In our world, your car gives you street cred. All you gotta do to keep it, is... Well, race well.\n"
                                          "If our people know you and you work for me, you got the trust of the whole underground. Then Phantom's boys can't kill you.\n"
                                          "They can just go to war with whoever you're with, which is me. You have our protection as long as you earn it. And this is the way to earn it.\n"
                                          "I'll hook you up with a couple races. You're remembered in this world when you have 80 or more street cred.\n"
                                          "You ready?\""<<endl;
                                    Progress<<"Kelly: \"Simple. All you gotta do is get yourself out there. Make yourself known.\n"
                                              "In our world, your car gives you street cred. All you gotta do to keep it, is... Well, race well.\n"
                                              "If our people know you and you work for me, you got the trust of the whole underground. Then Phantom's boys can't kill you.\n"
                                              "They can just go to war with whoever you're with, which is me. You have our protection as long as you earn it. And this is the way to earn it.\n"
                                              "I'll hook you up with a couple races. You're remembered in this world when you have 80 or more street cred.\n"
                                              "You ready?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"I hope so.\"\n"
                                          "2. \"Yes!\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I hope so.\"" << endl;
                                                Progress << "\"I hope so.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Yes!\"" << endl;
                                                Progress << "\"Yes!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Okay. Then, head to the X, I'll meet you there.\""<<endl;
                                    Progress<<"Kelly: \"Okay. Then, head to the X, I'll meet you there.\""<<endl;
                                    map.resetMap();
                                    map.spawnBestBuy(2, 3);
                                    for (int i = 0; i < 10; i++) {
                                        map.displayMap();

                                        cout << "Valid moves are: " << endl;
                                        map.displayMoves();

                                        cout << "Input a move: ";
                                        cin >> move;
                                        cout << endl;
                                        map.executeMove(move);
                                        if (map.isBestBuyLocation()) {
                                            break;
                                        }
                                        i--;
                                    }
                                    cout<<"-----5 minutes later-----"<<endl;
                                    Progress<<"-----5 minutes later-----"<<endl;
                                    cout<<"Kelly: \"Okay, newbie. The car you got from me's given you a street cred of 72 points. \n"
                                          "Tonight you get to win 8 races in a row, so you're gonna be in however many races necessary to get to the street cred I told you to get to.\""<<endl;
                                    Progress<<"Kelly: \"Okay, newbie. The car you got from me's given you a street cred of 72 points. \n"
                                              "Tonight you get to win 8 races in a row, so you're gonna be in however many races necessary to get to the street cred I told you to get to.\""<<endl;
                                    for(;true;) //infinite loop
                                    {
                                        count = minigame();
                                        if (count >= 4)
                                            James_lb.setTotalSC(James_lb.getTotalSC() + 1);
                                        else
                                            James_lb.setTotalSC(James_lb.getTotalSC() - 1);

                                        cout<<"James' total street cred now is "<<James_lb.getTotalSC()<<endl;
                                        if(James_lb.getTotalSC() >= 80)
                                            break;
                                    }
                                    cout<<"Kelly: \"Wow. That was some tough racing. I'm actually impressed. How'd you lose to that Hector kid, then? He SUCKS at this.\""<<endl;
                                    Progress<<"Kelly: \"Wow. That was some tough racing. I'm actually impressed. How'd you lose to that Hector kid, then? He SUCKS at this.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"I guess my head wasn't in the game, Kelly.\"\n"
                                          "2. \"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                          "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I guess my head wasn't in the game, Kelly.\"" << endl;
                                                Progress << "\"I guess my head wasn't in the game, Kelly.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                                        "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\"" << endl;
                                                Progress << "\"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                                            "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Regardless. You should've had him. Hector's a punk driving overpriced cars his dad buys.\n"
                                          "He calls them 'projects' or his 'demons from hell' but all he does is calls Gomez and Gomez builds his cars.\n"
                                          "He's an enthusiastic driver, but... any one of my guys can beat him. That includes you, with the driving I saw today.\""<<endl;
                                    Progress<<"Kelly: \"Regardless. You should've had him. Hector's a punk driving overpriced cars his dad buys.\n"
                                              "He calls them 'projects' or his 'demons from hell' but all he does is calls Gomez and Gomez builds his cars.\n"
                                              "He's an enthusiastic driver, but... any one of my guys can beat him. That includes you, with the driving I saw today.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Thanks, Kelly. So what now?\"\n"
                                          "2. \"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Thanks, Kelly. So what now?\"" << endl;
                                                Progress << "\"Thanks, Kelly. So what now?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\"" << endl;
                                                Progress << "\"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Well, if you don't want him to kill you...\"\n"
                                          "James: \"Yeah?\"\n"
                                          "Kelly: \"You're gonna have to kill him.\"\n"
                                          "James : \"WHAT?!\""<<endl;
                                    Progress<<"Kelly: \"Well, if you don't want him to kill you...\"\n"
                                              "James: \"Yeah?\"\n"
                                              "Kelly: \"You're gonna have to kill him.\"\n"
                                              "James : \"WHAT?!\""<<endl;
                                    cout<<"Kelly: \"Don't panic. We're gonna make it look like an accident, and we're going to call a truce with Phantom.\n"
                                          "We'll say we raced, he was winning, you mistimed a turn, accidentally ended up PIT-ing him.\""<<endl;
                                    Progress<<"Kelly: \"Don't panic. We're gonna make it look like an accident, and we're going to call a truce with Phantom.\n"
                                              "We'll say we raced, he was winning, you mistimed a turn, accidentally ended up PIT-ing him.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1.\"PIT?\"\n"
                                          "2. \"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"PIT?\"" << endl;
                                                Progress << "\"PIT?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\"" << endl;
                                                Progress << "\"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"PIT is a police pursuit intervention technique. \n"
                                          "It means you hit him from behind at a certain angle and speed, causing his vehicle to flip over and crash.\n"
                                          "Phantom knows his son doesn't really do his research on his engines. \n"
                                          "Gomez works for the highest bidder, but is trusted by everyone. His judgement is always solid.\n"
                                          "We'll slip him some money to tell Phantom that his son's car had a crack in the fuel line. \n"
                                          "A spark gets in there from a scratch or a hit? Car goes boom. And so does driver.\""<<endl;
                                    Progress<<"Kelly: \"PIT is a police pursuit intervention technique. \n"
                                              "It means you hit him from behind at a certain angle and speed, causing his vehicle to flip over and crash.\n"
                                              "Phantom knows his son doesn't really do his research on his engines. \n"
                                              "Gomez works for the highest bidder, but is trusted by everyone. His judgement is always solid.\n"
                                              "We'll slip him some money to tell Phantom that his son's car had a crack in the fuel line. \n"
                                              "A spark gets in there from a scratch or a hit? Car goes boom. And so does driver.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                          "What do I do if I PIT him and the car doesn't magically explode?\"\n"
                                          "2. \"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                                        "What do I do if I PIT him and the car doesn't magically explode?\"" << endl;
                                                Progress << "\"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                                            "What do I do if I PIT him and the car doesn't magically explode?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\"" << endl;
                                                Progress << "\"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"There's a way around that. You know what car always explodes?\n"
                                          "One with a timed bomb in it. All we gotta do is figure out a way for you to get a bomb in little Hector's car.\"\n"
                                          "-----3 days later, somewhere dark, 3 AM-----\n"
                                          "Narrator: \"James couldn't believe what he got into. He was afraid. He was terrified, in fact. But, he didn't show his fear.\n"
                                          "He was gonna do anything to live. And if that meant taking someone's life - it had to be done.\n"
                                          "All because of some stupid drag race he lost.\"\n"
                                          "Kelly: \"Ready, kid?\""<<endl;
                                    Progress<<"Kelly: \"There's a way around that. You know what car always explodes?\n"
                                              "One with a timed bomb in it. All we gotta do is figure out a way for you to get a bomb in little Hector's car.\"\n"
                                              "-----3 days later, somewhere dark, 3 AM-----\n"
                                              "Narrator: \"James couldn't believe what he got into. He was afraid. He was terrified, in fact. But, he didn't show his fear.\n"
                                              "He was gonna do anything to live. And if that meant taking someone's life - it had to be done.\n"
                                              "All because of some stupid drag race he lost.\"\n"
                                              "Kelly: \"Ready, kid?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"As ready as I can be to kill someone.\"\n"
                                          "2. \"No, not really.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"As ready as I can be to kill someone.\"" << endl;
                                                Progress << "\"As ready as I can be to kill someone.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"No, not really.\"" << endl;
                                                Progress << "\"No, not really.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Excellent. Let's move.\"\n"
                                          "Narrator: \"And so, the plan was simple. Break into Hector's and put a bomb on his car.\n"
                                          "Simple enough.\"\n"
                                          "Kelly: \"(quietly, whispering) That's Hector's garage.\n"
                                          "That's where his Miata is hidden, being repaired right now for a race.\n"
                                          "What we're gonna do is put these little timed bombs in the seat.\n"
                                          "There's a trick I learned. \n"
                                          "They're undetectable as long as they're sewn in the seat, and he doesn't expect you to be ballsy enough to actually break in here.\n"
                                          "He won't expect it, so he won't have a reason to check his seats. Install them near the head. We want him dead, not almost dead in a hospital.\n"
                                          "Then we're both fucked.\n"
                                          "We've got lookout. This is your mess. You sew the bombs in.\""<<endl;
                                    Progress<<"Kelly: \"Excellent. Let's move.\"\n"
                                              "Narrator: \"And so, the plan was simple. Break into Hector's and put a bomb on his car.\n"
                                              "Simple enough.\"\n"
                                              "Kelly: \"(quietly, whispering) That's Hector's garage.\n"
                                              "That's where his Miata is hidden, being repaired right now for a race.\n"
                                              "What we're gonna do is put these little timed bombs in the seat.\n"
                                              "There's a trick I learned. \n"
                                              "They're undetectable as long as they're sewn in the seat, and he doesn't expect you to be ballsy enough to actually break in here.\n"
                                              "He won't expect it, so he won't have a reason to check his seats. Install them near the head. We want him dead, not almost dead in a hospital.\n"
                                              "Then we're both fucked.\n"
                                              "We've got lookout. This is your mess. You sew the bombs in.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"B-but..\"\n"
                                          "2. \"Umm...\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"B-but..\"" << endl;
                                                Progress << "\"B-but..\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Umm...\"" << endl;
                                                Progress << "\"Umm...\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"NOTHING. I don't wanna hear a word out of you. We're already risking our lives and reputations here.\n"
                                          "GO!\"\n"
                                          "-----5 Minutes Later-----\n"
                                          "James: \"It's done!\"\n"
                                          "Kelly: \"Perfect. DRIVE!\"\n"
                                          "Narrator: \"And so, next thing to do is just race.\"\n"
                                          "-----1 Day Later, the Underworld's Racing Championship Day-----\n"
                                          "Beverly: \"Okay, folks! We all know the drill!\n"
                                          "Welcome to the racing event of your lives!\"\n"
                                          "*engines revving in the background, Still DRE by Dr. Dre playing loud*\n"
                                          "Beverly: \"We have Japanese legends, American muscle, and of course, German engineering MASTERPIECES!\n"
                                          "We race for honor. We race for glory. And most importantly, we race for MONEY, BABY!\n"
                                          "Are we rea--\"\n"
                                          "Narrator: \"And Beverly got interrupted by Kelly and James' arrival.\""<<endl;
                                    Progress<< "Kelly: \"NOTHING. I don't wanna hear a word out of you. We're already risking our lives and reputations here.\n"
                                              "GO!\"\n"
                                              "-----5 Minutes Later-----\n"
                                              "James: \"It's done!\"\n"
                                              "Kelly: \"Perfect. DRIVE!\"\n"
                                              "Narrator: \"And so, next thing to do is just race.\"\n"
                                              "-----1 Day Later, the Underworld's Racing Championship Day-----\n"
                                              "Beverly: \"Okay, folks! We all know the drill!\n"
                                              "Welcome to the racing event of your lives!\"\n"
                                              "*engines revving in the background, Still DRE by Dr. Dre playing loud*\n"
                                              "Beverly: \"We have Japanese legends, American muscle, and of course, German engineering MASTERPIECES!\n"
                                              "We race for honor. We race for glory. And most importantly, we race for MONEY, BABY!\n"
                                              "Are we rea--\"\n"
                                              "Narrator: \"And Beverly got interrupted by Kelly and James' arrival.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1.\"I'm looking for a challenge. Hector, the Demon. Race me!\"\n"
                                          "2. \"HECTOR!\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I'm looking for a challenge. Hector, the Demon. Race me!\"" << endl;
                                                Progress << "\"I'm looking for a challenge. Hector, the Demon. Race me!\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"HECTOR!\"" << endl;
                                                Progress << "\"HECTOR!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Beverly: \"What the hell are you doing here?\"\n"
                                          "Kelly: \"Relax, pretty boy. Last I checked, problems between me and your father aren't reason enough to ban me from this place.\n"
                                          "We're not on your territory. The whole racing world is here. Step aside.\"\n"
                                          "Beverly: \"Why's your boy looking for my brother?!\"\n"
                                          "Kelly: \"All we want is a race. We want that (mockingly) \"MONEY, BABY\" you're talking about.\"\n"
                                          "Narrator: \"And just then, Hector shows up.\"\n"
                                          "The Demon: \"I'm gonna kill you!\" *charges*\n"
                                          "Kelly: \"Easy, there, tiger.\" \n"
                                          "*punches Hector to stop him, Hector falls*\n"
                                          "\"You don't fight my racers, here. Get in your car, fight like a man.\"\n"
                                          "The Demon: \"HAHAHAA! Let's go, then.\"\n"
                                          "Narrator: \"Frankly, I don't need to stress the rest. All James had to do is keep up and hit him on the back of the car near a corner.\n"
                                          "Kelly's gunmen then press a button to deploy a bomb and poor Hector... was gone. The interesting part's what happened later that night.\"\n"
                                          "-----Later that Night-----\n"
                                          "Kelly: \"You were amazing out there.\""<<endl;
                                    Progress<<"Beverly: \"What the hell are you doing here?\"\n"
                                          "Kelly: \"Relax, pretty boy. Last I checked, problems between me and your father aren't reason enough to ban me from this place.\n"
                                          "We're not on your territory. The whole racing world is here. Step aside.\"\n"
                                          "Beverly: \"Why's your boy looking for my brother?!\"\n"
                                          "Kelly: \"All we want is a race. We want that (mockingly) \"MONEY, BABY\" you're talking about.\"\n"
                                          "Narrator: \"And just then, Hector shows up.\"\n"
                                          "The Demon: \"I'm gonna kill you!\" *charges*\n"
                                          "Kelly: \"Easy, there, tiger.\" \n"
                                          "*punches Hector to stop him, Hector falls*\n"
                                          "\"You don't fight my racers, here. Get in your car, fight like a man.\"\n"
                                          "The Demon: \"HAHAHAA! Let's go, then.\"\n"
                                          "Narrator: \"Frankly, I don't need to stress the rest. All James had to do is keep up and hit him on the back of the car near a corner.\n"
                                          "Kelly's gunmen then press a button to deploy a bomb and poor Hector... was gone. The interesting part's what happened later that night.\"\n"
                                          "-----Later that Night-----\n"
                                          "Kelly: \"You were amazing out there.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yeah, I was, wasn't I?\"\n"
                                          "2. \"I feel terrible. I just killed a person.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Yeah, I was, wasn't I?\"" << endl;
                                                Progress << "\"Yeah, I was, wasn't I?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"I feel terrible. I just killed a person.\"" << endl;
                                                Progress << "\"I feel terrible. I just killed a person.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Yeah...\""<<endl;
                                    Progress<<"Kelly: \"Yeah...\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. *silently leave*\n"
                                          "2. \"Excuse me, Kelly, I gotta go.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "*silently leave*" << endl;
                                                Progress << "*silently leave*" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Excuse me, Kelly, I gotta go.\"" << endl;
                                                Progress << "\"Excuse me, Kelly, I gotta go.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Narrator: \"And so, James left to go home. He got on his bed, pick up the phone, and dialled.\"\n"
                                          "James: \"Andy?\"\n"
                                          "Andrew: \"WHERE THE HELL HAVE YOU BEEN, MAN?! I THOUGHT YOU WERE DEAD.\"\n"
                                          "James: \"Andy, I love you bro.\"\n"
                                          "Andrew: \"Woah, woah, what are you talking about?\"\n"
                                          "*gunshot*\n"
                                          "Narrator: \"It's not easy to kill a man. James had now killed 2. One he killed to survive.\n"
                                          "Ironically, he killed the other for the opposite reason - he couldn't live knowing someone isn't because of him.\n"
                                          "He was dead the moment he put that car into drive mode and nodded ready. I guess not everyone can handle being a legend in the racing world.\"\n"
                                          "GAME OVER"<<endl;
                                    Progress<<"Narrator: \"And so, James left to go home. He got on his bed, pick up the phone, and dialled.\"\n"
                                              "James: \"Andy?\"\n"
                                              "Andrew: \"WHERE THE HELL HAVE YOU BEEN, MAN?! I THOUGHT YOU WERE DEAD.\"\n"
                                              "James: \"Andy, I love you bro.\"\n"
                                              "Andrew: \"Woah, woah, what are you talking about?\"\n"
                                              "*gunshot*\n"
                                              "Narrator: \"It's not easy to kill a man. James had now killed 2. One he killed to survive.\n"
                                              "Ironically, he killed the other for the opposite reason - he couldn't live knowing someone isn't because of him.\n"
                                              "He was dead the moment he put that car into drive mode and nodded ready. I guess not everyone can handle being a legend in the racing world.\"\n"
                                              "GAME OVER"<<endl;
                                    return 0;
                                    break;
                                case 2:
                                    cout << "\"Can I have the Viper, please?\"" << endl;
                                    Progress << "\"Can I have the Viper, please?\"" << endl;
                                    James.setNPCCar("Dodge Viper", "Manual", 72);
                                    James_lb.setTotalSC(James.getNPCCarSC());
                                    //Key Choice 1.1
                                    cout<<"Kelly: \"Excellent choice!\""<<endl;
                                    Progress<<"Kelly: \"Excellent choice!\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Thanks\"\n"
                                          "2. *Nod*"<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Thanks\"" << endl;
                                                Progress << "\"Thanks\"" << endl;
                                                break;
                                            case 2:
                                                cout << "*Nod*" << endl;
                                                Progress << "*Nod*" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Listen, kid. You don't just get into our world like that.\n"
                                          "Our people generally don't trust some punks like you. I'm gonna need you to prove yourself.\""<<endl;
                                    Progress<<"Kelly: \"Listen, kid. You don't just get into our world like that.\n"
                                              "Our people generally don't trust some punks like you. I'm gonna need you to prove yourself.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"How?\"\n"
                                          "2. \"Prove myself?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"How?\"" << endl;
                                                Progress << "\"How?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Prove myself?\"" << endl;
                                                Progress << "\"Prove myself?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Simple. All you gotta do is get yourself out there. Make yourself known.\n"
                                          "In our world, your car gives you street cred. All you gotta do to keep it, is... Well, race well.\n"
                                          "If our people know you and you work for me, you got the trust of the whole underground. Then Phantom's boys can't kill you.\n"
                                          "They can just go to war with whoever you're with, which is me. You have our protection as long as you earn it. And this is the way to earn it.\n"
                                          "I'll hook you up with a couple races. You're remembered in this world when you have 80 or more street cred.\n"
                                          "You ready?\""<<endl;
                                    Progress<<"Kelly: \"Simple. All you gotta do is get yourself out there. Make yourself known.\n"
                                              "In our world, your car gives you street cred. All you gotta do to keep it, is... Well, race well.\n"
                                              "If our people know you and you work for me, you got the trust of the whole underground. Then Phantom's boys can't kill you.\n"
                                              "They can just go to war with whoever you're with, which is me. You have our protection as long as you earn it. And this is the way to earn it.\n"
                                              "I'll hook you up with a couple races. You're remembered in this world when you have 80 or more street cred.\n"
                                              "You ready?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"I hope so.\"\n"
                                          "2. \"Yes!\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I hope so.\"" << endl;
                                                Progress << "\"I hope so.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Yes!\"" << endl;
                                                Progress << "\"Yes!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Okay. Then, head to the X, I'll meet you there.\""<<endl;
                                    Progress<<"Kelly: \"Okay. Then, head to the X, I'll meet you there.\""<<endl;
                                    map.resetMap();
                                    map.spawnBestBuy(2, 3);
                                    for (int i = 0; i < 10; i++) {
                                        map.displayMap();

                                        cout << "Valid moves are: " << endl;
                                        map.displayMoves();

                                        cout << "Input a move: ";
                                        cin >> move;
                                        cout << endl;
                                        map.executeMove(move);
                                        if (map.isBestBuyLocation()) {
                                            break;
                                        }
                                        i--;
                                    }
                                    cout<<"-----5 minutes later-----"<<endl;
                                    Progress<<"-----5 minutes later-----"<<endl;
                                    cout<<"Kelly: \"Okay, newbie. The car you got from me's given you a street cred of 72 points. \n"
                                          "Tonight you get to win 8 races in a row, so you're gonna be in however many races necessary to get to the street cred I told you to get to.\""<<endl;
                                    Progress<<"Kelly: \"Okay, newbie. The car you got from me's given you a street cred of 72 points. \n"
                                              "Tonight you get to win 8 races in a row, so you're gonna be in however many races necessary to get to the street cred I told you to get to.\""<<endl;
                                    for(;true;) //infinite loop
                                    {
                                        count = minigame();
                                        if (count >= 4)
                                            James_lb.setTotalSC(James_lb.getTotalSC() + 1);
                                        else
                                            James_lb.setTotalSC(James_lb.getTotalSC() - 1);

                                        cout<<"James' total street cred now is "<<James_lb.getTotalSC()<<endl;
                                        if(James_lb.getTotalSC() >= 80)
                                            break;
                                    }
                                    cout<<"Kelly: \"Wow. That was some tough racing. I'm actually impressed. How'd you lose to that Hector kid, then? He SUCKS at this.\""<<endl;
                                    Progress<<"Kelly: \"Wow. That was some tough racing. I'm actually impressed. How'd you lose to that Hector kid, then? He SUCKS at this.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"I guess my head wasn't in the game, Kelly.\"\n"
                                          "2. \"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                          "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I guess my head wasn't in the game, Kelly.\"" << endl;
                                                Progress << "\"I guess my head wasn't in the game, Kelly.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                                        "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\"" << endl;
                                                Progress << "\"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                                            "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Regardless. You should've had him. Hector's a punk driving overpriced cars his dad buys.\n"
                                          "He calls them 'projects' or his 'demons from hell' but all he does is calls Gomez and Gomez builds his cars.\n"
                                          "He's an enthusiastic driver, but... any one of my guys can beat him. That includes you, with the driving I saw today.\""<<endl;
                                    Progress<<"Kelly: \"Regardless. You should've had him. Hector's a punk driving overpriced cars his dad buys.\n"
                                              "He calls them 'projects' or his 'demons from hell' but all he does is calls Gomez and Gomez builds his cars.\n"
                                              "He's an enthusiastic driver, but... any one of my guys can beat him. That includes you, with the driving I saw today.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Thanks, Kelly. So what now?\"\n"
                                          "2. \"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Thanks, Kelly. So what now?\"" << endl;
                                                Progress << "\"Thanks, Kelly. So what now?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\"" << endl;
                                                Progress << "\"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Well, if you don't want him to kill you...\"\n"
                                          "James: \"Yeah?\"\n"
                                          "Kelly: \"You're gonna have to kill him.\"\n"
                                          "James : \"WHAT?!\""<<endl;
                                    Progress<<"Kelly: \"Well, if you don't want him to kill you...\"\n"
                                              "James: \"Yeah?\"\n"
                                              "Kelly: \"You're gonna have to kill him.\"\n"
                                              "James : \"WHAT?!\""<<endl;
                                    cout<<"Kelly: \"Don't panic. We're gonna make it look like an accident, and we're going to call a truce with Phantom.\n"
                                          "We'll say we raced, he was winning, you mistimed a turn, accidentally ended up PIT-ing him.\""<<endl;
                                    Progress<<"Kelly: \"Don't panic. We're gonna make it look like an accident, and we're going to call a truce with Phantom.\n"
                                              "We'll say we raced, he was winning, you mistimed a turn, accidentally ended up PIT-ing him.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1.\"PIT?\"\n"
                                          "2. \"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"PIT?\"" << endl;
                                                Progress << "\"PIT?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\"" << endl;
                                                Progress << "\"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"PIT is a police pursuit intervention technique. \n"
                                          "It means you hit him from behind at a certain angle and speed, causing his vehicle to flip over and crash.\n"
                                          "Phantom knows his son doesn't really do his research on his engines. \n"
                                          "Gomez works for the highest bidder, but is trusted by everyone. His judgement is always solid.\n"
                                          "We'll slip him some money to tell Phantom that his son's car had a crack in the fuel line. \n"
                                          "A spark gets in there from a scratch or a hit? Car goes boom. And so does driver.\""<<endl;
                                    Progress<<"Kelly: \"PIT is a police pursuit intervention technique. \n"
                                              "It means you hit him from behind at a certain angle and speed, causing his vehicle to flip over and crash.\n"
                                              "Phantom knows his son doesn't really do his research on his engines. \n"
                                              "Gomez works for the highest bidder, but is trusted by everyone. His judgement is always solid.\n"
                                              "We'll slip him some money to tell Phantom that his son's car had a crack in the fuel line. \n"
                                              "A spark gets in there from a scratch or a hit? Car goes boom. And so does driver.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                          "What do I do if I PIT him and the car doesn't magically explode?\"\n"
                                          "2. \"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                                        "What do I do if I PIT him and the car doesn't magically explode?\"" << endl;
                                                Progress << "\"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                                            "What do I do if I PIT him and the car doesn't magically explode?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\"" << endl;
                                                Progress << "\"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"There's a way around that. You know what car always explodes?\n"
                                          "One with a timed bomb in it. All we gotta do is figure out a way for you to get a bomb in little Hector's car.\"\n"
                                          "-----3 days later, somewhere dark, 3 AM-----\n"
                                          "Narrator: \"James couldn't believe what he got into. He was afraid. He was terrified, in fact. But, he didn't show his fear.\n"
                                          "He was gonna do anything to live. And if that meant taking someone's life - it had to be done.\n"
                                          "All because of some stupid drag race he lost.\"\n"
                                          "Kelly: \"Ready, kid?\""<<endl;
                                    Progress<<"Kelly: \"There's a way around that. You know what car always explodes?\n"
                                              "One with a timed bomb in it. All we gotta do is figure out a way for you to get a bomb in little Hector's car.\"\n"
                                              "-----3 days later, somewhere dark, 3 AM-----\n"
                                              "Narrator: \"James couldn't believe what he got into. He was afraid. He was terrified, in fact. But, he didn't show his fear.\n"
                                              "He was gonna do anything to live. And if that meant taking someone's life - it had to be done.\n"
                                              "All because of some stupid drag race he lost.\"\n"
                                              "Kelly: \"Ready, kid?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"As ready as I can be to kill someone.\"\n"
                                          "2. \"No, not really.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"As ready as I can be to kill someone.\"" << endl;
                                                Progress << "\"As ready as I can be to kill someone.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"No, not really.\"" << endl;
                                                Progress << "\"No, not really.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Excellent. Let's move.\"\n"
                                          "Narrator: \"And so, the plan was simple. Break into Hector's and put a bomb on his car.\n"
                                          "Simple enough.\"\n"
                                          "Kelly: \"(quietly, whispering) That's Hector's garage.\n"
                                          "That's where his Miata is hidden, being repaired right now for a race.\n"
                                          "What we're gonna do is put these little timed bombs in the seat.\n"
                                          "There's a trick I learned. \n"
                                          "They're undetectable as long as they're sewn in the seat, and he doesn't expect you to be ballsy enough to actually break in here.\n"
                                          "He won't expect it, so he won't have a reason to check his seats. Install them near the head. We want him dead, not almost dead in a hospital.\n"
                                          "Then we're both fucked.\n"
                                          "We've got lookout. This is your mess. You sew the bombs in.\""<<endl;
                                    Progress<<"Kelly: \"Excellent. Let's move.\"\n"
                                              "Narrator: \"And so, the plan was simple. Break into Hector's and put a bomb on his car.\n"
                                              "Simple enough.\"\n"
                                              "Kelly: \"(quietly, whispering) That's Hector's garage.\n"
                                              "That's where his Miata is hidden, being repaired right now for a race.\n"
                                              "What we're gonna do is put these little timed bombs in the seat.\n"
                                              "There's a trick I learned. \n"
                                              "They're undetectable as long as they're sewn in the seat, and he doesn't expect you to be ballsy enough to actually break in here.\n"
                                              "He won't expect it, so he won't have a reason to check his seats. Install them near the head. We want him dead, not almost dead in a hospital.\n"
                                              "Then we're both fucked.\n"
                                              "We've got lookout. This is your mess. You sew the bombs in.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"B-but..\"\n"
                                          "2. \"Umm...\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"B-but..\"" << endl;
                                                Progress << "\"B-but..\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Umm...\"" << endl;
                                                Progress << "\"Umm...\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"NOTHING. I don't wanna hear a word out of you. We're already risking our lives and reputations here.\n"
                                          "GO!\"\n"
                                          "-----5 Minutes Later-----\n"
                                          "James: \"It's done!\"\n"
                                          "Kelly: \"Perfect. DRIVE!\"\n"
                                          "Narrator: \"And so, next thing to do is just race.\"\n"
                                          "-----1 Day Later, the Underworld's Racing Championship Day-----\n"
                                          "Beverly: \"Okay, folks! We all know the drill!\n"
                                          "Welcome to the racing event of your lives!\"\n"
                                          "*engines revving in the background, Still DRE by Dr. Dre playing loud*\n"
                                          "Beverly: \"We have Japanese legends, American muscle, and of course, German engineering MASTERPIECES!\n"
                                          "We race for honor. We race for glory. And most importantly, we race for MONEY, BABY!\n"
                                          "Are we rea--\"\n"
                                          "Narrator: \"And Beverly got interrupted by Kelly and James' arrival.\""<<endl;
                                    Progress<< "Kelly: \"NOTHING. I don't wanna hear a word out of you. We're already risking our lives and reputations here.\n"
                                               "GO!\"\n"
                                               "-----5 Minutes Later-----\n"
                                               "James: \"It's done!\"\n"
                                               "Kelly: \"Perfect. DRIVE!\"\n"
                                               "Narrator: \"And so, next thing to do is just race.\"\n"
                                               "-----1 Day Later, the Underworld's Racing Championship Day-----\n"
                                               "Beverly: \"Okay, folks! We all know the drill!\n"
                                               "Welcome to the racing event of your lives!\"\n"
                                               "*engines revving in the background, Still DRE by Dr. Dre playing loud*\n"
                                               "Beverly: \"We have Japanese legends, American muscle, and of course, German engineering MASTERPIECES!\n"
                                               "We race for honor. We race for glory. And most importantly, we race for MONEY, BABY!\n"
                                               "Are we rea--\"\n"
                                               "Narrator: \"And Beverly got interrupted by Kelly and James' arrival.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1.\"I'm looking for a challenge. Hector, the Demon. Race me!\"\n"
                                          "2. \"HECTOR!\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I'm looking for a challenge. Hector, the Demon. Race me!\"" << endl;
                                                Progress << "\"I'm looking for a challenge. Hector, the Demon. Race me!\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"HECTOR!\"" << endl;
                                                Progress << "\"HECTOR!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Beverly: \"What the hell are you doing here?\"\n"
                                          "Kelly: \"Relax, pretty boy. Last I checked, problems between me and your father aren't reason enough to ban me from this place.\n"
                                          "We're not on your territory. The whole racing world is here. Step aside.\"\n"
                                          "Beverly: \"Why's your boy looking for my brother?!\"\n"
                                          "Kelly: \"All we want is a race. We want that (mockingly) \"MONEY, BABY\" you're talking about.\"\n"
                                          "Narrator: \"And just then, Hector shows up.\"\n"
                                          "The Demon: \"I'm gonna kill you!\" *charges*\n"
                                          "Kelly: \"Easy, there, tiger.\" \n"
                                          "*punches Hector to stop him, Hector falls*\n"
                                          "\"You don't fight my racers, here. Get in your car, fight like a man.\"\n"
                                          "The Demon: \"HAHAHAA! Let's go, then.\"\n"
                                          "Narrator: \"Frankly, I don't need to stress the rest. All James had to do is keep up and hit him on the back of the car near a corner.\n"
                                          "Kelly's gunmen then press a button to deploy a bomb and poor Hector... was gone. The interesting part's what happened later that night.\"\n"
                                          "-----Later that Night-----\n"
                                          "Kelly: \"You were amazing out there.\""<<endl;
                                    Progress<<"Beverly: \"What the hell are you doing here?\"\n"
                                              "Kelly: \"Relax, pretty boy. Last I checked, problems between me and your father aren't reason enough to ban me from this place.\n"
                                              "We're not on your territory. The whole racing world is here. Step aside.\"\n"
                                              "Beverly: \"Why's your boy looking for my brother?!\"\n"
                                              "Kelly: \"All we want is a race. We want that (mockingly) \"MONEY, BABY\" you're talking about.\"\n"
                                              "Narrator: \"And just then, Hector shows up.\"\n"
                                              "The Demon: \"I'm gonna kill you!\" *charges*\n"
                                              "Kelly: \"Easy, there, tiger.\" \n"
                                              "*punches Hector to stop him, Hector falls*\n"
                                              "\"You don't fight my racers, here. Get in your car, fight like a man.\"\n"
                                              "The Demon: \"HAHAHAA! Let's go, then.\"\n"
                                              "Narrator: \"Frankly, I don't need to stress the rest. All James had to do is keep up and hit him on the back of the car near a corner.\n"
                                              "Kelly's gunmen then press a button to deploy a bomb and poor Hector... was gone. The interesting part's what happened later that night.\"\n"
                                              "-----Later that Night-----\n"
                                              "Kelly: \"You were amazing out there.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yeah, I was, wasn't I?\"\n"
                                          "2. \"I feel terrible. I just killed a person.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Yeah, I was, wasn't I?\"" << endl;
                                                Progress << "\"Yeah, I was, wasn't I?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"I feel terrible. I just killed a person.\"" << endl;
                                                Progress << "\"I feel terrible. I just killed a person.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Yeah...\""<<endl;
                                    Progress<<"Kelly: \"Yeah...\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. *silently leave*\n"
                                          "2. \"Excuse me, Kelly, I gotta go.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "*silently leave*" << endl;
                                                Progress << "*silently leave*" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Excuse me, Kelly, I gotta go.\"" << endl;
                                                Progress << "\"Excuse me, Kelly, I gotta go.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Narrator: \"And so, James left to go home. He got on his bed, pick up the phone, and dialled.\"\n"
                                          "James: \"Andy?\"\n"
                                          "Andrew: \"WHERE THE HELL HAVE YOU BEEN, MAN?! I THOUGHT YOU WERE DEAD.\"\n"
                                          "James: \"Andy, I love you bro.\"\n"
                                          "Andrew: \"Woah, woah, what are you talking about?\"\n"
                                          "*gunshot*\n"
                                          "Narrator: \"It's not easy to kill a man. James had now killed 2. One he killed to survive.\n"
                                          "Ironically, he killed the other for the opposite reason - he couldn't live knowing someone isn't because of him.\n"
                                          "He was dead the moment he put that car into drive mode and nodded ready. I guess not everyone can handle being a legend in the racing world.\"\n"
                                          "GAME OVER"<<endl;
                                    Progress<<"Narrator: \"And so, James left to go home. He got on his bed, pick up the phone, and dialled.\"\n"
                                              "James: \"Andy?\"\n"
                                              "Andrew: \"WHERE THE HELL HAVE YOU BEEN, MAN?! I THOUGHT YOU WERE DEAD.\"\n"
                                              "James: \"Andy, I love you bro.\"\n"
                                              "Andrew: \"Woah, woah, what are you talking about?\"\n"
                                              "*gunshot*\n"
                                              "Narrator: \"It's not easy to kill a man. James had now killed 2. One he killed to survive.\n"
                                              "Ironically, he killed the other for the opposite reason - he couldn't live knowing someone isn't because of him.\n"
                                              "He was dead the moment he put that car into drive mode and nodded ready. I guess not everyone can handle being a legend in the racing world.\"\n"
                                              "GAME OVER"<<endl;
                                    return 0;
                                    break;
                                case 3:
                                    cout << "\"No-brainer - give me the Bimmer.\"" << endl;
                                    Progress << "\"No-brainer - give me the Bimmer.\"" << endl;
                                    James.setNPCCar("BMW M3", "Manual", 72);
                                    James_lb.setTotalSC(James.getNPCCarSC());
                                    //Key Choice 1.1
                                    cout<<"Kelly: \"Excellent choice!\""<<endl;
                                    Progress<<"Kelly: \"Excellent choice!\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Thanks\"\n"
                                          "2. *Nod*"<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Thanks\"" << endl;
                                                Progress << "\"Thanks\"" << endl;
                                                break;
                                            case 2:
                                                cout << "*Nod*" << endl;
                                                Progress << "*Nod*" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Listen, kid. You don't just get into our world like that.\n"
                                          "Our people generally don't trust some punks like you. I'm gonna need you to prove yourself.\""<<endl;
                                    Progress<<"Kelly: \"Listen, kid. You don't just get into our world like that.\n"
                                              "Our people generally don't trust some punks like you. I'm gonna need you to prove yourself.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"How?\"\n"
                                          "2. \"Prove myself?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"How?\"" << endl;
                                                Progress << "\"How?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Prove myself?\"" << endl;
                                                Progress << "\"Prove myself?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Simple. All you gotta do is get yourself out there. Make yourself known.\n"
                                          "In our world, your car gives you street cred. All you gotta do to keep it, is... Well, race well.\n"
                                          "If our people know you and you work for me, you got the trust of the whole underground. Then Phantom's boys can't kill you.\n"
                                          "They can just go to war with whoever you're with, which is me. You have our protection as long as you earn it. And this is the way to earn it.\n"
                                          "I'll hook you up with a couple races. You're remembered in this world when you have 80 or more street cred.\n"
                                          "You ready?\""<<endl;
                                    Progress<<"Kelly: \"Simple. All you gotta do is get yourself out there. Make yourself known.\n"
                                              "In our world, your car gives you street cred. All you gotta do to keep it, is... Well, race well.\n"
                                              "If our people know you and you work for me, you got the trust of the whole underground. Then Phantom's boys can't kill you.\n"
                                              "They can just go to war with whoever you're with, which is me. You have our protection as long as you earn it. And this is the way to earn it.\n"
                                              "I'll hook you up with a couple races. You're remembered in this world when you have 80 or more street cred.\n"
                                              "You ready?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"I hope so.\"\n"
                                          "2. \"Yes!\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I hope so.\"" << endl;
                                                Progress << "\"I hope so.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Yes!\"" << endl;
                                                Progress << "\"Yes!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Okay. Then, head to the X, I'll meet you there.\""<<endl;
                                    Progress<<"Kelly: \"Okay. Then, head to the X, I'll meet you there.\""<<endl;
                                    map.resetMap();
                                    map.spawnBestBuy(2, 3);
                                    for (int i = 0; i < 10; i++) {
                                        map.displayMap();

                                        cout << "Valid moves are: " << endl;
                                        map.displayMoves();

                                        cout << "Input a move: ";
                                        cin >> move;
                                        cout << endl;
                                        map.executeMove(move);
                                        if (map.isBestBuyLocation()) {
                                            break;
                                        }
                                        i--;
                                    }
                                    cout<<"-----5 minutes later-----"<<endl;
                                    Progress<<"-----5 minutes later-----"<<endl;
                                    cout<<"Kelly: \"Okay, newbie. The car you got from me's given you a street cred of 72 points. \n"
                                          "Tonight you get to win 8 races in a row, so you're gonna be in however many races necessary to get to the street cred I told you to get to.\""<<endl;
                                    Progress<<"Kelly: \"Okay, newbie. The car you got from me's given you a street cred of 72 points. \n"
                                              "Tonight you get to win 8 races in a row, so you're gonna be in however many races necessary to get to the street cred I told you to get to.\""<<endl;
                                    for(;true;) //infinite loop
                                    {
                                        count = minigame();
                                        if (count >= 4)
                                            James_lb.setTotalSC(James_lb.getTotalSC() + 1);
                                        else
                                            James_lb.setTotalSC(James_lb.getTotalSC() - 1);

                                        cout<<"James' total street cred now is "<<James_lb.getTotalSC()<<endl;
                                        if(James_lb.getTotalSC() >= 80)
                                            break;
                                    }
                                    cout<<"Kelly: \"Wow. That was some tough racing. I'm actually impressed. How'd you lose to that Hector kid, then? He SUCKS at this.\""<<endl;
                                    Progress<<"Kelly: \"Wow. That was some tough racing. I'm actually impressed. How'd you lose to that Hector kid, then? He SUCKS at this.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"I guess my head wasn't in the game, Kelly.\"\n"
                                          "2. \"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                          "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I guess my head wasn't in the game, Kelly.\"" << endl;
                                                Progress << "\"I guess my head wasn't in the game, Kelly.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                                        "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\"" << endl;
                                                Progress << "\"What were you expecting? I was driving someone's riced up automatic transmission Nissan Skyline.\n"
                                                            "Badge said GT-R, engine bay said GT-T, and the non-turbo model, too.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Regardless. You should've had him. Hector's a punk driving overpriced cars his dad buys.\n"
                                          "He calls them 'projects' or his 'demons from hell' but all he does is calls Gomez and Gomez builds his cars.\n"
                                          "He's an enthusiastic driver, but... any one of my guys can beat him. That includes you, with the driving I saw today.\""<<endl;
                                    Progress<<"Kelly: \"Regardless. You should've had him. Hector's a punk driving overpriced cars his dad buys.\n"
                                              "He calls them 'projects' or his 'demons from hell' but all he does is calls Gomez and Gomez builds his cars.\n"
                                              "He's an enthusiastic driver, but... any one of my guys can beat him. That includes you, with the driving I saw today.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Thanks, Kelly. So what now?\"\n"
                                          "2. \"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Thanks, Kelly. So what now?\"" << endl;
                                                Progress << "\"Thanks, Kelly. So what now?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\"" << endl;
                                                Progress << "\"That means a lot coming from you. But even if he's a bad driver, I doubt he's not a criminal. How do I keep my head on my shoulders?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Well, if you don't want him to kill you...\"\n"
                                          "James: \"Yeah?\"\n"
                                          "Kelly: \"You're gonna have to kill him.\"\n"
                                          "James : \"WHAT?!\""<<endl;
                                    Progress<<"Kelly: \"Well, if you don't want him to kill you...\"\n"
                                              "James: \"Yeah?\"\n"
                                              "Kelly: \"You're gonna have to kill him.\"\n"
                                              "James : \"WHAT?!\""<<endl;
                                    cout<<"Kelly: \"Don't panic. We're gonna make it look like an accident, and we're going to call a truce with Phantom.\n"
                                          "We'll say we raced, he was winning, you mistimed a turn, accidentally ended up PIT-ing him.\""<<endl;
                                    Progress<<"Kelly: \"Don't panic. We're gonna make it look like an accident, and we're going to call a truce with Phantom.\n"
                                              "We'll say we raced, he was winning, you mistimed a turn, accidentally ended up PIT-ing him.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1.\"PIT?\"\n"
                                          "2. \"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"PIT?\"" << endl;
                                                Progress << "\"PIT?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\"" << endl;
                                                Progress << "\"God, what did I get myself into? Fine. What the hell does PIT mean anyway?\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"PIT is a police pursuit intervention technique. \n"
                                          "It means you hit him from behind at a certain angle and speed, causing his vehicle to flip over and crash.\n"
                                          "Phantom knows his son doesn't really do his research on his engines. \n"
                                          "Gomez works for the highest bidder, but is trusted by everyone. His judgement is always solid.\n"
                                          "We'll slip him some money to tell Phantom that his son's car had a crack in the fuel line. \n"
                                          "A spark gets in there from a scratch or a hit? Car goes boom. And so does driver.\""<<endl;
                                    Progress<<"Kelly: \"PIT is a police pursuit intervention technique. \n"
                                              "It means you hit him from behind at a certain angle and speed, causing his vehicle to flip over and crash.\n"
                                              "Phantom knows his son doesn't really do his research on his engines. \n"
                                              "Gomez works for the highest bidder, but is trusted by everyone. His judgement is always solid.\n"
                                              "We'll slip him some money to tell Phantom that his son's car had a crack in the fuel line. \n"
                                              "A spark gets in there from a scratch or a hit? Car goes boom. And so does driver.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                          "What do I do if I PIT him and the car doesn't magically explode?\"\n"
                                          "2. \"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                                        "What do I do if I PIT him and the car doesn't magically explode?\"" << endl;
                                                Progress << "\"Okay, but what if he doesn't actually have a cracked fuel line?\n"
                                                            "What do I do if I PIT him and the car doesn't magically explode?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\"" << endl;
                                                Progress << "\"Seems horrible to me. Plus cars don't explode from a... whatever police maneuver.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"There's a way around that. You know what car always explodes?\n"
                                          "One with a timed bomb in it. All we gotta do is figure out a way for you to get a bomb in little Hector's car.\"\n"
                                          "-----3 days later, somewhere dark, 3 AM-----\n"
                                          "Narrator: \"James couldn't believe what he got into. He was afraid. He was terrified, in fact. But, he didn't show his fear.\n"
                                          "He was gonna do anything to live. And if that meant taking someone's life - it had to be done.\n"
                                          "All because of some stupid drag race he lost.\"\n"
                                          "Kelly: \"Ready, kid?\""<<endl;
                                    Progress<<"Kelly: \"There's a way around that. You know what car always explodes?\n"
                                              "One with a timed bomb in it. All we gotta do is figure out a way for you to get a bomb in little Hector's car.\"\n"
                                              "-----3 days later, somewhere dark, 3 AM-----\n"
                                              "Narrator: \"James couldn't believe what he got into. He was afraid. He was terrified, in fact. But, he didn't show his fear.\n"
                                              "He was gonna do anything to live. And if that meant taking someone's life - it had to be done.\n"
                                              "All because of some stupid drag race he lost.\"\n"
                                              "Kelly: \"Ready, kid?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"As ready as I can be to kill someone.\"\n"
                                          "2. \"No, not really.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"As ready as I can be to kill someone.\"" << endl;
                                                Progress << "\"As ready as I can be to kill someone.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"No, not really.\"" << endl;
                                                Progress << "\"No, not really.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Excellent. Let's move.\"\n"
                                          "Narrator: \"And so, the plan was simple. Break into Hector's and put a bomb on his car.\n"
                                          "Simple enough.\"\n"
                                          "Kelly: \"(quietly, whispering) That's Hector's garage.\n"
                                          "That's where his Miata is hidden, being repaired right now for a race.\n"
                                          "What we're gonna do is put these little timed bombs in the seat.\n"
                                          "There's a trick I learned. \n"
                                          "They're undetectable as long as they're sewn in the seat, and he doesn't expect you to be ballsy enough to actually break in here.\n"
                                          "He won't expect it, so he won't have a reason to check his seats. Install them near the head. We want him dead, not almost dead in a hospital.\n"
                                          "Then we're both fucked.\n"
                                          "We've got lookout. This is your mess. You sew the bombs in.\""<<endl;
                                    Progress<<"Kelly: \"Excellent. Let's move.\"\n"
                                              "Narrator: \"And so, the plan was simple. Break into Hector's and put a bomb on his car.\n"
                                              "Simple enough.\"\n"
                                              "Kelly: \"(quietly, whispering) That's Hector's garage.\n"
                                              "That's where his Miata is hidden, being repaired right now for a race.\n"
                                              "What we're gonna do is put these little timed bombs in the seat.\n"
                                              "There's a trick I learned. \n"
                                              "They're undetectable as long as they're sewn in the seat, and he doesn't expect you to be ballsy enough to actually break in here.\n"
                                              "He won't expect it, so he won't have a reason to check his seats. Install them near the head. We want him dead, not almost dead in a hospital.\n"
                                              "Then we're both fucked.\n"
                                              "We've got lookout. This is your mess. You sew the bombs in.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"B-but..\"\n"
                                          "2. \"Umm...\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"B-but..\"" << endl;
                                                Progress << "\"B-but..\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Umm...\"" << endl;
                                                Progress << "\"Umm...\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"NOTHING. I don't wanna hear a word out of you. We're already risking our lives and reputations here.\n"
                                          "GO!\"\n"
                                          "-----5 Minutes Later-----\n"
                                          "James: \"It's done!\"\n"
                                          "Kelly: \"Perfect. DRIVE!\"\n"
                                          "Narrator: \"And so, next thing to do is just race.\"\n"
                                          "-----1 Day Later, the Underworld's Racing Championship Day-----\n"
                                          "Beverly: \"Okay, folks! We all know the drill!\n"
                                          "Welcome to the racing event of your lives!\"\n"
                                          "*engines revving in the background, Still DRE by Dr. Dre playing loud*\n"
                                          "Beverly: \"We have Japanese legends, American muscle, and of course, German engineering MASTERPIECES!\n"
                                          "We race for honor. We race for glory. And most importantly, we race for MONEY, BABY!\n"
                                          "Are we rea--\"\n"
                                          "Narrator: \"And Beverly got interrupted by Kelly and James' arrival.\""<<endl;
                                    Progress<< "Kelly: \"NOTHING. I don't wanna hear a word out of you. We're already risking our lives and reputations here.\n"
                                               "GO!\"\n"
                                               "-----5 Minutes Later-----\n"
                                               "James: \"It's done!\"\n"
                                               "Kelly: \"Perfect. DRIVE!\"\n"
                                               "Narrator: \"And so, next thing to do is just race.\"\n"
                                               "-----1 Day Later, the Underworld's Racing Championship Day-----\n"
                                               "Beverly: \"Okay, folks! We all know the drill!\n"
                                               "Welcome to the racing event of your lives!\"\n"
                                               "*engines revving in the background, Still DRE by Dr. Dre playing loud*\n"
                                               "Beverly: \"We have Japanese legends, American muscle, and of course, German engineering MASTERPIECES!\n"
                                               "We race for honor. We race for glory. And most importantly, we race for MONEY, BABY!\n"
                                               "Are we rea--\"\n"
                                               "Narrator: \"And Beverly got interrupted by Kelly and James' arrival.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1.\"I'm looking for a challenge. Hector, the Demon. Race me!\"\n"
                                          "2. \"HECTOR!\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"I'm looking for a challenge. Hector, the Demon. Race me!\"" << endl;
                                                Progress << "\"I'm looking for a challenge. Hector, the Demon. Race me!\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"HECTOR!\"" << endl;
                                                Progress << "\"HECTOR!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Beverly: \"What the hell are you doing here?\"\n"
                                          "Kelly: \"Relax, pretty boy. Last I checked, problems between me and your father aren't reason enough to ban me from this place.\n"
                                          "We're not on your territory. The whole racing world is here. Step aside.\"\n"
                                          "Beverly: \"Why's your boy looking for my brother?!\"\n"
                                          "Kelly: \"All we want is a race. We want that (mockingly) \"MONEY, BABY\" you're talking about.\"\n"
                                          "Narrator: \"And just then, Hector shows up.\"\n"
                                          "The Demon: \"I'm gonna kill you!\" *charges*\n"
                                          "Kelly: \"Easy, there, tiger.\" \n"
                                          "*punches Hector to stop him, Hector falls*\n"
                                          "\"You don't fight my racers, here. Get in your car, fight like a man.\"\n"
                                          "The Demon: \"HAHAHAA! Let's go, then.\"\n"
                                          "Narrator: \"Frankly, I don't need to stress the rest. All James had to do is keep up and hit him on the back of the car near a corner.\n"
                                          "Kelly's gunmen then press a button to deploy a bomb and poor Hector... was gone. The interesting part's what happened later that night.\"\n"
                                          "-----Later that Night-----\n"
                                          "Kelly: \"You were amazing out there.\""<<endl;
                                    Progress<<"Beverly: \"What the hell are you doing here?\"\n"
                                              "Kelly: \"Relax, pretty boy. Last I checked, problems between me and your father aren't reason enough to ban me from this place.\n"
                                              "We're not on your territory. The whole racing world is here. Step aside.\"\n"
                                              "Beverly: \"Why's your boy looking for my brother?!\"\n"
                                              "Kelly: \"All we want is a race. We want that (mockingly) \"MONEY, BABY\" you're talking about.\"\n"
                                              "Narrator: \"And just then, Hector shows up.\"\n"
                                              "The Demon: \"I'm gonna kill you!\" *charges*\n"
                                              "Kelly: \"Easy, there, tiger.\" \n"
                                              "*punches Hector to stop him, Hector falls*\n"
                                              "\"You don't fight my racers, here. Get in your car, fight like a man.\"\n"
                                              "The Demon: \"HAHAHAA! Let's go, then.\"\n"
                                              "Narrator: \"Frankly, I don't need to stress the rest. All James had to do is keep up and hit him on the back of the car near a corner.\n"
                                              "Kelly's gunmen then press a button to deploy a bomb and poor Hector... was gone. The interesting part's what happened later that night.\"\n"
                                              "-----Later that Night-----\n"
                                              "Kelly: \"You were amazing out there.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yeah, I was, wasn't I?\"\n"
                                          "2. \"I feel terrible. I just killed a person.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "\"Yeah, I was, wasn't I?\"" << endl;
                                                Progress << "\"Yeah, I was, wasn't I?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"I feel terrible. I just killed a person.\"" << endl;
                                                Progress << "\"I feel terrible. I just killed a person.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Kelly: \"Yeah...\""<<endl;
                                    Progress<<"Kelly: \"Yeah...\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. *silently leave*\n"
                                          "2. \"Excuse me, Kelly, I gotta go.\""<<endl;
                                    do {
                                        cin >> input_kc11;
                                        switch (input_kc11) {
                                            case 1:
                                                cout << "*silently leave*" << endl;
                                                Progress << "*silently leave*" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Excuse me, Kelly, I gotta go.\"" << endl;
                                                Progress << "\"Excuse me, Kelly, I gotta go.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc11 != 1 && input_kc11 != 2);
                                    cout<<"Narrator: \"And so, James left to go home. He got on his bed, pick up the phone, and dialled.\"\n"
                                          "James: \"Andy?\"\n"
                                          "Andrew: \"WHERE THE HELL HAVE YOU BEEN, MAN?! I THOUGHT YOU WERE DEAD.\"\n"
                                          "James: \"Andy, I love you bro.\"\n"
                                          "Andrew: \"Woah, woah, what are you talking about?\"\n"
                                          "*gunshot*\n"
                                          "Narrator: \"It's not easy to kill a man. James had now killed 2. One he killed to survive.\n"
                                          "Ironically, he killed the other for the opposite reason - he couldn't live knowing someone isn't because of him.\n"
                                          "He was dead the moment he put that car into drive mode and nodded ready. I guess not everyone can handle being a legend in the racing world.\"\n"
                                          "GAME OVER"<<endl;
                                    Progress<<"Narrator: \"And so, James left to go home. He got on his bed, pick up the phone, and dialled.\"\n"
                                              "James: \"Andy?\"\n"
                                              "Andrew: \"WHERE THE HELL HAVE YOU BEEN, MAN?! I THOUGHT YOU WERE DEAD.\"\n"
                                              "James: \"Andy, I love you bro.\"\n"
                                              "Andrew: \"Woah, woah, what are you talking about?\"\n"
                                              "*gunshot*\n"
                                              "Narrator: \"It's not easy to kill a man. James had now killed 2. One he killed to survive.\n"
                                              "Ironically, he killed the other for the opposite reason - he couldn't live knowing someone isn't because of him.\n"
                                              "He was dead the moment he put that car into drive mode and nodded ready. I guess not everyone can handle being a legend in the racing world.\"\n"
                                              "GAME OVER"<<endl;
                                    return 0;
                                case 4:
                                    cout
                                            << "\"Actually, can I get a different car? Possibly an automatic? I don't drive manual.\""
                                            << endl;
                                    Progress
                                            << "\"Actually, can I get a different car? Possibly an automatic? I don't drive manual.\""
                                            << endl;
                                    //Key Choice 1.2

                                    cout<<"Kelly: *stares at you for a few seconds blankly*\n"
                                          "\"This is hopeless...\""<<endl;
                                    Progress<<"Kelly: *stares at you for a few seconds blankly*\n"
                                              "\"This is hopeless...\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"Isn't driving an automatic normal these days?\"\n"
                                          "2. \"Come on, how am I supposed to learn manual when no one's driving it.\""<<endl;
                                    do {
                                        cin >> input_kc12;
                                        switch (input_kc12) {
                                            case 1:
                                                cout << "\"Isn't driving an automatic normal these days?\"" << endl;
                                                Progress << "\"Isn't driving an automatic normal these days?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Come on, how am I supposed to learn manual when no one's driving it.\"" << endl;
                                                Progress << "\"Come on, how am I supposed to learn manual when no one's driving it.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc12 != 1 && input_kc12 != 2);
                                    cout<<"Kelly: \"You come to MY garage claiming you're some sort of good racer, car enthusiast, etc.\n"
                                          "You don't even drive the proper cars. You can't do anything in an automatic!\n"
                                          "In our world, when you shift means win or lose. You can't expect your car to know you're about to turn.\n"
                                          "I can't do this. Tell Gomez I'm out.\""<<endl;
                                    Progress<<"Kelly: \"You come to MY garage claiming you're some sort of good racer, car enthusiast, etc.\n"
                                              "You don't even drive the proper cars. You can't do anything in an automatic!\n"
                                              "In our world, when you shift means win or lose. You can't expect your car to know you're about to turn.\n"
                                              "I can't do this. Tell Gomez I'm out.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Please, I'll learn if you teach me!\"\n"
                                          "2. \"So, I don't drive manual. So what? Just get me in an auto and let me race!\""<<endl;
                                    do {
                                        cin >> input_kc12;
                                        switch (input_kc12) {
                                            case 1:
                                                cout << "\"Please, I'll learn if you teach me!\"" << endl;
                                                Progress << "\"Please, I'll learn if you teach me!\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"So, I don't drive manual. So what? Just get me in an auto and let me race!\"" << endl;
                                                Progress << "\"So, I don't drive manual. So what? Just get me in an auto and let me race!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc12 != 1 && input_kc12 != 2);
                                    cout<<"Kelly: \"Look, man. You don't drive normal cars, you don't drive cars at all. \n"
                                          "I can't do this. I'm out. Go buy the car from Gomez, give it to Phantom's boy and get outta here.\n"
                                          "This is not a world anyone can walk into. You don't have what it takes. We're done here.\""<<endl;
                                    Progress<<"Kelly: \"Look, man. You don't drive normal cars, you don't drive cars at all. \n"
                                              "I can't do this. I'm out. Go buy the car from Gomez, give it to Phantom's boy and get outta here.\n"
                                              "This is not a world anyone can walk into. You don't have what it takes. We're done here.\""<<endl;
                                    cout<<"Narrator: \"And so, Kelly kicked James out of her garage. She judged him and, sadly, found him unworthy.\""<<endl;
                                    Progress<<"Narrator: \"And so, Kelly kicked James out of her garage. She judged him and, sadly, found him unworthy.\""<<endl;
                                    cout<<"-----3 Days Later-----"<<endl;
                                    Progress<<"-----3 Days Later-----"<<endl;
                                    cout<<"Phantom: \"You better fix this mess, Hector! You will not let a nobody disrespect everything I ever stood for!\n"
                                          "Find him, kill him, and get me my car. NOW!\"\n"
                                          "\n"
                                          "The Demon: \"Yes, sir.\"\n"
                                          "\n"
                                          "Narrator: \"And that's what James got into for running. Phantom has a problem with him, and that's never good.\n"
                                          "Kelly can barely handle Phantom. It's true that James is a nobody.\n"
                                          "\n"
                                          "And life caught up to the poor guy. Hector found him only 3 days later, and he killed him over a car.\n"
                                          "In hopes to become a criminal racer, he got killed, and the game is over.\n"
                                          "The lesson for next time is - when a game offers you free manual driving skills, by all means - take them.\"\n"
                                          "\n"
                                          "GAME OVER"<<endl;
                                    Progress<<"Phantom: \"You better fix this mess, Hector! You will not let a nobody disrespect everything I ever stood for!\n"
                                              "Find him, kill him, and get me my car. NOW!\"\n"
                                              "\n"
                                              "The Demon: \"Yes, sir.\"\n"
                                              "\n"
                                              "Narrator: \"And that's what James got into for running. Phantom has a problem with him, and that's never good.\n"
                                              "Kelly can barely handle Phantom. It's true that James is a nobody.\n"
                                              "\n"
                                              "And life caught up to the poor guy. Hector found him only 3 days later, and he killed him over a car.\n"
                                              "In hopes to become a criminal racer, he got killed, and the game is over.\n"
                                              "The lesson for next time is - when a game offers you free manual driving skills, by all means - take them.\"\n"
                                              "\n"
                                              "GAME OVER"<<endl;
                                    return 0;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc1 != 1 && input_kc1 != 2 && input_kc1 != 3 && input_kc1 != 4);
                        break;
                    case 2:
                        cout<<"\"Fine. Good race.\""<<endl;
                        Progress<<"\"Fine. Good race.\""<<endl;

                        //If chosen 2, everything happens here.

                        cout<<"Narrator: \"And that's how James lost a Skyline that wasn't even his to begin with.\n"
                              "He now has a big problem - Gomez. Gomez isn't some two-bit thug, he's built an empire based on street races.\n"
                              "And that's exactly the issue, here. He didn't build an empire by forgiving every moron who lost his cars.\n"
                              "James would pay... with his life.\""<<endl;
                        Progress<<"Narrator: \"And that's how James lost a Skyline that wasn't even his to begin with.\n"
                                  "He now has a big problem - Gomez. Gomez isn't some two-bit thug, he's built an empire based on street races.\n"
                                  "And that's exactly the issue, here. He didn't build an empire by forgiving every moron who lost his cars.\n"
                                  "James would pay... with his life.\""<<endl;
                        cout<<"James: \"Hey, man, please. Just tell me how much you want for the car. It's a rental!\""<<endl;
                        Progress<<"James: \"Hey, man, please. Just tell me how much you want for the car. It's a rental!\""<<endl;
                        cout<<"The Demon: \"Nah, no way, homie. That GT-R is sick, I want it. Matter of fact, I might even daily it.\""<<endl;
                        Progress<<"The Demon: \"Nah, no way, homie. That GT-R is sick, I want it. Matter of fact, I might even daily it.\""<<endl;
                        cout<<"James: "<<endl;
                        Progress<<"James: "<<endl;
                        cout<<"1. \"Please, there must be something I can do.\"\n"
                              "2. \"Bro, come on. You got like twice the price of this thing under the hood of that Miata.\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "\"Please, there must be something I can do.\"" << endl;
                                    Progress << "\"Please, there must be something I can do.\"" << endl;
                                    break;
                                case 2:
                                    cout << "\"Bro, come on. You got like twice the price of this thing under the hood of that Miata.\"" << endl;
                                    Progress << "\"Bro, come on. You got like twice the price of this thing under the hood of that Miata.\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        }
                        while (input_kc2 != 1 && input_kc2 != 2);
                        cout<<"The Demon: \"Look bro. You lost your car, right? End of fucking story. But here, I'll bite. Who you rent it from? \n"
                              "Is it one of them big joints or is it someone from our underground... \"facilities\"?\""<<endl;
                        Progress<<"The Demon: \"Look bro. You lost your car, right? End of fucking story. But here, I'll bite. Who you rent it from? \n"
                                  "Is it one of them big joints or is it someone from our underground... \"facilities\"?\""<<endl;
                        cout<<"James:"<<endl;
                        Progress<<"James:"<<endl;
                        cout<<"1. \"I got it from this dude named Gomez.\"\n"
                              "2. \"Big joints don't rent GT-R Skylines. Not like that, anyway.\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "\"I got it from this dude named Gomez.\"" << endl;
                                    Progress << "\"I got it from this dude named Gomez.\"" << endl;
                                    break;
                                case 2:
                                    cout << "\"Big joints don't rent GT-R Skylines. Not like that, anyway.\"" << endl;
                                    Progress << "\"Big joints don't rent GT-R Skylines. Not like that, anyway.\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        }
                        while (input_kc2 != 1 && input_kc2 != 2);
                        cout<<"The Demon: \"Oh, this Gomie's car, huh? Well, fuck Gomie. Him and that Kelly girl work together. \n"
                              "My dad don't like that at all, but Gomie's the best tuner we got up in here. He works for everyone's money.\n"
                              "Personally, I don't like dude at all... So, you lost his car, huh?\""<<endl;
                        Progress<<"The Demon: \"Oh, this Gomie's car, huh? Well, fuck Gomie. Him and that Kelly girl work together. \n"
                                  "My dad don't like that at all, but Gomie's the best tuner we got up in here. He works for everyone's money.\n"
                                  "Personally, I don't like dude at all... So, you lost his car, huh?\""<<endl;
                        cout<<"James:"<<endl;
                        Progress<<"James:"<<endl;
                        cout<<"1. \"I understand why you don't like him, but, he'll kill me.\"\n"
                              "2. \"I dislike him too but what can I do? I owe him a car, now, man! Come on.\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "\"I understand why you don't like him, but, he'll kill me.\"" << endl;
                                    Progress << "\"I understand why you don't like him, but, he'll kill me.\"" << endl;
                                    break;
                                case 2:
                                    cout << "\"I dislike him too but what can I do? I owe him a car, now, man! Come on.\"" << endl;
                                    Progress << "\"I dislike him too but what can I do? I owe him a car, now, man! Come on.\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        }
                        while (input_kc2 != 1 && input_kc2 != 2);
                        cout<<"The Demon: \"Look, you ain't getting the car back. However, I can do something else for you, if you're down.\""<<endl;
                        Progress<<"The Demon: \"Look, you ain't getting the car back. However, I can do something else for you, if you're down.\""<<endl;
                        cout<<"James: \"What?\""<<endl;
                        Progress<<"James: \"What?\""<<endl;
                        cout<<"The Demon: \"You ever heard of the Phantom?\""<<endl;
                        Progress<<"The Demon: \"You ever heard of the Phantom?\""<<endl;
                        cout<<"James:"<<endl;
                        Progress<<"James:"<<endl;
                        cout<<"1. \"The racing kingpin? Yeah.\"\n"
                              "2. \"I got no idea who that is.\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "\"The racing kingpin? Yeah.\"" << endl;
                                    Progress << "\"The racing kingpin? Yeah.\" " << endl;
                                    break;
                                case 2:
                                    cout << "\"I got no idea who that is.\"" << endl;
                                    Progress << "\"I got no idea who that is.\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        }
                        while (input_kc2 != 1 && input_kc2 != 2);
                        cout<<"The Demon: \"He's my dad, and he's always looking for new recruits. Plus, I kinda like you. \n"
                              "You're a good driver, you almost had me. Not a lot of people can beat me in a race.\n"
                              "Some training, you'll do great. We just have to give you a nice car to work with.\""<<endl;
                        Progress<<"The Demon: \"He's my dad, and he's always looking for new recruits. Plus, I kinda like you. \n"
                                  "You're a good driver, you almost had me. Not a lot of people can beat me in a race.\n"
                                  "Some training, you'll do great. We just have to give you a nice car to work with.\""<<endl;
                        cout<<"James: "<<endl;
                        Progress<<"James: "<<endl;
                        cout<<"1. \"Damn. I really don't have a choice, do I? Either this or Gomez kills me.\"\n"
                              "2. \"Whatever keeps my head attached to my shoulders!\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "\"Damn. I really don't have a choice, do I? Either this or Gomez kills me.\"" << endl;
                                    Progress << " \"Damn. I really don't have a choice, do I? Either this or Gomez kills me.\" " << endl;
                                    break;
                                case 2:
                                    cout << "\"Whatever keeps my head attached to my shoulders!\"" << endl;
                                    Progress << "\"Whatever keeps my head attached to my shoulders!\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        }
                        while (input_kc2 != 1 && input_kc2 != 2);
                        cout<<"The Demon: \"Good. Meet me at my dad's garage.\n"
                              "We've got some cars coming in, our boys won a few races over in the desert.\n"
                              "Let's see if we can pick a toy for you to play with. One that I don't want for myself, of course.\"\n"
                              "*chuckles*"<<endl;
                        Progress<<"The Demon: \"Good. Meet me at my dad's garage.\n"
                                  "We've got some cars coming in, our boys won a few races over in the desert.\n"
                                  "Let's see if we can pick a toy for you to play with. One that I don't want for myself, of course.\"\n"
                                  "*chuckles*"<<endl;
                        cout<<"James: \"Where do I go?\""<<endl;
                        Progress<<"James: \"Where do I go?\""<<endl;
                        cout<<"The Demon: \"X. We meet at the X. Take my Miata there.\""<<endl;
                        Progress<<"The Demon: \"X. We meet at the X. Take my Miata there.\""<<endl;
                        map.resetMap();
                        map.spawnBestBuy(3, 1);
                        for (int i = 0; i < 10; i++) {
                            map.displayMap();

                            cout << "Valid moves are: " << endl;
                            map.displayMoves();

                            cout << "Input a move: ";
                            cin >> move;
                            cout << endl;
                            map.executeMove(move);
                            if (map.isBestBuyLocation()) {
                                break;
                            }
                            i--;
                        }
                        cout<<"-----Phantom's, right after the race-----"<<endl;
                        Progress<<"-----Phantom's, right after the race-----"<<endl;
                        cout<<"Beverly: \"Who's this clown, Hector?\""<<endl;
                        Progress<<"Beverly: \"Who's this clown, Hector?\""<<endl;
                        cout<<"The Demon: \"Hang on, now, Beverly. We got a common enemy. That dude's name is... I don't even think I remember it, if he even told me.\n"
                              "But his name now is the Ravager. He's a trainee. I just have to speak to my father about this, but he's the dude I wanna train.\""<<endl;
                        Progress<<"The Demon: \"Hang on, now, Beverly. We got a common enemy. That dude's name is... I don't even think I remember it, if he even told me.\n"
                                  "But his name now is the Ravager. He's a trainee. I just have to speak to my father about this, but he's the dude I wanna train.\""<<endl;
                        cout<<"Beverly: \"God, Hector, common enemy? What do you think we are, the mafia?\""<<endl;
                        Progress<<"Beverly: \"God, Hector, common enemy? What do you think we are, the mafia?\""<<endl;
                        cout<<"The Demon: \"Chill out. I know what I'm doing, I'm dad's favorite for a reason.\""<<endl;
                        Progress<<"The Demon: \"Chill out. I know what I'm doing, I'm dad's favorite for a reason.\""<<endl;
                        cout<<"Beverly: \"You're cocky, arrogant, and none of what you just said is true.\""<<endl;
                        Progress<<"Beverly: \"You're cocky, arrogant, and none of what you just said is true.\""<<endl;
                        cout<<"The Demon: \"Meet my brother, Beverly. \n"
                              "He races cars like a moron, doesn't even know how to downshift properly, but when it comes to bikes, he's the go-to dude.\n"
                              "Hence the stupid nickname.\""<<endl;
                        Progress<<"The Demon: \"Meet my brother, Beverly. \n"
                                  "He races cars like a moron, doesn't even know how to downshift properly, but when it comes to bikes, he's the go-to dude.\n"
                                  "Hence the stupid nickname.\""<<endl;
                        cout<<"James: "<<endl;
                        Progress<<"James: "<<endl;
                        cout<<"1. \"Beverly? Like the Italian Piaggio brand?\"\n"
                              "2. \"Nice to meet you, Mr. Beverly.\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "\"Beverly? Like the Italian Piaggio brand?\"" << endl;
                                    Progress << " \"Beverly? Like the Italian Piaggio brand?\" " << endl;
                                    break;
                                case 2:
                                    cout << "\"Nice to meet you, Mr. Beverly.\"" << endl;
                                    Progress << "\"Nice to meet you, Mr. Beverly.\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        }
                        while (input_kc2 != 1 && input_kc2 != 2);
                        cout<<"The Demon: \"Ight, no time for chit-chat. B, the new cars arrive yet?\""<<endl;
                        Progress<<"The Demon: \"Ight, no time for chit-chat. B, the new cars arrive yet?\""<<endl;
                        cout<<"Beverly: \"Yeah. Nothing special this week, to be honest.\n"
                              "Couple of Fairladies, some Mustangs. There was a cool Supra MK3, but it was an Auto. \n"
                              "Got it off some rich kid who doesn't know anything about cars, including how to drive one.\""<<endl;
                        Progress<<"Beverly: \"Yeah. Nothing special this week, to be honest.\n"
                                  "Couple of Fairladies, some Mustangs. There was a cool Supra MK3, but it was an Auto. \n"
                                  "Got it off some rich kid who doesn't know anything about cars, including how to drive one.\""<<endl;
                        cout<<"The Demon: \"Anything I can use to coach training wheels over here?\""<<endl;
                        Progress<<"The Demon: \"Anything I can use to coach training wheels over here?\""<<endl;
                        cout<<"James: "<<endl;
                        Progress<<"James: "<<endl;
                        cout<<"1. Stay Silent\n"
                              "2. \"Hey!\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "*Gives The Demon an offended look*" << endl;
                                    Progress << " *Gives The Demon an offended look* " << endl;
                                    break;
                                case 2:
                                    cout << "\"Hey!\"" << endl;
                                    Progress << "\"Hey!\"" << endl;
                                    break;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        }
                        while (input_kc2 != 1 && input_kc2 != 2);
                        cout<<"Beverly: \"Yeah. Personally I'd go with the Fairlady 370Z. You'll see it - the matte black with the purple angel eyes.\n"
                              "Other than that, two more cars are good to drive for beginners on training wheels.\n"
                              "I'd say the Porsche Cayman that came with an RB26 swap is pretty dope, and, what was the third one that caught my eye... \n"
                              "Oh, a rocket bunny RX-7 came in. It's right hand drive, though, so... maybe not? I don't know, let your boy here decide.\""<<endl;
                        Progress<<"Beverly: \"Yeah. Personally I'd go with the Fairlady 370Z. You'll see it - the matte black with the purple angel eyes.\n"
                                  "Other than that, two more cars are good to drive for beginners on training wheels.\n"
                                  "I'd say the Porsche Cayman that came with an RB26 swap is pretty dope, and, what was the third one that caught my eye... \n"
                                  "Oh, a rocket bunny RX-7 came in. It's right hand drive, though, so... maybe not? I don't know, let your boy here decide.\""<<endl;
                        cout<<"James: "<<endl;
                        Progress<<"James:"<<endl;
                        cout<<"1. \"Oh, that Z sounds AWESOME.\""<<endl;
                        cout<<"2. \"I always have been a Porsche man.\""<<endl;
                        cout<<"3. \"Rocket. Bunny. Mazda. PLEASE.\""<<endl;
                        cout<<"4. \"Oh.. I appreciate you guys' offer, but... I can't drive manual. Can't I get that MK3 or something?\""<<endl;
                        do {
                            cin >> input_kc2;
                            switch (input_kc2) {
                                case 1:
                                    cout << "\"Oh, that Z sounds AWESOME.\"" << endl;
                                    Progress << "\"Oh, that Z sounds AWESOME.\"" << endl;
                                    James.setNPCCar("Nissan 370Z", "Manual", 77);
                                    James_lb.setTotalSC(James.getNPCCarSC());
                                    //Another Key Choice (2.1)
                                    cout<<"Beverly: \"Sure thing, man. You got a taste.\"\n"
                                          "The Demon: \"Yeah, the taste of a MORON, HAHA. You suck at driving anyway.\"\n"
                                          "Beverly: \"Lay off the kid, man, you had one of them before.\"\n"
                                          "The Demon: \"HAD, Beverly. HAD. Past tense... asshole.\""<<endl;
                                    Progress<<"Beverly: \"Sure thing, man. You got a taste.\"\n"
                                              "The Demon: \"Yeah, the taste of a MORON, HAHA. You suck at driving anyway.\"\n"
                                              "Beverly: \"Lay off the kid, man, you had one of them before.\"\n"
                                              "The Demon: \"HAD, Beverly. HAD. Past tense... asshole.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"\n"
                                          "2. \"Let's race this thing!\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"" << endl;
                                                Progress << " \"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Let's race this thing!\"" << endl;
                                                Progress << "\"Let's race this thing!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Slow down there, tiger. First we need to bump up your street cred. \n"
                                          "You're riding with me and my boys, in my car. So, your cred is already pretty high, 77.\n"
                                          "HOWEVER, I'd still like you above 80 on that leaderboard before you can ride with me and my crew.\n"
                                          "Then you're forgiven, I pull strings with Gomez. But you're with me. If I find you being disloyal...\"\n"
                                          "*hand gesture saying \"I'll kill you\"*\n"
                                          "Beverly: \"Okay, Hector. Race championship is tomorrow night. Your boy makes it there, we can talk.\"\n"
                                          "The Demon: \"Okay. (to you) Okay, man. Come with me.\n"
                                          "We need you to do really well in this championship.\n"
                                          "All the underground racers will send their best crews up there. First place of the whole thing is a million.\n"
                                          "Winner takes all. I need you to get us in the competition up there. All you need to do is win 3 races that whole night.\n"
                                          "That'll raise your street cred to 80, too.\n"
                                          "Couple of tips: higher the RPMs - the faster you accelerate. Don't upshift unless necessary, don't redline it either.\n"
                                          "Most cars redline at about 7k. Shift at 6-7k. When cornering, always downshift to 3 or 2 and rev match.\n"
                                          "Clutch in, and as you're bringing the shifter into the lower gear, parallel to that you wanna blip the throttle with your right leg.\n"
                                          "Then you just release the clutch and that's a rev match, but I assume you already know that. Good luck out there.\"\n"
                                          "-----The next night-----\n"
                                          "Narrator: \"James needed to quickly get to the X, the race was soon starting.\"\n"
                                          "The Demon: \"You ready?\""<<endl;
                                    Progress<<"The Demon: \"Slow down there, tiger. First we need to bump up your street cred. \n"
                                              "You're riding with me and my boys, in my car. So, your cred is already pretty high, 77.\n"
                                              "HOWEVER, I'd still like you above 80 on that leaderboard before you can ride with me and my crew.\n"
                                              "Then you're forgiven, I pull strings with Gomez. But you're with me. If I find you being disloyal...\"\n"
                                              "*hand gesture saying \"I'll kill you\"*\n"
                                              "Beverly: \"Okay, Hector. Race championship is tomorrow night. Your boy makes it there, we can talk.\"\n"
                                              "The Demon: \"Okay. (to you) Okay, man. Come with me.\n"
                                              "We need you to do really well in this championship.\n"
                                              "All the underground racers will send their best crews up there. First place of the whole thing is a million.\n"
                                              "Winner takes all. I need you to get us in the competition up there. All you need to do is win 3 races that whole night.\n"
                                              "That'll raise your street cred to 80, too.\n"
                                              "Couple of tips: higher the RPMs - the faster you accelerate. Don't upshift unless necessary, don't redline it either.\n"
                                              "Most cars redline at about 7k. Shift at 6-7k. When cornering, always downshift to 3 or 2 and rev match.\n"
                                              "Clutch in, and as you're bringing the shifter into the lower gear, parallel to that you wanna blip the throttle with your right leg.\n"
                                              "Then you just release the clutch and that's a rev match, but I assume you already know that. Good luck out there.\"\n"
                                              "-----The next night-----\n"
                                              "Narrator: \"James needed to quickly get to the X, the race was soon starting.\"\n"
                                              "The Demon: \"You ready?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yes.\"\n"
                                          "2. \"ABSOLUTELY NOT! I'M TERRIFIED!\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Yes.\"" << endl;
                                                Progress << " \"Yes.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"ABSOLUTELY NOT! I'M TERRIFIED!\"" << endl;
                                                Progress << "\"ABSOLUTELY NOT! I'M TERRIFIED!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Great! Let's go!\"\n"
                                          "*speakers blasting Still DRE loudly, car engines revving and people racing*\n"
                                          "Narrator: \"Up until two days ago, James dreamed of places like this one. \n"
                                          "Now, he just couldn't shake this feeling of nausea and fear.\n"
                                          "It was like, he was ready to do this, but he was about to choke.\n"
                                          "But he shoved all of that back where it was coming from. It was time. The next couple of races will change his life.\""<<endl;
                                    Progress<<"The Demon: \"Great! Let's go!\"\n"
                                              "*speakers blasting Still DRE loudly, car engines revving and people racing*\n"
                                              "Narrator: \"Up until two days ago, James dreamed of places like this one. \n"
                                              "Now, he just couldn't shake this feeling of nausea and fear.\n"
                                              "It was like, he was ready to do this, but he was about to choke.\n"
                                              "But he shoved all of that back where it was coming from. It was time. The next couple of races will change his life.\""<<endl;
                                    for(;true;) //infinite loop
                                    {
                                        count = minigame();
                                        if (count >= 4)
                                            James_lb.setTotalSC(James_lb.getTotalSC() + 1);
                                        else
                                            James_lb.setTotalSC(James_lb.getTotalSC() - 1);

                                        cout<<"James' total street cred now is "<<James_lb.getTotalSC()<<endl;
                                        if(James_lb.getTotalSC() >= 80)
                                            break;
                                    }
                                    cout<<"The Demon: \"That was impressive. Wow, man! Where'd you learn to drive like that?!\""<<endl;
                                    Progress<<"The Demon: \"That was impressive. Wow, man! Where'd you learn to drive like that?!\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Well, I just took your advice.\"\n"
                                          "2. \"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Well, I just took your advice.\"" << endl;
                                                Progress << " \"Well, I just took your advice.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\"" << endl;
                                                Progress << "\"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Too bad we ain't never gon' find out. Anyway, there's this girl, Kelly.\n"
                                          "You think you can beat her? She a pro, tho. She the best.\""<<endl;
                                    Progress<<"The Demon: \"Too bad we ain't never gon' find out. Anyway, there's this girl, Kelly.\n"
                                              "You think you can beat her? She a pro, tho. She the best.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yeah, I'll try.\"\n"
                                          "2. No, I'm not feeling up to it."<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Yeah, I'll try.\"" << endl;
                                                Progress << " \"Yeah, I'll try.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"No, I'm not fee- You know what? Let's do it, bro.\"" << endl;
                                                Progress << "\"No, I'm not fee- You know what? Let's do it, bro.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Ight, man!\"\n"
                                          "Narrator: \"Kelly was the greatest racer on these grounds.\n"
                                          "She's been winning this thing every month it was hosted for 2 years straight. No one could beat her.\n"
                                          "James' driving was impressive today, but for her? You need some Smokey Nagata speeds.\"\n"
                                          "James: \"Ight, I'm ready.\"\n"
                                          "Kelly: \"This ain't gonna be a fair one, punk. None of your boys will win this.\n"
                                          "I'll let anyone win but you!\"\n"
                                          "Narrator: \"James was confused now. He was terrified.\"\n"
                                          "-----1 Minute Later, Just After the Race Started-----\n"
                                          "James: \"(in his car, no one hears him) Yo, what's wrong with this chick?!\"\n"
                                          "Kelly: \"(in hers) You didn't think I was going to play fair against Phantom's boys, did you?\"\n"
                                          "James: \"OH GOD!\"\n"
                                          "Narrator: \"And Kelly drove James into a life-threatening crash.\"\n"
                                          "-----5 Days Later, Hospital-----"<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Where am I?\"\n"
                                          "2. \"What happened?\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                Progress << "  *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                break;
                                            case 2:
                                                cout << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                Progress << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"Andrew: \"Bro, they just called me from the hospital.. Don't try to talk, just rest.\n"
                                          "You were in a crash. I don't know how it happened but... What the hell were you doing in the desert, bro?\"\n"
                                          "James: \"It's a long story.\"\n"
                                          "Narrator: \"James then checked his phone. He had received a message from The Demon.\n"
                                          "His crash had justified Phantom's crew killing Kelly, finally ending the war between them.\n"
                                          "And as for James, he was invited to be one of Phantom's own, the right hand of his son.\"\n"
                                          "The Demon: \"(over text message) What do you say, man? You want something unforgettable? An adventure of a lifetime?\"\n"
                                          "James: \"(over text) You know, H? I really had a blast today, man.\n"
                                          "I hope I have you and your brother as my friends. But I realized something, man.\n"
                                          "I love my crappy job, and I love my boring old life. I'm sorry. Hope me and my buddy can get invited to another one of them car shows.\n"
                                          "One of yours, this time. And you better make it enjoyable, otherwise I might have to come and kick your ass in a race.\"\n"
                                          "The Demon: \"You can try, big man. You can try.\n"
                                          "(they both smile at their phones with respect towards each other, and then put it down and appreciate life more now, with its major changes)\"\n"
                                          "GAME OVER."<<endl;
                                    Progress<<"Andrew: \"Bro, they just called me from the hospital.. Don't try to talk, just rest.\n"
                                              "You were in a crash. I don't know how it happened but... What the hell were you doing in the desert, bro?\"\n"
                                              "James: \"It's a long story.\"\n"
                                              "Narrator: \"James then checked his phone. He had received a message from The Demon.\n"
                                              "His crash had justified Phantom's crew killing Kelly, finally ending the war between them.\n"
                                              "And as for James, he was invited to be one of Phantom's own, the right hand of his son.\"\n"
                                              "The Demon: \"(over text message) What do you say, man? You want something unforgettable? An adventure of a lifetime?\"\n"
                                              "James: \"(over text) You know, H? I really had a blast today, man.\n"
                                              "I hope I have you and your brother as my friends. But I realized something, man.\n"
                                              "I love my crappy job, and I love my boring old life. I'm sorry. Hope me and my buddy can get invited to another one of them car shows.\n"
                                              "One of yours, this time. And you better make it enjoyable, otherwise I might have to come and kick your ass in a race.\"\n"
                                              "The Demon: \"You can try, big man. You can try.\n"
                                              "(they both smile at their phones with respect towards each other, and then put it down and appreciate life more now, with its major changes)\"\n"
                                              "GAME OVER."<<endl;
                                    return 0;
                                    break;
                                case 2:
                                    cout << "\"I always have been a Porsche man.\"" << endl;
                                    Progress << "\"I always have been a Porsche man.\"" << endl;
                                    James.setNPCCar("Porsche Cayman", "Manual", 77);
                                    James_lb.setTotalSC(James.getNPCCarSC());
                                    //Key Choice 2.1
                                    cout<<"Beverly: \"Sure thing, man. You got a taste.\"\n"
                                          "The Demon: \"Yeah, the taste of a MORON, HAHA. You suck at driving anyway.\"\n"
                                          "Beverly: \"Lay off the kid, man, you had one of them before.\"\n"
                                          "The Demon: \"HAD, Beverly. HAD. Past tense... asshole.\""<<endl;
                                    Progress<<"Beverly: \"Sure thing, man. You got a taste.\"\n"
                                              "The Demon: \"Yeah, the taste of a MORON, HAHA. You suck at driving anyway.\"\n"
                                              "Beverly: \"Lay off the kid, man, you had one of them before.\"\n"
                                              "The Demon: \"HAD, Beverly. HAD. Past tense... asshole.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"\n"
                                          "2. \"Let's race this thing!\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"" << endl;
                                                Progress << " \"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Let's race this thing!\"" << endl;
                                                Progress << "\"Let's race this thing!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Slow down there, tiger. First we need to bump up your street cred. \n"
                                          "You're riding with me and my boys, in my car. So, your cred is already pretty high, 77.\n"
                                          "HOWEVER, I'd still like you above 80 on that leaderboard before you can ride with me and my crew.\n"
                                          "Then you're forgiven, I pull strings with Gomez. But you're with me. If I find you being disloyal...\"\n"
                                          "*hand gesture saying \"I'll kill you\"*\n"
                                          "Beverly: \"Okay, Hector. Race championship is tomorrow night. Your boy makes it there, we can talk.\"\n"
                                          "The Demon: \"Okay. (to you) Okay, man. Come with me.\n"
                                          "We need you to do really well in this championship.\n"
                                          "All the underground racers will send their best crews up there. First place of the whole thing is a million.\n"
                                          "Winner takes all. I need you to get us in the competition up there. All you need to do is win 3 races that whole night.\n"
                                          "That'll raise your street cred to 80, too.\n"
                                          "Couple of tips: higher the RPMs - the faster you accelerate. Don't upshift unless necessary, don't redline it either.\n"
                                          "Most cars redline at about 7k. Shift at 6-7k. When cornering, always downshift to 3 or 2 and rev match.\n"
                                          "Clutch in, and as you're bringing the shifter into the lower gear, parallel to that you wanna blip the throttle with your right leg.\n"
                                          "Then you just release the clutch and that's a rev match, but I assume you already know that. Good luck out there.\"\n"
                                          "-----The next night-----\n"
                                          "Narrator: \"James needed to quickly get to the X, the race was soon starting.\"\n"
                                          "The Demon: \"You ready?\""<<endl;
                                    Progress<<"The Demon: \"Slow down there, tiger. First we need to bump up your street cred. \n"
                                              "You're riding with me and my boys, in my car. So, your cred is already pretty high, 77.\n"
                                              "HOWEVER, I'd still like you above 80 on that leaderboard before you can ride with me and my crew.\n"
                                              "Then you're forgiven, I pull strings with Gomez. But you're with me. If I find you being disloyal...\"\n"
                                              "*hand gesture saying \"I'll kill you\"*\n"
                                              "Beverly: \"Okay, Hector. Race championship is tomorrow night. Your boy makes it there, we can talk.\"\n"
                                              "The Demon: \"Okay. (to you) Okay, man. Come with me.\n"
                                              "We need you to do really well in this championship.\n"
                                              "All the underground racers will send their best crews up there. First place of the whole thing is a million.\n"
                                              "Winner takes all. I need you to get us in the competition up there. All you need to do is win 3 races that whole night.\n"
                                              "That'll raise your street cred to 80, too.\n"
                                              "Couple of tips: higher the RPMs - the faster you accelerate. Don't upshift unless necessary, don't redline it either.\n"
                                              "Most cars redline at about 7k. Shift at 6-7k. When cornering, always downshift to 3 or 2 and rev match.\n"
                                              "Clutch in, and as you're bringing the shifter into the lower gear, parallel to that you wanna blip the throttle with your right leg.\n"
                                              "Then you just release the clutch and that's a rev match, but I assume you already know that. Good luck out there.\"\n"
                                              "-----The next night-----\n"
                                              "Narrator: \"James needed to quickly get to the X, the race was soon starting.\"\n"
                                              "The Demon: \"You ready?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yes.\"\n"
                                          "2. \"ABSOLUTELY NOT! I'M TERRIFIED!\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Yes.\"" << endl;
                                                Progress << " \"Yes.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"ABSOLUTELY NOT! I'M TERRIFIED!\"" << endl;
                                                Progress << "\"ABSOLUTELY NOT! I'M TERRIFIED!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Great! Let's go!\"\n"
                                          "*speakers blasting Still DRE loudly, car engines revving and people racing*\n"
                                          "Narrator: \"Up until two days ago, James dreamed of places like this one. \n"
                                          "Now, he just couldn't shake this feeling of nausea and fear.\n"
                                          "It was like, he was ready to do this, but he was about to choke.\n"
                                          "But he shoved all of that back where it was coming from. It was time. The next couple of races will change his life.\""<<endl;
                                    Progress<<"The Demon: \"Great! Let's go!\"\n"
                                              "*speakers blasting Still DRE loudly, car engines revving and people racing*\n"
                                              "Narrator: \"Up until two days ago, James dreamed of places like this one. \n"
                                              "Now, he just couldn't shake this feeling of nausea and fear.\n"
                                              "It was like, he was ready to do this, but he was about to choke.\n"
                                              "But he shoved all of that back where it was coming from. It was time. The next couple of races will change his life.\""<<endl;
                                    for(;true;) //infinite loop
                                    {
                                        count = minigame();
                                        if (count >= 4)
                                            James_lb.setTotalSC(James_lb.getTotalSC() + 1);
                                        else
                                            James_lb.setTotalSC(James_lb.getTotalSC() - 1);

                                        cout<<"James' total street cred now is "<<James_lb.getTotalSC()<<endl;
                                        if(James_lb.getTotalSC() >= 80)
                                            break;
                                    }
                                    cout<<"The Demon: \"That was impressive. Wow, man! Where'd you learn to drive like that?!\""<<endl;
                                    Progress<<"The Demon: \"That was impressive. Wow, man! Where'd you learn to drive like that?!\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Well, I just took your advice.\"\n"
                                          "2. \"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Well, I just took your advice.\"" << endl;
                                                Progress << " \"Well, I just took your advice.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\"" << endl;
                                                Progress << "\"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Too bad we ain't never gon' find out. Anyway, there's this girl, Kelly.\n"
                                          "You think you can beat her? She a pro, tho. She the best.\""<<endl;
                                    Progress<<"The Demon: \"Too bad we ain't never gon' find out. Anyway, there's this girl, Kelly.\n"
                                              "You think you can beat her? She a pro, tho. She the best.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yeah, I'll try.\"\n"
                                          "2. No, I'm not feeling up to it."<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Yeah, I'll try.\"" << endl;
                                                Progress << " \"Yeah, I'll try.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"No, I'm not fee- You know what? Let's do it, bro.\"" << endl;
                                                Progress << "\"No, I'm not fee- You know what? Let's do it, bro.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Ight, man!\"\n"
                                          "Narrator: \"Kelly was the greatest racer on these grounds.\n"
                                          "She's been winning this thing every month it was hosted for 2 years straight. No one could beat her.\n"
                                          "James' driving was impressive today, but for her? You need some Smokey Nagata speeds.\"\n"
                                          "James: \"Ight, I'm ready.\"\n"
                                          "Kelly: \"This ain't gonna be a fair one, punk. None of your boys will win this.\n"
                                          "I'll let anyone win but you!\"\n"
                                          "Narrator: \"James was confused now. He was terrified.\"\n"
                                          "-----1 Minute Later, Just After the Race Started-----\n"
                                          "James: \"(in his car, no one hears him) Yo, what's wrong with this chick?!\"\n"
                                          "Kelly: \"(in hers) You didn't think I was going to play fair against Phantom's boys, did you?\"\n"
                                          "James: \"OH GOD!\"\n"
                                          "Narrator: \"And Kelly drove James into a life-threatening crash.\"\n"
                                          "-----5 Days Later, Hospital-----"<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Where am I?\"\n"
                                          "2. \"What happened?\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                Progress << "  *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                break;
                                            case 2:
                                                cout << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                Progress << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"Andrew: \"Bro, they just called me from the hospital.. Don't try to talk, just rest.\n"
                                          "You were in a crash. I don't know how it happened but... What the hell were you doing in the desert, bro?\"\n"
                                          "James: \"It's a long story.\"\n"
                                          "Narrator: \"James then checked his phone. He had received a message from The Demon.\n"
                                          "His crash had justified Phantom's crew killing Kelly, finally ending the war between them.\n"
                                          "And as for James, he was invited to be one of Phantom's own, the right hand of his son.\"\n"
                                          "The Demon: \"(over text message) What do you say, man? You want something unforgettable? An adventure of a lifetime?\"\n"
                                          "James: \"(over text) You know, H? I really had a blast today, man.\n"
                                          "I hope I have you and your brother as my friends. But I realized something, man.\n"
                                          "I love my crappy job, and I love my boring old life. I'm sorry. Hope me and my buddy can get invited to another one of them car shows.\n"
                                          "One of yours, this time. And you better make it enjoyable, otherwise I might have to come and kick your ass in a race.\"\n"
                                          "The Demon: \"You can try, big man. You can try.\n"
                                          "(they both smile at their phones with respect towards each other, and then put it down and appreciate life more now, with its major changes)\"\n"
                                          "GAME OVER."<<endl;
                                    Progress<<"Andrew: \"Bro, they just called me from the hospital.. Don't try to talk, just rest.\n"
                                              "You were in a crash. I don't know how it happened but... What the hell were you doing in the desert, bro?\"\n"
                                              "James: \"It's a long story.\"\n"
                                              "Narrator: \"James then checked his phone. He had received a message from The Demon.\n"
                                              "His crash had justified Phantom's crew killing Kelly, finally ending the war between them.\n"
                                              "And as for James, he was invited to be one of Phantom's own, the right hand of his son.\"\n"
                                              "The Demon: \"(over text message) What do you say, man? You want something unforgettable? An adventure of a lifetime?\"\n"
                                              "James: \"(over text) You know, H? I really had a blast today, man.\n"
                                              "I hope I have you and your brother as my friends. But I realized something, man.\n"
                                              "I love my crappy job, and I love my boring old life. I'm sorry. Hope me and my buddy can get invited to another one of them car shows.\n"
                                              "One of yours, this time. And you better make it enjoyable, otherwise I might have to come and kick your ass in a race.\"\n"
                                              "The Demon: \"You can try, big man. You can try.\n"
                                              "(they both smile at their phones with respect towards each other, and then put it down and appreciate life more now, with its major changes)\"\n"
                                              "GAME OVER."<<endl;
                                    return 0;
                                    break;
                                case 3:
                                    cout << "\"Rocket. Bunny. Mazda. PLEASE.\"" << endl;
                                    Progress << "\"Rocket. Bunny. Mazda. PLEASE.\"" << endl;
                                    James.setNPCCar("Mazda RX-7", "Manual", 77);
                                    //This is the coolest car ever built just sayin.
                                    James_lb.setTotalSC(James.getNPCCarSC());
                                    //Key Choice 2.1
                                    cout<<"Beverly: \"Sure thing, man. You got a taste.\"\n"
                                          "The Demon: \"Yeah, the taste of a MORON, HAHA. You suck at driving anyway.\"\n"
                                          "Beverly: \"Lay off the kid, man, you had one of them before.\"\n"
                                          "The Demon: \"HAD, Beverly. HAD. Past tense... asshole.\""<<endl;
                                    Progress<<"Beverly: \"Sure thing, man. You got a taste.\"\n"
                                              "The Demon: \"Yeah, the taste of a MORON, HAHA. You suck at driving anyway.\"\n"
                                              "Beverly: \"Lay off the kid, man, you had one of them before.\"\n"
                                              "The Demon: \"HAD, Beverly. HAD. Past tense... asshole.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"\n"
                                          "2. \"Let's race this thing!\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"" << endl;
                                                Progress << " \"Okay, so now what? We race? How's that gonna stop Gomez from KILLING ME?!\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Let's race this thing!\"" << endl;
                                                Progress << "\"Let's race this thing!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Slow down there, tiger. First we need to bump up your street cred. \n"
                                          "You're riding with me and my boys, in my car. So, your cred is already pretty high, 77.\n"
                                          "HOWEVER, I'd still like you above 80 on that leaderboard before you can ride with me and my crew.\n"
                                          "Then you're forgiven, I pull strings with Gomez. But you're with me. If I find you being disloyal...\"\n"
                                          "*hand gesture saying \"I'll kill you\"*\n"
                                          "Beverly: \"Okay, Hector. Race championship is tomorrow night. Your boy makes it there, we can talk.\"\n"
                                          "The Demon: \"Okay. (to you) Okay, man. Come with me.\n"
                                          "We need you to do really well in this championship.\n"
                                          "All the underground racers will send their best crews up there. First place of the whole thing is a million.\n"
                                          "Winner takes all. I need you to get us in the competition up there. All you need to do is win 3 races that whole night.\n"
                                          "That'll raise your street cred to 80, too.\n"
                                          "Couple of tips: higher the RPMs - the faster you accelerate. Don't upshift unless necessary, don't redline it either.\n"
                                          "Most cars redline at about 7k. Shift at 6-7k. When cornering, always downshift to 3 or 2 and rev match.\n"
                                          "Clutch in, and as you're bringing the shifter into the lower gear, parallel to that you wanna blip the throttle with your right leg.\n"
                                          "Then you just release the clutch and that's a rev match, but I assume you already know that. Good luck out there.\"\n"
                                          "-----The next night-----\n"
                                          "Narrator: \"James needed to quickly get to the X, the race was soon starting.\"\n"
                                          "The Demon: \"You ready?\""<<endl;
                                    Progress<<"The Demon: \"Slow down there, tiger. First we need to bump up your street cred. \n"
                                              "You're riding with me and my boys, in my car. So, your cred is already pretty high, 77.\n"
                                              "HOWEVER, I'd still like you above 80 on that leaderboard before you can ride with me and my crew.\n"
                                              "Then you're forgiven, I pull strings with Gomez. But you're with me. If I find you being disloyal...\"\n"
                                              "*hand gesture saying \"I'll kill you\"*\n"
                                              "Beverly: \"Okay, Hector. Race championship is tomorrow night. Your boy makes it there, we can talk.\"\n"
                                              "The Demon: \"Okay. (to you) Okay, man. Come with me.\n"
                                              "We need you to do really well in this championship.\n"
                                              "All the underground racers will send their best crews up there. First place of the whole thing is a million.\n"
                                              "Winner takes all. I need you to get us in the competition up there. All you need to do is win 3 races that whole night.\n"
                                              "That'll raise your street cred to 80, too.\n"
                                              "Couple of tips: higher the RPMs - the faster you accelerate. Don't upshift unless necessary, don't redline it either.\n"
                                              "Most cars redline at about 7k. Shift at 6-7k. When cornering, always downshift to 3 or 2 and rev match.\n"
                                              "Clutch in, and as you're bringing the shifter into the lower gear, parallel to that you wanna blip the throttle with your right leg.\n"
                                              "Then you just release the clutch and that's a rev match, but I assume you already know that. Good luck out there.\"\n"
                                              "-----The next night-----\n"
                                              "Narrator: \"James needed to quickly get to the X, the race was soon starting.\"\n"
                                              "The Demon: \"You ready?\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yes.\"\n"
                                          "2. \"ABSOLUTELY NOT! I'M TERRIFIED!\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Yes.\"" << endl;
                                                Progress << " \"Yes.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"ABSOLUTELY NOT! I'M TERRIFIED!\"" << endl;
                                                Progress << "\"ABSOLUTELY NOT! I'M TERRIFIED!\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Great! Let's go!\"\n"
                                          "*speakers blasting Still DRE loudly, car engines revving and people racing*\n"
                                          "Narrator: \"Up until two days ago, James dreamed of places like this one. \n"
                                          "Now, he just couldn't shake this feeling of nausea and fear.\n"
                                          "It was like, he was ready to do this, but he was about to choke.\n"
                                          "But he shoved all of that back where it was coming from. It was time. The next couple of races will change his life.\""<<endl;
                                    Progress<<"The Demon: \"Great! Let's go!\"\n"
                                              "*speakers blasting Still DRE loudly, car engines revving and people racing*\n"
                                              "Narrator: \"Up until two days ago, James dreamed of places like this one. \n"
                                              "Now, he just couldn't shake this feeling of nausea and fear.\n"
                                              "It was like, he was ready to do this, but he was about to choke.\n"
                                              "But he shoved all of that back where it was coming from. It was time. The next couple of races will change his life.\""<<endl;
                                    for(;true;) //infinite loop
                                    {
                                        count = minigame();
                                        if (count >= 4)
                                            James_lb.setTotalSC(James_lb.getTotalSC() + 1);
                                        else
                                            James_lb.setTotalSC(James_lb.getTotalSC() - 1);

                                        cout<<"James' total street cred now is "<<James_lb.getTotalSC()<<endl;
                                        if(James_lb.getTotalSC() >= 80)
                                            break;
                                    }
                                    cout<<"The Demon: \"That was impressive. Wow, man! Where'd you learn to drive like that?!\""<<endl;
                                    Progress<<"The Demon: \"That was impressive. Wow, man! Where'd you learn to drive like that?!\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Well, I just took your advice.\"\n"
                                          "2. \"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Well, I just took your advice.\"" << endl;
                                                Progress << " \"Well, I just took your advice.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\"" << endl;
                                                Progress << "\"When I raced you I wasn't in the game. Bet if we rematch, I'll win. Haha.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Too bad we ain't never gon' find out. Anyway, there's this girl, Kelly.\n"
                                          "You think you can beat her? She a pro, tho. She the best.\""<<endl;
                                    Progress<<"The Demon: \"Too bad we ain't never gon' find out. Anyway, there's this girl, Kelly.\n"
                                              "You think you can beat her? She a pro, tho. She the best.\""<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Yeah, I'll try.\"\n"
                                          "2. No, I'm not feeling up to it."<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << "\"Yeah, I'll try.\"" << endl;
                                                Progress << " \"Yeah, I'll try.\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"No, I'm not fee- You know what? Let's do it, bro.\"" << endl;
                                                Progress << "\"No, I'm not fee- You know what? Let's do it, bro.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"The Demon: \"Ight, man!\"\n"
                                          "Narrator: \"Kelly was the greatest racer on these grounds.\n"
                                          "She's been winning this thing every month it was hosted for 2 years straight. No one could beat her.\n"
                                          "James' driving was impressive today, but for her? You need some Smokey Nagata speeds.\"\n"
                                          "James: \"Ight, I'm ready.\"\n"
                                          "Kelly: \"This ain't gonna be a fair one, punk. None of your boys will win this.\n"
                                          "I'll let anyone win but you!\"\n"
                                          "Narrator: \"James was confused now. He was terrified.\"\n"
                                          "-----1 Minute Later, Just After the Race Started-----\n"
                                          "James: \"(in his car, no one hears him) Yo, what's wrong with this chick?!\"\n"
                                          "Kelly: \"(in hers) You didn't think I was going to play fair against Phantom's boys, did you?\"\n"
                                          "James: \"OH GOD!\"\n"
                                          "Narrator: \"And Kelly drove James into a life-threatening crash.\"\n"
                                          "-----5 Days Later, Hospital-----"<<endl;
                                    cout<<"James:"<<endl;
                                    Progress<<"James:"<<endl;
                                    cout<<"1. \"Where am I?\"\n"
                                          "2. \"What happened?\""<<endl;
                                    do {
                                        cin >> input_kc21;
                                        switch (input_kc21) {
                                            case 1:
                                                cout << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                Progress << "  *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                break;
                                            case 2:
                                                cout << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                Progress << " *James tries to speak but feels dizzy and pain everywhere*" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc21 != 1 && input_kc21 != 2);
                                    cout<<"Andrew: \"Bro, they just called me from the hospital.. Don't try to talk, just rest.\n"
                                          "You were in a crash. I don't know how it happened but... What the hell were you doing in the desert, bro?\"\n"
                                          "James: \"It's a long story.\"\n"
                                          "Narrator: \"James then checked his phone. He had received a message from The Demon.\n"
                                          "His crash had justified Phantom's crew killing Kelly, finally ending the war between them.\n"
                                          "And as for James, he was invited to be one of Phantom's own, the right hand of his son.\"\n"
                                          "The Demon: \"(over text message) What do you say, man? You want something unforgettable? An adventure of a lifetime?\"\n"
                                          "James: \"(over text) You know, H? I really had a blast today, man.\n"
                                          "I hope I have you and your brother as my friends. But I realized something, man.\n"
                                          "I love my crappy job, and I love my boring old life. I'm sorry. Hope me and my buddy can get invited to another one of them car shows.\n"
                                          "One of yours, this time. And you better make it enjoyable, otherwise I might have to come and kick your ass in a race.\"\n"
                                          "The Demon: \"You can try, big man. You can try.\n"
                                          "(they both smile at their phones with respect towards each other, and then put it down and appreciate life more now, with its major changes)\"\n"
                                          "GAME OVER."<<endl;
                                    Progress<<"Andrew: \"Bro, they just called me from the hospital.. Don't try to talk, just rest.\n"
                                              "You were in a crash. I don't know how it happened but... What the hell were you doing in the desert, bro?\"\n"
                                              "James: \"It's a long story.\"\n"
                                              "Narrator: \"James then checked his phone. He had received a message from The Demon.\n"
                                              "His crash had justified Phantom's crew killing Kelly, finally ending the war between them.\n"
                                              "And as for James, he was invited to be one of Phantom's own, the right hand of his son.\"\n"
                                              "The Demon: \"(over text message) What do you say, man? You want something unforgettable? An adventure of a lifetime?\"\n"
                                              "James: \"(over text) You know, H? I really had a blast today, man.\n"
                                              "I hope I have you and your brother as my friends. But I realized something, man.\n"
                                              "I love my crappy job, and I love my boring old life. I'm sorry. Hope me and my buddy can get invited to another one of them car shows.\n"
                                              "One of yours, this time. And you better make it enjoyable, otherwise I might have to come and kick your ass in a race.\"\n"
                                              "The Demon: \"You can try, big man. You can try.\n"
                                              "(they both smile at their phones with respect towards each other, and then put it down and appreciate life more now, with its major changes)\"\n"
                                              "GAME OVER."<<endl;
                                    return 0;
                                case 4:
                                    cout<<"\"Oh.. I appreciate you guys' offer, but... I can't drive manual. Can't I get that MK3 or something?\""<<endl;
                                    Progress<<"\"Oh.. I appreciate you guys' offer, but... I can't drive manual. Can't I get that MK3 or something?\""<<endl;
                                    //Key Choice 2.2
                                    cout<<"Beverly: \"God, Hector! Where the hell did you find this guy?\""<<endl;
                                    Progress<<"Beverly: \"God, Hector! Where the hell did you find this guy?\""<<endl;
                                    cout<<"The Demon: \"Nowhere. (to you) You ain't tell me you can't drive manual! \n"
                                          "My dad'll never let you in our crew. Sorry, bruh.\""<<endl;
                                    Progress<<"The Demon: \"Nowhere. (to you) You ain't tell me you can't drive manual! \n"
                                              "My dad'll never let you in our crew. Sorry, bruh.\""<<endl;
                                    cout<<"James: "<<endl;
                                    Progress<<"James: "<<endl;
                                    cout<<"1. \"Wait, what? Can't you teach me?\"\n"
                                          "2. \"Come on, man, I need protection from this guy. I'm sure you can convince him.\""<<endl;
                                    do {
                                        cin >> input_kc22;
                                        switch (input_kc22) {
                                            case 1:
                                                cout << "\"Wait, what? Can't you teach me?\"" << endl;
                                                Progress << "\"Wait, what? Can't you teach me?\"" << endl;
                                                break;
                                            case 2:
                                                cout << "\"Come on, man, I need protection from this guy. I'm sure you can convince him.\"" << endl;
                                                Progress << "\"Come on, man, I need protection from this guy. I'm sure you can convince him.\"" << endl;
                                                break;
                                            default:
                                                cout << "Invalid Input" << endl;
                                        }
                                    }
                                    while (input_kc22 != 1 && input_kc22 != 2);
                                    cout<<"The Demon: \"Bro, you think I got that kinda time? You on your own.\"\n"
                                          "\n"
                                          "-----3 Days Later-----\n"
                                          "\n"
                                          "Gomez: \"There he go! Downshift and put it to the metal. Stealing from me... He's gonna learn today.\"\n"
                                          "\n"
                                          "*Gunshots*\n"
                                          "\n"
                                          "Narrator: \"And that day, James stole a car, didn't pay for it, tried to skip town and died.\n"
                                          "I guess the lesson to be taken from this is - learn to drive manual. Or, at least, well... don't break the law.\"\n"
                                          "\n"
                                          "GAME OVER"<<endl;
                                    Progress<<"The Demon: \"Bro, you think I got that kinda time? You on your own.\"\n"
                                              "\n"
                                              "-----3 Days Later-----\n"
                                              "\n"
                                              "Gomez: \"There he go! Downshift and put it to the metal. Stealing from me... He's gonna learn today.\"\n"
                                              "\n"
                                              "*Gunshots*\n"
                                              "\n"
                                              "Narrator: \"And that day, James stole a car, didn't pay for it, tried to skip town and died.\n"
                                              "I guess the lesson to be taken from this is - learn to drive manual. Or, at least, well... don't break the law.\"\n"
                                              "\n"
                                              "GAME OVER"<<endl;
                                    return 0;
                                default:
                                    cout << "Invalid Input" << endl;
                            }
                        } while (input_kc2 != 1 && input_kc2 != 2 && input_kc2 != 3 && input_kc2 != 4);
                        break;
                    default:
                        cout<<"Invalid Input"<<endl;
                }
            }
            while (input_beg != 1 && input_beg != 2);
            break;
        }

        case 2:
        {
            //Read Progress File
            cout << "Enter your player name: ";
            cin >> playerName;
            cout << endl;
            player1.setPlayerName(playerName); //Setting the player1 name.
            player1.setPlayerProgressFile(playerName); //Setting the player1 progress file name.
            ifstream Progress(player1.getPlayerProgressFile());
            //the Progress File will always be named PlayerName_Progress.txt
            if (!(Progress.is_open())) { //If the file doesn't exist, then it can't be opened.
                cout << "Your player name could not be found." << endl;
                goto a;
            }
            while (getline(Progress, temp))
                if (temp != "") {
                    hasProgress = 1; //see if player has made progress
                    cout << temp<<endl; //cout everything from the file, if file has any progress.
                }
            if (hasProgress == 0) {
                cout << "You haven't made any progress yet." << endl; //Self-explanatory tbh
                goto a;
            }
            break;
        }
        case 3:
            //Controls or How To Play
            cout<<"This is a choose your own adventure game."<<endl;
            cout<<"You're a car enthusiast named James, and you make some life-changing decisions for him."<<endl;
            cout<<"Whenever a character sends you somewhere, a map will appear. Your character is marked with an o."<<endl;
            cout<<"Throughout the game, if your character is being sent to a place, ";
            cout<<"only the place he's being sent to will appear on the map."<<endl;
            cout<<"You can input moves such as up, down, left or right on the map."<<endl;
            cout<<"There's also a puzzle mini-game throughout the game, if you make the right choices."<<endl;
            cout<<"If you solve 4 out of 5 puzzles in this mini-game, you will win the race."<<endl;
            cout<<"If you don't, you will lose it."<<endl;
            cout<<"Good luck and have fun!"<<endl;
            goto a;
            break;
        case 4:
            // Quit Game option
            b:cout<<"Are you sure? (y/n)"<<endl;
            //I just had to ask if they're sure just to be annoying lol.
            cin>>input2;
            if (input2 == 'y')
            {
                cout << "Thank you for playing. Goodbye." << endl;
                return 0;
            }
            else if (input2 == 'n')
                goto a;
            else {
                cout << "Invalid input." << endl;
                goto b;
            }
            break;
        default:
            cout<<"Invalid input."<<endl;
            goto a;
    }
    return 0;
}