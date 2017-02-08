# Configuring SSH for Mac and Unix users
This guide will teach you how to set up passwordless logins via SSH for **Mac users**. This guide is estimated to take around 15 minutes.

### Table of Contents:
0. [Navigating to the .ssh folder](#navigating-to-the-.ssh-folder)
0. [Generating a new SSH key pair](#generating-a-new-ssh-key-pair)
0. [Adding your public key to wiliki](#adding-your-public-key-to-wiliki)
0. [Testing the passwordless login](#testing-the-passwordless-login)
0. [(Bonus) SSH shortcut](#bonus-ssh-shortcut)

## Navigating to the .ssh folder
The first step is to make sure you have the necessary .ssh folder in your home directory and to navigate to it.

0. Open your terminal **(make sure you're not logged into wiliki)** and type `ls ~/.ssh`. This will list the files in your .ssh directory.
  - If you get an error saying that the directory doesn't exist, then make a directory using `mkdir ~/.ssh`.
0. Navigate into the .ssh folder using `cd ~/.ssh`. You can check that you are in the folder by typing `pwd` which will print the working directory. It should be something like `/users/your-username/.ssh`.

## Generating a new SSH key pair
Now that we're in our .ssh folder, we can generate a new SSH key pair which we will use to log in without entering our password.

0. Run the command `ssh-keygen` to start the process. Press **enter** through all the prompts until you get to a message that says: `The key's randomart image is:` followed by a box with random characters inside.
  - If you get a message saying that the files already exist, **don't overwrite them**. You can continue using the keys that are already there.
0. Now check the contents of the .ssh folder with the command `ls`. You should notice two new files, **id_rsa** and **id_rsa.pub**, which is your **private** and **public** keys respectively. **Do not share your private key with anyone** as it can be used to impersonate you.
  - If you want to learn more about public and private keys and how they are used in encryption, read [this article](http://blakesmith.me/2010/02/08/understanding-public-key-private-key-concepts.html) and/or watch [this video](https://www.youtube.com/watch?v=GSIDS_lvRv4).

## Adding your public key to wiliki
Now it's time to add your public key to wiliki. This is what will allow you to access wiliki without your password.

0. Before we can add our key to wiliki, we have to check that it has a .ssh directory. We can accomplish this with the command: `ssh your-username@wiliki.eng.hawaii.edu "ls ~/.ssh`, which will tell wiliki to print out the contents of the .ssh folder (if it exists) without leaving your current directory.
  - If you get an error that says this directory doesn't exist, then make it using: `ssh your-username@wiliki.eng.hawaii.edu "mkdir ~/.ssh && chmod 700 ~/.ssh"`. This tells wiliki to make the folder as well as set the proper permissions (don't worry about the permissions part).
0. We need to copy and transfer your public key to wiliki. While you're still in your .ssh directory, enter the following command: `scp id_rsa.pub your-username@wiliki.eng.hawaii.edu:.ssh/authorized_keys`. Enter your password and your file should start transferring.
  - **Note: this will overwrite existing authorized keys**. If you haven't done this before, you don't have any existing keys so don't worry.
0. Log into wiliki (passwordless logins won't work yet) and go to your .ssh directory using `cd ~/.ssh`.
0. List the files in the directory using `ls`. There should be a file called **authorized_keys**, which is the file that we transferred (we renamed it).
0. We need to change the permissions of the file for it to take effect. Enter `chmod 600 authorized_keys`.
0. Verify that the permissions have been changed by seeing the permissions. Type in `ls -l authorized_keys`, and make sure the output starts with `-rw-------.`.

## Testing the passwordless login
Great! We've made it this far. Now it's time to test the passwordless logins.

0. Exit out of wiliki using `exit`.
0. Attempt to log into wiliki and it *should* allow you to log in without a password prompt.

## (Bonus) SSH shortcut
This section is optional and will teach you how to reduce `ssh your-username@wiliki.eng.hawaii.edu` to just `ssh wiliki`.

0. Open up a terminal **(make sure you're not logged into wiliki)** and go into your .ssh folder using `cd ~/.ssh`.
0. Create a new file called "config" and copy into it the contents of [this file](config). Replace "your-username" with your wiliki username.
0. Change the permissions of the file using `chmod 600 config`. Verify the permissions using `ls -l config` and make sure the output starts with `-rw-------.`.
0. Test it out by entering `ssh wiliki`.
