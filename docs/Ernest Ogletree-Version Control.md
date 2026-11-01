
# Version Control & Markdown Documentation

## COS1

- **Ernest Ogletree**
- **10/29/26**

This document covers terminal commands, version control, Git, GitHub, and how these tools are used when working on a project.

## Topic: Terminal

### 1. Essential Terminal Commands

I'm using Windows PowerShell, so some commands are different from the ones I use on Mac or Linux.

- `cls`: Clears the terminal screen.
- `pwd`: Shows what folder I'm currently working in.
- `ls`: Lists the files and folders in my current location.
- `ls -Force`: Shows files and folders, including hidden ones.
- `Get-ChildItem -Force | Select-Object Name, Length`: Shows files and folders with their names and file sizes.
- `cd foldername`: Moves into a folder.
- `cd C:\`: Takes me to the root of my C: drive.
- `cd ~`: Takes me to my home folder.
- `cd ..`: Moves back one folder.
- `cd ../..`: Moves back two folders.
- `cd ~/Desktop`: Takes me to my Desktop if it's in my home folder.

### 2. Folder Drop

When I type `cd` and a space, I can enter the path of the folder I want to open.  After pressing Enter, the terminal switches to that folder. This is useful because I don't have to type out a long folder location.

## Topic: Version Control & Git


### 1. Three Types of Version Control

**Local Version Control**

This keeps track of file changes on one computer. It's useful for going back to an older version, but if something happens to that computer, the files and history could be lost.

**Centralized Version Control**

This uses one main server to store the project and its history. Everyone works with that server to share changes. The downside is that problems with the server can affect the team.

**Distributed Version Control**

This gives developers their own copy of the repository and its history. They can make changes and commits locally, then share them with others. Git works this way, and it's what I'm using for Coin Rush.

### 2. Essential Git Commands

- `git clone <repository-url>`: Downloads a copy of a repository.
- `git config --global user.name "Ernest Ogletree"`: Sets my name for Git commits.
- `git config --global user.email "your-email@example.com"`: Sets the email address used for my commits.
- `git status`: Shows which files have changed and what's ready to commit.
- `git add .`: Adds my current changes to the staging area.
- `git commit -m "My commit message"`: Saves my staged changes with a message.
- `git log`: Shows previous commits.
- `git help`: Shows Git's help information.

### 3. Connecting to GitHub Using HTTPS

First, I open the repository on GitHub and click the green Code button. From there, I select HTTPS and copy the repository link.

I open PowerShell and go to the location where I want my project folder. Then I use `git clone` with the link I copied.

For my Coin Rush repository, that would be:

`git clone https://github.com/dagitgenie/eocos1-project1.git`

Once it's downloaded, I can use `cd eocos1-project1` to open the folder.

I use `git status` to check my changes, `git add` to stage them, and `git commit` to save them locally. Then I use `git push` to send those commits to GitHub.

If GitHub asks me to sign in, I can authenticate using Git Credential Manager. When I need to get changes from GitHub, I use `git pull`.

I've been doing most of this through Visual Studio while working on Coin Rush, but the Terminal commands let me do the same Git operations manually.

### 4. Using .gitignore and Why It's Important

**What is the purpose of this file?**

The `.gitignore` file tells Git which files and folders it should leave out when tracking new changes.

I think this is useful because not everything Visual Studio creates needs to be uploaded to GitHub. Some files are only needed on my computer.

**What is the .DS_Store file and why would you want to ignore it?**

`.DS_Store` is a file that macOS creates to remember how a folder is displayed.

It doesn't have anything to do with the actual program, so I wouldn't want it showing up in my GitHub repository.

**What other file or folder would you want to add to a .gitignore file and why?**

I would add the `.vs/` folder because Visual Studio uses it for local settings and temporary files.

I would also ignore generated build folders like `Debug/` and `Release/` when appropriate. Those files can be created again when the program is built, so there's usually no reason to commit them.

## Reference Links

### Research Summary

The Git and GitHub documentation helped me understand what the different commands do. I also found that using GitHub while working on Coin Rush has helped me understand branches, commits, and pushing changes better than only reading about them.

### Terminal Commands

[Microsoft PowerShell Get-ChildItem](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.management/get-childitem)

[Microsoft PowerShell Set-Location](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.management/set-location)

### Three Types of Version Control

[Pro Git - About Version Control](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control)

### Git Commands

[Git Reference](https://git-scm.com/docs)

[GitHub Docs - About Git](https://docs.github.com/en/get-started/using-git/about-git)

### Connecting to GitHub Using Terminal

[GitHub Docs - Cloning a Repository](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository)

### Using .gitignore and Why It's Important

[GitHub Docs - Ignoring Files](https://docs.github.com/en/get-started/git-basics/ignoring-files)

[GitHub Visual Studio .gitignore Template](https://github.com/github/gitignore/blob/main/VisualStudio.gitignore)
