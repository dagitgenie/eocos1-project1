> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**What does your program currently do?**

Coin Rush is a C++ console game where the player runs through a level collecting coins, jumping over obstacles, and trying to reach the finish before time runs out. The player has three lives, and hitting an obstacle causes them to lose a life and respawn. The game also tracks coins, displays a countdown timer, and gives the player options to replay or return to the menu after finishing.

---

## 🔍 Current Progress Check

**What is working right now?**

Most of the gameplay systems are working. I added continuous running, jumping, obstacle and wall collision, and a longer level. The player can now move without having to keep entering commands, and jumping allows them to get past certain obstacles.

I also added a lives system, respawning, a 60-second countdown, and a results screen. I've tested the game through different situations, including collecting coins, losing lives, reaching the finish, and restarting.

**What is NOT working or incomplete?**

The main features I've worked on are functioning, but I still want to do more testing and cleanup. I need to make sure the different systems continue working correctly together, especially when the player is moving at higher speeds. There are also some areas I could improve with the display and overall gameplay.

**What feels confusing or messy in your code?**

One thing that took some getting used to was continuous movement. I originally had everything responding to keyboard input, but changing that meant understanding how the game could keep running without waiting for a command.

I also had to pay closer attention to the order methods were called. Something as simple as checking a position before movement instead of afterward could affect collision detection.

---

## 🚀 Feature Planning and Development

### Feature 1

**Name:** Continuous Running and Jumping

**What does this feature do?**

The player can press W to start moving and continue running without repeatedly pressing it. W and S control speed, while Spacebar allows the player to jump. I also expanded the level to give the player enough room to jump.

**Why is this feature important?**

My original movement worked, but it didn't feel much like a running game because I had to keep entering commands. Continuous movement made the gameplay feel closer to what I originally wanted Coin Rush to be.

---

### Feature 2

**Name:** Obstacle Collision, Lives, and Respawning

**What does this feature do?**

The game checks whether the player runs into obstacles or walls. Hitting an X obstacle removes one life, and the player respawns at the beginning if they still have lives remaining. Walls stop the player's movement rather than allowing them to run straight through.

**Why is this feature important?**

Before adding collisions, the obstacles were just characters on the map. Now the player actually has to pay attention to what's ahead. Adding lives also gives the player more than one chance without making every mistake end the entire game.

---

### Feature 3

**Name:** Countdown Timer and End-of-Game Results

**What does this feature do?**

The game has a 60-second timer that starts when the player first presses W. The timer continues even if the player loses a life. I also added a results screen for finishing the level, running out of lives, or running out of time.

**Why is this feature important?**

I wanted the player to have a reason to keep moving instead of taking as much time as they wanted. The results screen also makes the game feel more complete by showing what happened and allowing the player to choose what to do afterward.

---

## 🧩 System Design Updates

**Did you need to create any new classes?**

I continued using the Game, Player, and Level classes. I didn't need another class for the features I added because I was able to expand the responsibilities of the ones I already had.

**How did you modify your existing classes?**

The Game class now handles the continuous game loop, keyboard input, countdown timer, and results screen. I also refactored it by separating movement input and the game display into their own methods.

The Player class manages speed, position, jumping, lives, and respawning. The Level class stores the map, handles coin collection, and checks for obstacles and walls.

**What data structures did you use?**

I changed the Level class from using a single string to a `std::vector<std::string>`. Each string represents a row of the level. This allowed me to expand the map vertically and give the player room to jump.

I also used a pointer so the Level class could communicate with the existing Player object when collecting coins. This helped me get more practice with memory addresses and accessing methods through pointers.

---

## 🔄 Program Flow

**Describe how a user interacts with your program:**

1. The program opens the main menu, where the player can start a game, read instructions, or exit.
2. Starting a game loads the level with three lives, zero coins, and a 60-second timer.
3. Pressing W starts the player moving and begins the countdown.
4. The game continuously updates movement, jumping, coin collection, collisions, and the display.
5. Hitting an obstacle costs one life. If lives remain, the player returns to the start.
6. Reaching the finish, losing all lives, or running out of time ends the run.
7. The results screen shows the outcome and allows the player to play again, return to the menu, or exit.


---

## 🎯 Usability Improvements

**Clearer prompts:**

I added the controls to the gameplay display so the player can see how to speed up, slow down, jump, or quit without having to remember everything.

**Better error handling:**

I improved the menu validation using `getline`, `stoi`, and `try/catch`. I also worked on preventing the player from going beyond the level boundaries or passing directly through walls.

**Improved menu and navigation:**

The player can now restart after completing a game instead of having to close and reopen the program. I also adjusted the console display because clearing the entire screen during continuous movement caused flickering.

---

## ⚠️ Challenges and Refactoring

**What were the hardest parts of development?**

Getting continuous movement working without causing the console to flicker was one challenge. I had to change the way keyboard input worked and then adjust how the game updated the screen.

Collision detection also took some work because the player can move several columns during one update. I needed to check the space between the player's previous and new positions instead of checking only where they ended up.

**What refactoring did you complete?**

I separated player movement input and the game display from the main StartGame method. This made the game loop easier to follow because it wasn't handling every detail in one place.

I also moved the coin collection method into the correct file, changed how the level stores its map, and updated how the classes communicate.

**How did you deal with problems?**

I worked through them in smaller steps, corrected errors as they appeared, and tested before moving on. I used Visual Studio to build the project regularly so I could catch problems without having to figure out several changes at once.

---

## 📈 Level Up Goal

**What skill did you focus on improving this week?**

I focused on understanding how classes communicate and how to organize my code without changing the behavior of features that already work.

**What did you learn?**

I feel more comfortable with references and pointers now that I've used them between my classes. I also understand a little more about why the order of operations matters.

Refactoring was another improvement. Instead of continuing to put more code into StartGame, I started separating responsibilities into methods that are easier to understand.

I still need practice with these concepts, but I can follow what's happening better than I could before.

---

## 🗓️ Task Breakdown — GitHub Issues

### Milestone 3 Development

- Refactor player movement and game display.
- Add vector-based level storage.
- Improve communication between classes using pointers.
- Expand the level to support jumping.
- Add continuous running and advanced movement.
- Add jumping.
- Add obstacle collision detection.
- Add wall collision detection.
- Add player lives and respawning.
- Add the countdown timer.
- Add the end-of-game results screen.

### Week 4 — Next Steps

- Continue testing collisions and jumping at different speeds.
- Review and clean up the code where needed.
- Improve any remaining display or navigation issues.
- Test the complete game from start to finish.
- Prepare the final project documentation and submission.

---

## 🔥 Final Check

- Added multiple working gameplay features.
- Improved class structure and refactored existing code.
- Used vectors and pointers in the program.
- Tested movement, jumping, collisions, lives, and the timer.
- Tested the end-of-game choices.
- Complete final documentation and repository review.


---

## Final Thought

Coin Rush has changed quite a bit from where i started. At first, I was mainly trying to get the player moving across the screen and collecting coins. Now there are several systems working together, and I have a better understanding of how one change can affect another part of the program. My next goal is making sure everything stays reliable as I finish the project.