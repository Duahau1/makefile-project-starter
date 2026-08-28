# Makefile Project Starter

- Name: Van Nguyen
- Email: vannguyen599@u.boisestate.edu
- Class: CS525

## Known Bugs or Issues

- `incorrect_sum` is intentionally incorrect. It returns `x + y - 1` instead
  of the mathematical sum of its two arguments.
- The crash and memory leaks used for Tasks 4 and 5 are intentional examples
  for debugging and sanitizer analysis, not production behavior.

## Experience

This project provided practice with C header files, include guards, function
prototypes, separate compilation, and Makefile build targets.

I read the Unity test harness documentation and added unit tests for every
function declared in `lab.h`. Running `make check` confirmed that the test
suite passes. I also used the debugger configurations to step through `main`
and the incorrect sum function.

The `product` function returns the product of two numbers. The
`incorrect_sum` function intentionally returns a value one less than the
correct sum, and its test verifies that known behavior.

After `make clean` and `make all`, `make report` generates the HTML and text
coverage reports in `build/report`. The tests cover all executable project
code and should report 100% coverage with all tests passing. `GCOVR_EXCL`
annotations are used only around system or library failure branches that are
not practical to trigger in the unit tests.

For the crash check, the debug executable includes debug symbols, no
optimization, and Address Sanitizer, while the release executable uses
optimization and compiler hardening flags. The `volatile` keyword prevents a
value from being optimized away, making the behavior useful to compare in the
debugger and between builds. Address Sanitizer reports memory errors and
leaks when they are enabled through `make leak` and `make leak-test`.
