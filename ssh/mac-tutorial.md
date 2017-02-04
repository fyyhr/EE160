# Configuring SSH for Mac Users
This guide will teach you how to set up passwordless logins via SSH for **Mac users**.

### Table of Contents:
0. [Preparing the environment](#preparing-the-environment)
0. [Generating a new SSH key pair](#generating-a-new-ssh-key-pair)

## Preparing the environment
The first step is to make sure you have the necessary **.ssh** folder in your home directory.
0. Open your terminal **(make sure you're not logged into wiliki)** and type `cd`. This will bring you to your home directory.
0. Type in the command `ls .ssh`. This will list out the files in the .ssh directory. If you get an error saying "cannot access .ssh: no such file or directory" then make a directory using `mkdir .ssh`.
0. Navigate into the .ssh folder using `cd .ssh`. You can check that you are in the folder by typing `pwd` which **p**rints the **w**orking **d**irectory.

## Generating a new SSH key pair
The first step is to generate a new SSH key pair. What is this you ask? Don't worry, I'll explain later. For now, just follow these steps