Objectives:
Write and test a C++ program that implements a list with custom enhancements.

Practice concepts from Ch. 3.

Tasks:
Create a class with a custom name (detailed below) that is a copy of the textbook's List.h file with the following added methods:

NOTE:   Since lists are not indexed per se, the index here corresponds to its relative position in the list (e.g. the first non-sentinel node would be index 0, and the last non-sentinel node is index size-1.)

A method named insert_at(), which takes two parameters: an int representing the index to insert at, and a const Object & with the item to insert at that index.
This is a non-destructive method - the item at that index is not overwritten.  All incumbent items in the list must also remain in the list and be relocated in their relative order within the list.
The method must throw a std::out_of_range exception if the index parameter is negative or greater than the current size of the list.  (i.e. indices 0->size are valid for this method.)
A method named remove_at(), which takes one parameter: an int representing the index of the item to remove.
This will mutate the list - the item at that index is removed, as the name suggests.  All incumbent items in the list must also remain in the list and be relocated in their relative order within the list.  All nodes with values (i.e. non-sentinels) must be adjacent in the list.
The method must throw a std::out_of_range exception if the index parameter is negative or greater than highest valid index of the list.  (i.e. indices 0->(size-1) are valid for this method.)
A method named slice(), which takes two parameters: an int representing the index to start the slice at, and another int that represents the total number of items in the slice.
The method will dynamically create a list of the appropriate size (including sentinels) and return it once it has been populated.
The return list will be comprised of the items in the list being called, starting at the index represented by the first parameter, and will be populated with the number of items in the second parameter, starting at the provided index.
This is a non-destructive method - no items in the list are changed.
The method must throw a std::out_of_range exception if the start index parameter is negative or greater than the last occupied index of the list.  (i.e. indices 0->(size-1) are valid for this method.) It must also throw this exception if there are not enough items in the list between the start index and the last occupied index.
A method named merge(), which takes one parameter: a const List & representing another list whose contents will be appended to the end of the existing list being called in the order in which they are stored in the List parameter.
The list is being changed
This is a non-destructive method for the parameter - the List parameter should not be changed in any way
Note that slice() is the only method that will return anything.
Write a method called author() that will return a string comprised of your full (first and last, as it appears in Canvas) name, and your SDSU ID #.
Write a simple .cpp file with a main() that will create a list with at least five items and walk it through calls to each of the 5 required methods (call author() first), and call a method you write to first print out the original list, and then to print out appropriate results of either the original list or, in the case of slice(), the returned list.  (Note that you may have seen a very similar method recently.)
Add code to main() that precedes each section with a descriptive caption of what has just been done (e.g. "after calling insert_at(5, 6) ") before outputting the list.  Include at least one blank line in between each section, but do not space excessively or inconsistently.
None of the incumbent code in List.h is to be changed in any way, except for:
A comment block you add at the very top with the same info requested for the previous assignments.
Change the name of the List class to a name following the pattern:  A5ListXXxx, where XXxx is your first initial and first three letters in your last name (e.g. A5ListRSco)
All requirements of Assignments 1-4 are in force here unless explicitly rescinded or amended.  Follow the patterns in the code we've seen to date for good, clean syntax.  Your naming choices matter, so they'll be graded too.

Also, your output format, clarity, and descriptions are absolutely being graded.  Take the time to do your best work and aggressively verify your results or points may prove elusive.

When finished, upload (only) your .h and .cpp files on Canvas. Do not include any other files (Yes you will lose points if you do.) 

Use the same naming convention as Assignments 1-4, with the exception of changing the assignment number in the filename to...5.
