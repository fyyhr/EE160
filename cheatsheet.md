So, there's some shortcuts that you ought to know.

First off, some shell commands (these are from BASh, but they work in C-Shell).
ctrl + l (that's the letter 'l'): Clear the terminal
ctrl + a: take you to the beginning of the line that you're typing on
ctrl + e: take you to the end of the line that you're typing on
ctrl + h: the same as backspace.
ctrl + c: instantly kill any running command or program. So if you create an infinite loop, you can use ctrl + c to immediately exit your process.
ctrl + d: exit the current shell. In most cases, it will log you out of wiliki. If you started a new shell inside of your shell, it will simply exit that shell. Don't worry about what that means.
ctrl + w: delete the WORD before the cursor. Sort of like when you ctrl + backspace in most applications.
ctrl + k: delete the rest of the line after the cursor. So only things before the cursor will be kept.
alt + f: move the cursor forward one word on the current line, like ctrl + right in word.
alt + b: move the cursor back one word on the current line, like ctrl + left in word.

Tab will auto-complete files and folder names. Using tab in C-Shell is slightly more powerful than BASh as it will give suggestions on what it should be and allow you to cycle through them. In BASh, tab will only auto-complete as far as it uniquely can. If you have two files, EE160 and EE211, if you type 'E' and hit tab, BASh will only auto-complete 'EE'. You then need to type more so it can identify which file it should auto-complete to.
Note: Some IDEs (Integrated development environments) like visual studio and eclipse can also auto-complete within coding by using tab. We are using Vim which does not have this feature.

Some important Vim commands:
Vim can be navigated with the arrow keys, but this is not suggested. For the most part, you should be navigating through vim using h, j, k, and l. It is also important to note that vim has multiple 'modes' that changes what certain keys do. You can look all of these up on your own time, I will provide you with the basic key functions.

h: move the cursor one character to the left
j: move the cursor one line down
k: move the cursor one line up
l: move the cursor one character to the right
i: Enter insert mode (NOTE: while in insert mode, any letter or number key will type their respective character)
esc: exit whatever mode you may be in (insert, visual, etc)

