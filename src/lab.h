#ifndef LAB_H
#define LAB_H

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char *get_greeting(const char *restrict name);

/**
 * @brief Computes the sum of two integers (intentionally incorrect).
 *
 * This function returns x + y - 1 instead of the correct mathematical sum.
 * It is used for testing and debugging purposes.
 * @param x The first integer.
 * @param y The second integer.
 * @return The value x + y - 1.
 */
int incorrect_sum(int x, int y);

/**
 * @brief Computes the product of two integers.
 *
 * This function returns the mathematical product of two integers.
 * @param x The first integer.
 * @param y The second integer.
 * @return The product of x and y.
 */
int product(int x, int y);

#endif // LAB_H
