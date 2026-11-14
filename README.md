# 🚀 Welcome to Project & Portfolio!


<br>

# Project & Portfolio 1

### Ernest Ogletree

Hello my name is Ernest Ogletree. I am a student from Boston, Mass. The purpose of this repository is to practice development using version control. This work will help me begin to build a portfolio of skills and accomplishment that can be shared in the future.

<br>

### Week 1

**Overview:**

This week I worked on getting the foundation of Coin Rush set up. I created the Game, Player, and Level classes, built the main menu, and got the level displaying in the console.

**Challenges:**

One challenge I ran into was figuring out how the different classes come together. I spent a fair amount of time understanding how Player handles movement and how Game controls when things happen.

**Accomplishments:**

I got the basic foundation of the game working, including the menu, instructions, and level display. I also added Player methods for movement, acceleration, deceleration, and position. I made 14 commits and successfully merged my dev branch into main.

**Next Steps:**

This coming week, I'd like to get the player actually moving through the level and collecting coins. If possible, I'd also like to start working on collision detection, falls, and obstacles.
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

My final stand up...
