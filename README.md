Coding Standards 

In this section I will go through the coding standards/conventions that we used in this project. Coding conventions are simply a set of guidelines that you should follow when making changes to this project. Below I will outline the conventions that our team came up with.
C++ versions
The program must be coded in C++ using the latest version known as C++20 which was published in December 2020. We will use the newest version as it contains more language features and libraries. The main file should have the extension “.cpp”.
Header files
Firstly, all header files should have the extension “.h” and each .cpp file should have a matching .h file. Using header files make your code perform better and easier to understand. Header files should also be self-contained meaning they should compile on their own. Ensure you use “#include” in the header files to add every other file that needs to be included. To avoid making multiple inclusions, use “#define” where possible as a include guard.
Scoping
When programing, try to only use local variables or make variables in the narrowest scope possible. In contrast, use constants (const) where possible for things that wont change e.g. vat value. Make sure to use namespaces to divide up the global scope into smaller named scopes. 
Functions
Make sure each function has a return value. Where applicable, “0” should be used instead of NULL. Functions should also use parameters to allow inputs into the function. Try to make the function concise and as small as possible. If a function gets too long it can get hard to understand. As a rough guide, each function should not be longer than 50 lines. If it exceeds this limit, then you should try modifying the function so that it follows this convention.
Naming
Firstly, make sure to use camel casing when naming variables. The names should also be relevant to the function and not random names such as “function 1”. When naming files use lowercase letters and use underscores instead of spaces.
Comments 
All functions should include comments to improve readability of the code. This helps people understand the code when editing it. Use “//” when making comments. Each function should also have a comment describing its functionality.


Formatting 
Each line of code should not exceed 100 characters. This is to improve the readability of the program. You should also try to exclusively use ASCII characters. Additionally, use single spaces when it comes to indentations however namespaces do not require indentation. 
Exception rules
These rules and conventions should be followed when coding on this project however there are a few exceptions. If a function is longer than 50 lines and you cannot cut it down, yet still works perfectly then it is acceptable.  This is the same with the character limit of each line. If a line goes over 100 characters but works perfectly then it is accepted. The most important part is to remain consistent throughout the project so for example if you break a variable naming convention at least makes sure it fits in with the rest of the code.



Contribution guide 

In this document I will outline the procedure we use to allow all team members to contribute to the source code. In order to let everyone edit the code, we setup a git repository.  This means that team members can make changes to the code and push changes back to the repository. Within our team we created a set of rules to follow in order to make this process as simple as possible which can be seen below:
•	Before making any changes, check with the rest of the team that the changes are wanted and necessary.
•	Include documentation and comments with any changes you make to help the other team members understand
•	Only merge the pull request once every other team member has explicitly said that there fine with it
Within our group we want to ensure that every member feels welcome and included in the project. Every team member should treat each other with respect and no rude behaviour or discrimination of any kind will be tolerated. If anyone in the team feels like the are being treated unfairly then we encourage them to speak up and contact the project manager or another team member on MS Teams. From here the PM can bring it up to the group and together make the appropriate decision and try to resolve any issues.

Our standards 

In this section I will go through the standards that our group hold. By following these rules, we will create a happy and welcoming environment for the team to work in. This should lead to a better end project as well as healthy working relationship within the team.
•	Each member of the team must be respectful to each other and not use any inappropriate language
•	The team should split the work equally and each member should try to help each other out. If someone is stuck, they should bring it up with the team without any judgment from the other members.
•	Each member of the team should be able to freely give and receive constructive criticism without taking offence. If someone feels like the criticism is unfair, they should bring it up with the project manager.
•	Each person should be willing to compromise on their ideas, when it comes to the project, in order to create a better application.


Reporting problems

If you have found any bugs in the program please report it, however first check it hasn’t already been reported on GitHub under the section “issues”. When reporting the issue please give as much detail as possible.  If you have found a patch to any of the bugs listed in the “issues” section on GitHub please open a new GitHub pull request with the patch. Before submitting please ensure you are following the coding standards we have.
