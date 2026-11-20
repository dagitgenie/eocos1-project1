## 📌 Project Overview

**What does your program currently do?**

Coin Rush is a C++ console game where the player runs through a course collecting coins, jumping over obstacles, and trying to reach the finish before the 60-second timer expires. The game includes speed controls, collision detection, three lives, respawning, and a results screen.

I also added a high-score system that saves the player's best coin score to a file. The game loads that score when reopened, and players can reset it through the main menu.

---

## 🔍 Current Progress Check

**What is working right now?**

All the main gameplay features are working. This week I focused on correcting problems that appeared during testing and improving how the game handles different situations.

I fixed coin collection while jumping, corrected the player's position when losing their final life, and tested jumping and collisions at higher speeds. I also improved the menu display and added the ability to save, load, and reset high scores.

**What is NOT working or incomplete?**

I haven't identified another major gameplay problem in the tests I've completed. I still need to finish the final review, make sure my documentation and screenshots are updated, and complete the GitHub pull request and submission requirements.

**What feels confusing or messy in your code?**

I'm getting more comfortable understanding how the different parts of my program connect, but deciding where certain methods belong still takes some thought.

The high-score feature gave me more practice with that because I had to figure out where to store the score, when to load it, and when to save it. It also showed me how important it is to keep the program's information consistent with what is stored in a file.

---

## 🚀 Feature Planning and Development

### Feature 1

**Name:** High Score Saving, Loading, and Resetting

**What does this feature do?**

The game keeps track of the highest number of coins collected during a run. I used C++ file input and output to save the record in `highscore.txt` and load it when the program starts.

I also added a menu option that allows the player to reset the high score after confirming their choice.

**Why is this feature important?**

Before this feature, the player's coin total disappeared after closing the program. Now the game remembers their best performance between sessions, giving players something to try to beat.

It also gave me an opportunity to practice reading and writing files in an actual project instead of only using File I/O in a small exercise.

---

### Feature 2

**Name:** Collision and Coin Collection Improvements

**What does this feature do?**

I corrected an issue my instructor pointed out where the player could collect coins while jumping above them. Now coin collection checks the player's vertical position before collecting coins on the ground.

I also fixed a problem where the player could appear beyond an obstacle after losing their final life. The game now stops the player at the previous safe position when Game Over occurs.

**Why is this feature important?**

These problems didn't always prevent the program from running, but they affected how the gameplay behaved. Fixing them made the collision and coin collection systems more consistent.

It also helped me understand the difference between detecting a collision and making sure the player's position is correct afterward.

---

### Feature 3

**Name:** Console Display and Navigation Improvements

**What does this feature do?**

I improved how the menu and instructions appear in the console. I added spacing between sections, corrected messages, removed a duplicate welcome message, and made sure the old gameplay display disappears when returning to the menu.

I also extended the finish line across the playable rows so the visual layout matches the game's finish detection.

**Why is this feature important?**

I wanted Coin Rush to be easier to understand and navigate. These were smaller changes compared to adding gameplay features, but they made the program feel more complete.

---

## 🧩 System Design Updates

**Did you need to create any new classes?**

No. I continued using the Game, Player, and Level classes. I was able to add the high-score functionality and improve the existing systems without creating additional classes.

**How did you modify your existing classes?**

I expanded the Game class to handle loading, saving, and resetting high scores. It also manages the menu option for resetting the record.

I updated the Level class's coin collection method to accept a Player reference instead of a pointer. Since the method always needs an existing Player object, using a reference made more sense and removed the need to check for a null pointer.

I also added comments to the Player class to explain how its negative deceleration value reduces speed.

**What data structures or programming techniques did you use?**

The level continues using `std::vector<std::string>` to store the map. For the high-score system, I used an integer to store the record and `ifstream` and `ofstream` to read and write the saved value.

I also practiced passing objects by reference. Changing the coin collection method from `Player*` to `Player&` helped me better understand when a pointer or reference is appropriate.

---

## 🔄 Program Flow

**Describe how a user interacts with your program:**

1. The program starts and loads any previously saved high score.
2. The main menu allows the player to start a game, read instructions, exit, or reset the high score.
3. Starting a game creates a new player with three lives and zero coins collected.
4. Pressing W begins movement and starts the countdown timer.
5. During gameplay, the player can control speed, jump over obstacles, and collect coins while on the ground.
6. Hitting obstacles removes lives, and the player respawns if any lives remain.
7. Reaching the finish, running out of lives, or running out of time ends the run.
8. If the player collected more coins than the previous high score, the game saves the new record.
9. The results screen lets the player replay, return to the menu, or exit.

---

## 🎯 Usability Improvements

**Clearer prompts:**

I updated the instructions to better explain the controls and separated the menu sections so the information doesn't appear stacked together. I also added a confirmation prompt before resetting the high score.

**Better error handling:**

I corrected invalid-input messages and updated the main menu validation to reflect the new fourth option. The high-score loading method also leaves the starting score at zero when it cannot read a valid nonnegative score.

**Improved menu and navigation:**

I fixed an issue where the previous gameplay screen remained visible after quitting back to the menu. I also removed the duplicate welcome message and improved the spacing around menu selections and instructions.

---

## ⚠️ Challenges and Refactoring

**What were the hardest parts of development?**

One challenge was correcting the player's position after hitting an obstacle on the final life. The game detected the collision, but the player could still appear beyond the obstacle because movement had already updated their position.

Another challenge was understanding how saving and loading should work together. I needed the high score to update during gameplay, remain saved after closing the game, and reset correctly when requested.

**What refactoring did you complete?**

I changed the coin collection method to use a Player reference instead of a pointer. This made the method's requirement clearer because it always works with an existing Player object.

I also kept the file-handling responsibilities separated into methods for loading, saving, and resetting the high score. This kept the new feature from being placed entirely inside the main game loop.

**How did you deal with problems?**

I worked through problems one at a time and tested each change before moving on. For example, after fixing the coin collection issue, I tested collecting coins on the ground and jumping over them.

I also tested the high-score system by closing and reopening Coin Rush to make sure the saved information was still there.

---

## 📈 Level Up Goal

**What skill did you focus on improving this week?**

I focused on debugging, understanding how my classes communicate, and using File I/O to store information between program sessions.

**What did you learn?**

I learned that a program can compile and run while still having gameplay problems that need attention. Testing different situations helped me find issues that weren't obvious during normal gameplay.

Working with files also gave me a better understanding of how information can be stored outside the program. I learned that changing a variable isn't enough when that information also needs to be saved for the next time the application runs.

I still want to improve at writing methods independently, but I'm becoming more comfortable breaking a problem down and figuring out what needs to happen.

---

## 🗓️ Task Breakdown — GitHub Issues

### Milestone 4 Development

- Fix coin collection while jumping.
- Correct the player's position on Game Over
- Test jumping and collisions at higher speeds.
- Improve the finish line display.
- Correct menu navigation and console spacing.
- Update instructions and input messages.
- Implement high-score saving and loading.
- Add a high-score reset option.
- Refactor coin collection to use a Player reference.
- Improve code readability with clarifying comments.

### Final Submission Tasks

- Complete final application testing.
- Verify that GitHub Issues and Project board statuses are updated.
- Save final compilation and gameplay screenshots.
- Finish Milestone 4 documentation.
- Add the Final Project Stand-Up to the README.
- Create and merge the final pull request from dev into main.
- Verify the repository is public and complete the final submission

---

## 🔥 Final Check

- Implemented and tested the main gameplay features.
- Addressed the instructor's coin collection and collision feedback.
- Added File I/O for saving and loading high scores.
- Improved menu navigation and usability.
- Refactored class communication using a reference.
- Tested high-score persistence and reset functionality.
- Complete the final documentation and repository review.
- Verify the final build, screenshots, and submission requirements.

---

## Final Thought

Looking back at Coin Rush, I've learned a lot more than I expected from building a console game. I started with a simple idea where the player could move and collect coins, but over the four weeks I added several systems and learned how they need to work together. Week 4 showed me that finishing a project isn't only about adding features. It's also about going back, finding problems, improving the code, and making sure everything works the way it's supposed to. I'm more comfortable troubleshooting my program now, and I want to keep improving those skills as I move on to larger projects.