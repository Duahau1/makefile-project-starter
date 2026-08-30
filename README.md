# Project 0 - Compile, Test, Debug

- Name: Van Nguyen
- Email: vannguyen599@u.boisestate.edu
- Class: CS525

## Known Bugs or Issues

- `incorrect_sum` is intentionally incorrect. It returns `x + y - 1` instead
  of the mathematical sum of its two arguments.
- The crash and memory leaks used for Tasks 4 and 5 are intentional examples
  for debugging and sanitizer analysis, not production behavior. But they have been removed in task 7 to make sure we have 100% test coverage.

## Experience

This project provided practice with C header files, include guards, function
prototypes, separate compilation, and Makefile build targets.

I read the Unity test harness documentation and added unit tests for every
function declared in `lab.h`. Running `make check` confirmed that the test
suite passes. I also used the debugger configurations to step through `main`
to detect memory leaks and seg fault problems that I added in step 4. This is a very helpful experience as it requires me to set up VSCode remote server and tune my debugger so it is easy to step through stack traces. Also, this project allows me to refresh my memory in C. Other than that, I learned more about GitHub Actions and GitHub Codespaces. Overall, I think this is a good project to start with in this class. 