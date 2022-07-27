>>>git --version

>>>git config --global user.name "username"
>>>git config --global user.email "email"

>>>git init

>>>git status

# for single file to be at the staging area
>>>git add "filename"

>>>git status

# Two : 1: Tracked  2: Untracked
# to add all

# to add all files to staging area
>>>git add --all
# or 
>>>git add --a

>>>gir status --short

    ?? - Untracked files
    A - Files added to stage
    M - Modified files
    D - Deleted files

>>>git commit -m "message , it is not mandetory, but good programming practice"

>>>git commit -a -m "message"
# -a is used to ingnore staging area and directly commit changes
# but new created files will not be commited.


>>>git log

# to see all the branch name
>>>git branch

# * means currently on this branch
# lets create the new Branch
>>>git branch branch-name


# again check the branch names
>>>git branch

<<<<<<< HEAD
# THIS IS ON MASTER BRANCH

>>>git checkout -b branch-name
# using -b , if branch not exit then it will ceate one.

=======

# to switch the branch
>>>git checkout branch-name

# this change is in BlueSky Branch
>>>>>>> BlueSky


>>>git checkout -b branch-name
# create one if not exit

>>>git merge branch-name
# merge the two branches


>>>git branch -d branch-name
# to delete the branch


-----------------------------------------------------------------------
# REMOTE GIT-HUB CONNECTION
# Note: Remember to use the same e-mail address you used in the Git config.

# Create the new repository and copy the HTTPS Code

>>>git remote add origin https://......

# first create some txt file and commit it before push
>>>git push origin master


-----------------------------------------------------------------------

# CODE WITH MOSH

git : version controll system
    1 : Track History
    2 : Work Together


Version Control System Categories : 
    1: Centralized -> Peoples are connectd to single server.
    2: Distributed -> Every team member have copy. e.g--> git

git: Free
     Open Source
     Scalable
     Super Fast
     

# set sublime as defaut editor
>>>D:\C++ Programs>git config --global core.editor "'C:\Program Files\Sublime Text 3/sublime_text.exe' -w"

# check
>>>git config --global -e

# End of Line 
for windows : \r -> Carriage Return
              \n -> line Feed

for mac/linux :
              \n -> line Feed

# IMPOERTANT IF TEAMS HAS VARIATION IN OS

# core.autocrlf

# SO IF YOU ARE ON WINDOWS : SET true
>>>git config --global core.autocrlf true

# SO IF YOU ARE ON MAC/LINUX : SET input
>>>git config --global core.autocrlf input

>>>git config --help


# if stuck in loop i.e git log .. etc, then try ctrl + z, crtl + x, q



# MYTH : Suppose files are in staging area and if we commit those files then files from staging area will be deleted
# FACT : Files are always there, when we add more files then again they are added.

# Git is efficient in storing data and it does not store the duplicate data.


# to remove the file , we need to delete the file from staging area and working directory


# to delete the file from both

1 : first delete from directory 
2 : check that file still in staging area by >>> git ls-files
3 : add the deleted file >>> git add file_deleted
4 : commit the changes

# or 
use 
>>> git rm file_name.extension
it will directly remove files from directory and staging area
then commit changes

git rm file1.js # Removes from working directory and staging area

# it will remove the file from directory and add the deleted file to satging area.
git rm --cached file1.js # Removes from staging area only


# to rename the files
>>>git mv old_file_name new_file_name
when we use this move command changes will be on both working and staging area


# files that you dont want to inclue ==> put path of them in .gitignore files

>>> mkdir logs
>>> echo "Hello" > logs/dev.txt

>>> echo logs/ > .gitignore


# index is alternative to staging area

>>> git rm --cached "filename of staging area to remove it from there"
if directory
>>> git rm --cached -r "filename"


if you are using terminal or linux or Git Bash
>>>ls -lart 
# used t show all hidden + active files


# if you have to get the last commit for the current file
>>> git checkout filename

# if all files should be as same as last commit then use this
>>> git checkout -f


>>> git log -p -numbers


# To compare working directory to staging area
>>> git diff


# Compare the staging area to last commit.
>>> git diff --staged


# in .gitignore 
use *.extension to get all files
for folder -> folder_name/
for particular file -> folder/file_name.extension
#


show the content in that file
>>> cat hello.py