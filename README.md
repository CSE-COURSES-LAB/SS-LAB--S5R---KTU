# SS-LAB--S5R---KTU
Write a program to simulate a Single Level File Organization
AIM
To implement a single level file organization.
DATA STRUCTURE
Create a struct named dir with following Variable
1) To store Directory name
2) To store File Name
3) Counter to count the number of files.
ALGORITHM
Algorithm for Single Level Directory
1. Read the directory name
2. Create a menu driven Option
2.1 Create File
2.2 Delete File
2.3 Search File
2.4 Display File
3. Read the choice ch
4. if ch == 2.1 Option
4.1 Read the file name in fname of dir struct
4.2 Increment the file count fcnt of dir struct
5. else if ch == 2.2 Option
5.1 Read the file name to delete
5.2 Search in the dir to struct to find the file
5.3 if found then
5.3.1 Display file deleted
5.3.2 Place that last file in the deleted position
5.3.3 Decrement the file count of dir struct
5.4 else Display file not found.
6.else if ch == 2.3 option
6.1 Read the name of the file
6.2 Search for the file in the dir struct
6.3 if found then
6.3.1 Display file found message
6.4 else display file not found
7. else if ch == 2.4 option
7.1 if file count is zero then
7.1.2 Display Directory Empty
7.2 else
7.2.1 for i= 0 to file count
7.2.1.2 Display file name
8. else display Incorrect Option

OUTPUT
Enter name of directory -- CSE
1. Create File
2. Delete File
3. Search File
4. Display Files
5. Exit
Enter your choice – 1
Enter the name of the file -- A
1. Create File
2. Delete File
3. Search File
4. Display Files
5. Exit
Enter your choice – 1
Enter the name of the file -- B
1. Create File
2. Delete File
3. Search File
4. Display Files
5. Exit
Enter your choice – 4
The Files are -- A B C
1. Create File
2. Delete File
3. Search File
4. Display Files
5. Exit
Enter your choice – 2
Enter the name of the file – B
File B is deleted
