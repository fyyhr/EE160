# Configuring SSH for Mac Users
This guide will teach you how to set up passwordless logins via SSH for **Mac users**.

### Table of Contents:
0. [Preparing the environment](#preparing-the-environment)
0. [Generating a new SSH key pair](#generating-a-new-ssh-key-pair)

## Preparing the environment
The first step is to make sure you have the necessary .ssh folder in your home directory.

0. Open your terminal (make sure you're not logged into wiliki) and type `cd`. This will bring you to your home directory.
0. Type in the command `ls .ssh`, which will list the files in the .ssh directory. If you get an error saying that the directory doesn't exist, then make a directory using `mkdir .ssh`.
0. Navigate into the .ssh folder using `cd .ssh`. You can check that you are in the folder by typing `pwd` which will print the working directory. It should be something like `/users/your-username/.ssh`.

## Generating a new SSH key pair
Now that we're in our .ssh folder, we can generate a new SSH key pair which we will use to log in without entering our password.

0. Type in `ssh-keygen` to start the process. Press <enter> through all the prompts until youyget a message saying `The key's randomart image is:` followed by a box with random characters inside.
0. Now check the contents of the .ssh folder with the command `ls`. You should notice two new files, **id_rsa** and **id_rsa.pub**, which is your **private** and **public** key respectively. If you're curious as to what these are and how they work, [you can read this article](http://blakesmith.me/2010/02/08/understanding-public-key-private-key-concepts.html).