# 🚀 Welcome to Project & Portfolio!


<br>

# Project & Portfolio 1

### Ernest Ogletree

Hello my name is Ernest Ogletree. I am a student from Boston, Mass. The purpose of this repository is to practice development using version control. This work will help me begin to build a portfolio of skills and accomplishment that can be shared in the future.

<br>

## 📢 &nbsp; Weekly Stand Up

Each week I will summarize my milestone activity and progress by writing a stand-up. A stand-up is meant to be a succinct update on how things are going. Use these prompts as a guide on what to write about:

⚙️ Overview - What I worked on this past week
<br>
🌵 Challenges - What problems did I have & how I'm addressing them
<br>
🏆 Accomplishments - What is something I "leveled up" on this week
<br>
🔮 Next Steps - What I plan to prioritize and do next

<br>

### Week 1

**⚙️ Overview**

This week I worked on setting up Coin Rush and getting the foundation of the game started. I created my GitHub Issues and organized them on my Project board. I also created the Game class and built a working menu with options to start the game, view instructions, and exit. I started working on the Player class and added methods for speeding up and slowing down.

**🌵 Challenges**

One problem I ran into was handling invalid input in the menu. When I entered a letter instead of a number, the program got stuck in an endless loop. I learned how to clear the input error and let the player try again. I'm also working on understanding how different classes and methods connect.

**🏆 Accomplishments**

I feel like I'm getting better at using what I've learned in C++ instead of just following examples. I created separate methods for the menu and instructions, added input validation, and started writing the player's speed logic. I've also gotten more comfortable organizing my work with GitHub Issues and commits.

**🔮 Next Steps**

Next, I want to finish the Player class, connect speed to actual movement, and create the Level class. After that, I'll work on displaying the course and eventually connecting it to the game menu.

### Week 2

Overview

This pull request includes my Week 2 progress on Coin Rush. I focused on improving player movement, adding coin collection, and making the game easier to use.

Changes Made

  •	Added player acceleration and deceleration.
	•	Added level boundaries and finish detection.
	•	Implemented coin collection and removal from the level.
	•	Added a coin counter that updates during gameplay.
	•	Improved gameplay feedback and player controls.
	•	Updated project documentation.

Challenges

One of the biggest challenges was getting the Game, Player, and Level classes to communicate correctly. I worked through passing player positions between methods, tracking collected coins, and preventing coins from being counted more than once.

Testing
	•	Built and ran the game successfully in Visual Studio.
	•	Tested player movement and level boundaries.
	•	Verified that the coin counter updates when coins are collected.
	•	Tested the game on my MSI laptop.

Next Steps

For Week 3, I plan to work on obstacles, collision detection, the countdown timer, and improving movement.
Summary
These changes expand the original Coin Rush prototype and provide a foundation for the remaining gameplay features.


### Week 3

**Week 3 End-of-Week Stand-Up – Coin Rush**

**Overview**

This week I mainly focused on improving my code instead of adding new features. I cleaned up my Game class, changed how my Level class stores its map, and worked on getting my classes to communicate better.

**Improvements**

I separated player movement and the game display into their own methods so my StartGame method doesn't have to handle everything. Beyond that, I updated my Level class to use a vector instead of one string. I also made use of a pointer so the Level class can communicate directly with my Player class when the player collects coins.

**Challenges**

One challenge was making all my adjustments without breaking the game. Mainly, I wanted to make sure things didn't stop functioning the way I planned. The refactoring worked out, but I had to find all the places that needed changing. Since there wasn't too much code, it wasn't as challenging as it could have been.

**Feedback**

Several things were pointed out that needed to be corrected, including meaningful vector and pointer usage, better input validation, and moving a method into the correct file. I worked on these areas this week and got things fine-tuned.

**Accomplishments**

I feel like I can follow along better with how classes communicate using references and pointers to existing objects. Organizing my code was a bit confusing at first, but I feel more comfortable when I break things down instead of having everything in one place.

**Next Steps**

My Week 4 plans are to focus on adding obstacle and wall collision detection. I also want to continue improving movement. The goal is to get Coin Rush to feel more like an actual game while keeping my code organized.

### Week 4

**Overview**

This week I focused on getting my Coin Rush game ready for the final milestone. Most of my time went into testing, fixing problems, and improving parts of the game that were already working.

**Project Wrap-Up**

I finished adding the high-score system with saving, loading, and resetting scores. I also improved the menu navigation, fixed collision issues, and cleaned up how my classes communicate. I spent time making sure the changes didn't break other parts of the game.

**Challenges**

One issue I ran into was the player sometimes appearing past an obstacle after losing their final life. The collision was being detected, but the position wasn't updating the way I expected. Going back through the movement logic helped me figure out what was happening and correct it.

**Biggest Takeaway*

The biggest thing I've learned is that understanding how everything connects is just as important as knowing how to write individual lines of code. I've gotten better at breaking problems down, testing my changes, and using GitHub to keep track of my progress. I still have a lot to learn, but I'm more comfortable working through problems than I was at the start.

**Future Development**

If I continue working on Coin Rush, I'd like to add more levels, different obstacles, and possibly turn it into a graphical game. I think it would be interesting to take what I've built in the console and eventually create something with actual character movement and visuals.

