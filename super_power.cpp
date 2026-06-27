// Approach:
// If the exponent is represented as digits [d1, d2, ..., dk],
// then:
//
// a^(d1d2...dk)
// = (a^(d1d2...d(k-1)))^10 * a^(dk)
//
// We recursively remove the last digit of the exponent.
// modPow() is used to efficiently calculate powers modulo 1337
// using Binary Exponentiation.
//
// Time Complexity: O(n * log 10)
// Space Complexity: O(n) due to recursion.

part1 = (a^(remaining exponent))^10
part2 = a^(last digit)
answer = (part1 * part2) % 1337
