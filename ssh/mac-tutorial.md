# Configuring SSH for Mac Users
This guide will teach you how to set up passwordless logins via SSH for **Mac users**. This guide is estimated to take around 15 minutes.

### Table of Contents:
0. [Navigating to the .ssh folder](#navigating-to-the-.ssh-folder)
0. [Generating a new SSH key pair](#generating-a-new-ssh-key-pair)
0. [Adding your public key to wiliki](#adding-your-public-key-to-wiliki)
0. [Testing the passwordless login](#testing-the-passwordless-login)

## Navigating to the .ssh folder
The first step is to make sure you have the necessary .ssh folder in your home directory and to navigate to it.

0. Open your terminal **(make sure you're not logged into wiliki)** and type `ls ~/.ssh`. This will list the files in your .ssh directory.
  * If you get an error saying that the directory doesn't exist, then make a directory using `mkdir ~/.ssh`.
0. Navigate into the .ssh folder using `cd ~/.ssh`. You can check that you are in the folder by typing `pwd` which will print the working directory. It should be something like `/users/your-username/.ssh`.

## Generating a new SSH key pair
Now that we're in our .ssh folder, we can generate a new SSH key pair which we will use to log in without entering our password.

0. Type in `ssh-keygen` to start the process. Press **enter** through all the prompts until you get to a message saying `The key's randomart image is:` followed by a box with random characters inside.
0. Now check the contents of the .ssh folder with the command `ls`. You should notice two new files, **id_rsa** and **id_rsa.pub**, which is your **private** and **public** key respectively. You can think of your public key as a mailbox with a lock and your private key as the key to that lock. That being said, **keep your private key private** (hence the name).
  * If you want a more in-depth explanation, you can read [this article](http://blakesmith.me/2010/02/08/understanding-public-key-private-key-concepts.html).

## Adding your public key to wiliki
Now it's time to add your public key to wiliki. This is what will allow you to access wiliki without your password.

0. We need to copy and transfer your public key to wiliki. While you're still in your .ssh directory, use the command: `scp id_rsa.pub your-username@wiliki.eng.hawaii.edu:.ssh/authorized_keys`. Enter your password and your file should start transferring.
  * **Note: this will overwrite existing authorized keys** (if you haven't done this before, you don't have any existing keys so don't worry).
0. Log into wiliki (passwordless logins won't work yet) and go to your .ssh directory using `cd ~/.ssh`.
0. List the files in the directory using `ls`. There should be a file called **authorized_keys**, which is the file that we transferred (we renamed it).
0. We need to change the permissions of the file for it to take effect. To change the permissions, enter `chmod 600 authorized_keys`.
0. Verify that the permissions have been changed by seeing the permissions. Type in `ls -l authorized_keys` and on the very left, it should be **-rw-------.**.

## Testing the passwordless login
Great! We've made it this far. Now it's time to test the passwordless logins.

0. Exit out of wiliki using `exit`.
0. Attempt to log into wiliki and it **should** allow you to log in without a password prompt.