> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**
→  Coin Rush
  
**What does your program currently do? (1–3 sentences)**   
→ Coin Rush is a C++ console game where the player moves through a level collecting coins while trying to reach the finish. The player can speed up, slow down, and see their current position and total coins collected. The game also includes a main menu, input validation, and level boundaries.

---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→ The main menu, level display, and player movement are working. The player can speed up and slow down, collect coins, and see the coin counter update during gameplay. The game also prevents the player from moving beyond the level's endpoint.   
  
**What is NOT working or incomplete?**   
→ The countdown timer, jumping, and hazard collision systems still need to be implemented. The movement system is also basic right now because it depends on keyboard commands instead of continuous real-time movement.   
  
**What feels confusing or messy in your code?**   
→ Connecting the different classes has been one of the harder parts. I had to work through how the Game, Player, and Level classes communicate, especially when passing positions and updating coin totals. Understanding where variables and methods belong has also taken some practice.


---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**   
→  Player Movement and Level Boundaries
  
**What does this feature do?**   
→  Movement is one of the main parts of Coin Rush. Without it, the player wouldn't be able to interact with the level or collect coins. The boundary check also prevents the player from moving outside the playable area.
  
**Why is this feature important?**   
→   
  
---
### Feature 2  
**Name:**   
→ Coin Collection System
  
**What does this feature do?**   
→ Detects coins along the player's path, removes collected coins from the level, and updates the player's coin total.   
  
**Why is this feature important?**   
→ Collecting coins is one of the main goals of the game. It gives the player something to work toward while moving through the level and creates the foundation for a scoring system.   
  
---
  
### Feature 3 (optional)  
**Name:**   
→ Coin Counter and Gameplay Feedback
  
**What does this feature do?**   
→ Displays the player's collected coins on the screen and updates the number during gameplay.  
  
**Why is this feature important?**   
→ It gives players feedback so they can see their progress without having to guess how many coins they've collected.  
  
---
## 🧩 System Design Updates  
  
**Will you need to create any new classes? If so, which ones?**   
→ I don't need any additional classes for the current prototype. The Game, Player, and Level classes already handle the main parts of the program. I can add more classes later if the game becomes more complex.   
  
**Will you modify any existing classes? How?**   
→ Yes. I expanded the Player class to handle movement, speed, and collected coins. I updated the Level class to track and remove coins from the map. The Game class connects everything by handling user input, calling the movement methods, checking for coins, and displaying the results.   
  
**What data structures will you use (vectors, 2D vectors, etc.)?**   
→ I'm currently using a std::string to represent the level and individual variables to store player information such as position, speed, and coins collected. I might switch to a 2D vector later if I need more complicated level layouts.   
  
---
## 🔄 Program Flow  
  
**Describe how a user interacts with your program:**  
  
1. Program starts → The main menu appears with options to start the game, view instructions, or exit.  
2. User chooses → The player starts a game and uses W to speed up, S to slow down, and Q to quit.   
3. Program responds → The game updates the player's position, checks for coins, updates the coin counter, and redraws the level.   
4. Loop/next step → The game continues accepting commands until the player quits or reaches the finish.   
  
---
## 🎯 Usability Improvements  
  
How will you make your program easier to use this week?  
  
- Clearer prompts:   
→  Display the available controls so players understand how to move and quit the game. The coin counter also gives players immediate feedback about their progress.  
  
- Better error handling:   
→  Keep input validation in the menu and prevent the player's position from going beyond the     level boundaries.   
  
- Improved menu/navigation:   
→ Keep the main menu simple and make the options easy to understand. The gameplay display should also remain readable as the player's position changes.   
  
---
## ⚠️ Potential Challenges  
  
**What do you think will be the hardest part this week?**   
→ Getting the classes to work together correctly. For example, the Level class needs to detect coins, but the Player class needs to remember how many were collected. I also need to make sure the player doesn't skip coins when moving faster.   
  
**What is your plan if you get stuck?**   
→ Break the problem into smaller steps, trace what the variables are doing, and test one method at a time. I'll use Visual Studio's debugger like i did previously and build tools to find errors before moving on to another feature.   
  
---
  
## 📈 Level Up Goal  
  
**What skill are you focusing on improving this week?**   
→ Understanding how C++ classes communicate and how data moves between objects.   
  
**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→ Practice writing and calling methods, using parameters and return values, and working with private member variables. I'll also trace how values change while the game runs instead of just memorizing syntax. 
  
---
## 🗓️ Task Breakdown (GitHub Issues Planning)  
  
List the tasks you plan to create as GitHub Issues:  
  
- [ ]  Add player movement and speed controls. 
- [ ]  Add level boundaries and finish detection. 
- [ ]  Add coin collection and removal.
- [ ]  Add a coin counter to the gameplay display.
- [ ]  Improve movement and add obstacle collision.
- [ ]  Add the countdown timer.
- [ ]  Improve movement and add obstacle collision.
---
  
## 🔥 Final Check  
  
Before you start coding, ask yourself:  
  
- [x] Do I know what I’m building this week?   
- [x] Do I know where to start?   
- [x] Did I break my work into small tasks?   
  
If yes → start coding 🚀   
If no → refine your plan first   
  
---
## 😈 Final Thought  
  
> Plan it now… or debug it later.