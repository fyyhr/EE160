Navigating via command line can be tricky to get used to. Here's a rundown of the more common commands.

* ls <directory>: list directory contents. Default value for <directory> is "." (current directory).
* cd <directory>: change to directory. Default value for <directory> is "~" (home directory).
* pwd: print working directory. Useful when you need to scp/sftp a file.
* ssh <client@server:portnumber>: secure shell to server. Most commonly you will be using "ssh username@wiliki.eng.hawaii.edu:22"
* scp <username@remotehost:path/to/file.txt> </some/local/directory>: Copy file from remote to local directory. Can also go from local to remote, simply reverse the order.
* vi/vim <filename>: Open file to edit in vim. Either command will open the file with Vim on wiliki. If <filename> does not exist in the directory, vim will open a new file.
* touch <filename>: Create/datestamp <filename>.
* cp <filename> <newfilename>: Create a copy of <filename> named <newfilename>
* mv <filename> <destination/filename>: Move <filename> to <destination/filename>. If moving to the same directory, the file will simply be renamed.
* cc/gcc <filename> (-o <outputname>): compile file using gcc compiler. On wiliki, using either cc or gcc will invoke the same compiler. Some Linux distros may have them different. Optional addition of "-o <outputname>" allows you to name the output file. By default, it's a.out.
* ./<program>: Run <program>
